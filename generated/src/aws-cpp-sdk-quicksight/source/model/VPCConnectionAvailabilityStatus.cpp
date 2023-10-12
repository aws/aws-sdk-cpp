/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VPCConnectionAvailabilityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace VPCConnectionAvailabilityStatusMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("UNAVAILABLE");
        static constexpr uint32_t PARTIALLY_AVAILABLE_HASH = ConstExprHashingUtils::HashString("PARTIALLY_AVAILABLE");


        VPCConnectionAvailabilityStatus GetVPCConnectionAvailabilityStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return VPCConnectionAvailabilityStatus::AVAILABLE;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return VPCConnectionAvailabilityStatus::UNAVAILABLE;
          }
          else if (hashCode == PARTIALLY_AVAILABLE_HASH)
          {
            return VPCConnectionAvailabilityStatus::PARTIALLY_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VPCConnectionAvailabilityStatus>(hashCode);
          }

          return VPCConnectionAvailabilityStatus::NOT_SET;
        }

        Aws::String GetNameForVPCConnectionAvailabilityStatus(VPCConnectionAvailabilityStatus enumValue)
        {
          switch(enumValue)
          {
          case VPCConnectionAvailabilityStatus::NOT_SET:
            return {};
          case VPCConnectionAvailabilityStatus::AVAILABLE:
            return "AVAILABLE";
          case VPCConnectionAvailabilityStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          case VPCConnectionAvailabilityStatus::PARTIALLY_AVAILABLE:
            return "PARTIALLY_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VPCConnectionAvailabilityStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
