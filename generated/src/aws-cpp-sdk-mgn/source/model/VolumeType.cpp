/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/VolumeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace VolumeTypeMapper
      {

        static constexpr uint32_t io1_HASH = ConstExprHashingUtils::HashString("io1");
        static constexpr uint32_t io2_HASH = ConstExprHashingUtils::HashString("io2");
        static constexpr uint32_t gp3_HASH = ConstExprHashingUtils::HashString("gp3");
        static constexpr uint32_t gp2_HASH = ConstExprHashingUtils::HashString("gp2");
        static constexpr uint32_t st1_HASH = ConstExprHashingUtils::HashString("st1");
        static constexpr uint32_t sc1_HASH = ConstExprHashingUtils::HashString("sc1");
        static constexpr uint32_t standard_HASH = ConstExprHashingUtils::HashString("standard");


        VolumeType GetVolumeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == io1_HASH)
          {
            return VolumeType::io1;
          }
          else if (hashCode == io2_HASH)
          {
            return VolumeType::io2;
          }
          else if (hashCode == gp3_HASH)
          {
            return VolumeType::gp3;
          }
          else if (hashCode == gp2_HASH)
          {
            return VolumeType::gp2;
          }
          else if (hashCode == st1_HASH)
          {
            return VolumeType::st1;
          }
          else if (hashCode == sc1_HASH)
          {
            return VolumeType::sc1;
          }
          else if (hashCode == standard_HASH)
          {
            return VolumeType::standard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeType>(hashCode);
          }

          return VolumeType::NOT_SET;
        }

        Aws::String GetNameForVolumeType(VolumeType enumValue)
        {
          switch(enumValue)
          {
          case VolumeType::NOT_SET:
            return {};
          case VolumeType::io1:
            return "io1";
          case VolumeType::io2:
            return "io2";
          case VolumeType::gp3:
            return "gp3";
          case VolumeType::gp2:
            return "gp2";
          case VolumeType::st1:
            return "st1";
          case VolumeType::sc1:
            return "sc1";
          case VolumeType::standard:
            return "standard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeTypeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
