/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/RegionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMIncidents
  {
    namespace Model
    {
      namespace RegionStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        RegionStatus GetRegionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return RegionStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return RegionStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return RegionStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RegionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegionStatus>(hashCode);
          }

          return RegionStatus::NOT_SET;
        }

        Aws::String GetNameForRegionStatus(RegionStatus enumValue)
        {
          switch(enumValue)
          {
          case RegionStatus::NOT_SET:
            return {};
          case RegionStatus::ACTIVE:
            return "ACTIVE";
          case RegionStatus::CREATING:
            return "CREATING";
          case RegionStatus::DELETING:
            return "DELETING";
          case RegionStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegionStatusMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws
