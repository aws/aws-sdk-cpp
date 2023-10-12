/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DeliveryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace DeliveryStatusMapper
      {

        static constexpr uint32_t SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("SUCCESSFUL");
        static constexpr uint32_t THROTTLED_HASH = ConstExprHashingUtils::HashString("THROTTLED");
        static constexpr uint32_t TEMPORARY_FAILURE_HASH = ConstExprHashingUtils::HashString("TEMPORARY_FAILURE");
        static constexpr uint32_t PERMANENT_FAILURE_HASH = ConstExprHashingUtils::HashString("PERMANENT_FAILURE");
        static constexpr uint32_t UNKNOWN_FAILURE_HASH = ConstExprHashingUtils::HashString("UNKNOWN_FAILURE");
        static constexpr uint32_t OPT_OUT_HASH = ConstExprHashingUtils::HashString("OPT_OUT");
        static constexpr uint32_t DUPLICATE_HASH = ConstExprHashingUtils::HashString("DUPLICATE");


        DeliveryStatus GetDeliveryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESSFUL_HASH)
          {
            return DeliveryStatus::SUCCESSFUL;
          }
          else if (hashCode == THROTTLED_HASH)
          {
            return DeliveryStatus::THROTTLED;
          }
          else if (hashCode == TEMPORARY_FAILURE_HASH)
          {
            return DeliveryStatus::TEMPORARY_FAILURE;
          }
          else if (hashCode == PERMANENT_FAILURE_HASH)
          {
            return DeliveryStatus::PERMANENT_FAILURE;
          }
          else if (hashCode == UNKNOWN_FAILURE_HASH)
          {
            return DeliveryStatus::UNKNOWN_FAILURE;
          }
          else if (hashCode == OPT_OUT_HASH)
          {
            return DeliveryStatus::OPT_OUT;
          }
          else if (hashCode == DUPLICATE_HASH)
          {
            return DeliveryStatus::DUPLICATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStatus>(hashCode);
          }

          return DeliveryStatus::NOT_SET;
        }

        Aws::String GetNameForDeliveryStatus(DeliveryStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStatus::NOT_SET:
            return {};
          case DeliveryStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case DeliveryStatus::THROTTLED:
            return "THROTTLED";
          case DeliveryStatus::TEMPORARY_FAILURE:
            return "TEMPORARY_FAILURE";
          case DeliveryStatus::PERMANENT_FAILURE:
            return "PERMANENT_FAILURE";
          case DeliveryStatus::UNKNOWN_FAILURE:
            return "UNKNOWN_FAILURE";
          case DeliveryStatus::OPT_OUT:
            return "OPT_OUT";
          case DeliveryStatus::DUPLICATE:
            return "DUPLICATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryStatusMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
