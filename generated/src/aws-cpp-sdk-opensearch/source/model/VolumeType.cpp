/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/VolumeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace VolumeTypeMapper
      {

        static constexpr uint32_t standard_HASH = ConstExprHashingUtils::HashString("standard");
        static constexpr uint32_t gp2_HASH = ConstExprHashingUtils::HashString("gp2");
        static constexpr uint32_t io1_HASH = ConstExprHashingUtils::HashString("io1");
        static constexpr uint32_t gp3_HASH = ConstExprHashingUtils::HashString("gp3");


        VolumeType GetVolumeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return VolumeType::standard;
          }
          else if (hashCode == gp2_HASH)
          {
            return VolumeType::gp2;
          }
          else if (hashCode == io1_HASH)
          {
            return VolumeType::io1;
          }
          else if (hashCode == gp3_HASH)
          {
            return VolumeType::gp3;
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
          case VolumeType::standard:
            return "standard";
          case VolumeType::gp2:
            return "gp2";
          case VolumeType::io1:
            return "io1";
          case VolumeType::gp3:
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

      } // namespace VolumeTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
