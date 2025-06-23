/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/SpotInstanceTypeEnum.h>
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
      namespace SpotInstanceTypeEnumMapper
      {

        static const int one_time_HASH = HashingUtils::HashString("one-time");
        static const int persistent_HASH = HashingUtils::HashString("persistent");


        SpotInstanceTypeEnum GetSpotInstanceTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == one_time_HASH)
          {
            return SpotInstanceTypeEnum::one_time;
          }
          else if (hashCode == persistent_HASH)
          {
            return SpotInstanceTypeEnum::persistent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpotInstanceTypeEnum>(hashCode);
          }

          return SpotInstanceTypeEnum::NOT_SET;
        }

        Aws::String GetNameForSpotInstanceTypeEnum(SpotInstanceTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case SpotInstanceTypeEnum::NOT_SET:
            return {};
          case SpotInstanceTypeEnum::one_time:
            return "one-time";
          case SpotInstanceTypeEnum::persistent:
            return "persistent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpotInstanceTypeEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
