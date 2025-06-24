/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/VolumeTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace VolumeTypeEnumMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int io1_HASH = HashingUtils::HashString("io1");
        static const int io2_HASH = HashingUtils::HashString("io2");
        static const int gp2_HASH = HashingUtils::HashString("gp2");
        static const int sc1_HASH = HashingUtils::HashString("sc1");
        static const int st1_HASH = HashingUtils::HashString("st1");
        static const int gp3_HASH = HashingUtils::HashString("gp3");


        VolumeTypeEnum GetVolumeTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return VolumeTypeEnum::standard;
          }
          else if (hashCode == io1_HASH)
          {
            return VolumeTypeEnum::io1;
          }
          else if (hashCode == io2_HASH)
          {
            return VolumeTypeEnum::io2;
          }
          else if (hashCode == gp2_HASH)
          {
            return VolumeTypeEnum::gp2;
          }
          else if (hashCode == sc1_HASH)
          {
            return VolumeTypeEnum::sc1;
          }
          else if (hashCode == st1_HASH)
          {
            return VolumeTypeEnum::st1;
          }
          else if (hashCode == gp3_HASH)
          {
            return VolumeTypeEnum::gp3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeTypeEnum>(hashCode);
          }

          return VolumeTypeEnum::NOT_SET;
        }

        Aws::String GetNameForVolumeTypeEnum(VolumeTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case VolumeTypeEnum::NOT_SET:
            return {};
          case VolumeTypeEnum::standard:
            return "standard";
          case VolumeTypeEnum::io1:
            return "io1";
          case VolumeTypeEnum::io2:
            return "io2";
          case VolumeTypeEnum::gp2:
            return "gp2";
          case VolumeTypeEnum::sc1:
            return "sc1";
          case VolumeTypeEnum::st1:
            return "st1";
          case VolumeTypeEnum::gp3:
            return "gp3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeTypeEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
