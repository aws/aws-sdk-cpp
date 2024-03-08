/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RegionAvailabilityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace RegionAvailabilityStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");


        RegionAvailabilityStatus GetRegionAvailabilityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return RegionAvailabilityStatus::AVAILABLE;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return RegionAvailabilityStatus::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegionAvailabilityStatus>(hashCode);
          }

          return RegionAvailabilityStatus::NOT_SET;
        }

        Aws::String GetNameForRegionAvailabilityStatus(RegionAvailabilityStatus enumValue)
        {
          switch(enumValue)
          {
          case RegionAvailabilityStatus::NOT_SET:
            return {};
          case RegionAvailabilityStatus::AVAILABLE:
            return "AVAILABLE";
          case RegionAvailabilityStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegionAvailabilityStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
