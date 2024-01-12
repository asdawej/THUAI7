using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using Protobuf;

public class MapControl : SingletonMono<MapControl>
{
    public GameObject mapFa;
    public void DrawMap(MessageOfMap map)
    {
        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < 50; j++)
            {
                if (ParaDefine.GetInstance().PT(map.Rows[i].Cols[j]))
                {
                    if (map.Rows[i].Cols[j] == PlaceType.Shadow)
                        ObjectCreater.GetInstance().CreateObject(
                            ParaDefine.GetInstance().PT(PlaceType.Space),
                            ParaDefine.GetInstance().CellToMap(i, j),
                            Quaternion.identity,
                            mapFa.transform);
                    ObjectCreater.GetInstance().CreateObject(
                        ParaDefine.GetInstance().PT(map.Rows[i].Cols[j]),
                        ParaDefine.GetInstance().CellToMap(i, j),
                        Quaternion.identity,
                        mapFa.transform);
                }
            }
        }
    }
}
