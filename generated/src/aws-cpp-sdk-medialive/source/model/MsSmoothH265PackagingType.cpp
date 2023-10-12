/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MsSmoothH265PackagingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace MsSmoothH265PackagingTypeMapper
      {

        static constexpr uint32_t HEV1_HASH = ConstExprHashingUtils::HashString("HEV1");
        static constexpr uint32_t HVC1_HASH = ConstExprHashingUtils::HashString("HVC1");


        MsSmoothH265PackagingType GetMsSmoothH265PackagingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEV1_HASH)
          {
            return MsSmoothH265PackagingType::HEV1;
          }
          else if (hashCode == HVC1_HASH)
          {
            return MsSmoothH265PackagingType::HVC1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MsSmoothH265PackagingType>(hashCode);
          }

          return MsSmoothH265PackagingType::NOT_SET;
        }

        Aws::String GetNameForMsSmoothH265PackagingType(MsSmoothH265PackagingType enumValue)
        {
          switch(enumValue)
          {
          case MsSmoothH265PackagingType::NOT_SET:
            return {};
          case MsSmoothH265PackagingType::HEV1:
            return "HEV1";
          case MsSmoothH265PackagingType::HVC1:
            return "HVC1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MsSmoothH265PackagingTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
