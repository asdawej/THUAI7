﻿using Preparation.Utility;

namespace GameClass.GameObj.Bullets;

internal sealed class Shell : Bullet
{
    public Shell(Ship ship, XY pos, int radius = GameData.BulletRadius) :
        base(ship, radius, pos)
    {
        this.AP.SetReturnOri(GameData.ShellDamage);
    }
    public override double BulletBombRange => 0;
    public override double AttackDistance => GameData.ShellRange;
    public override int Speed => GameData.ShellSpeed;
    public override int CastTime => GameData.ShellCastTime;
    public override int SwingTime => GameData.ShellSwingTime;
    private const int cd = GameData.ShellSwingTime;
    public override int CD => cd;
    public const int maxBulletNum = 1;
    public override int MaxBulletNum => maxBulletNum;
    public override BulletType TypeOfBullet => BulletType.Shell;
    public override bool CanAttack(GameObj target)
    {
        //if (target.Type == GameObjType.Ship
        //    || target.Type == GameObjType.Construction
        //    || target.Type == GameObjType.Wormhole
        //    || target.Type == GameObjType.Home)
        //    return true;
        return false;
    }
    public override bool CanBeBombed(GameObjType gameObjType)
    {
        return false;
    }
}