/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DeliveryEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace DeliveryEventTypeMapper
      {

        static constexpr uint32_t SEND_HASH = ConstExprHashingUtils::HashString("SEND");
        static constexpr uint32_t DELIVERY_HASH = ConstExprHashingUtils::HashString("DELIVERY");
        static constexpr uint32_t TRANSIENT_BOUNCE_HASH = ConstExprHashingUtils::HashString("TRANSIENT_BOUNCE");
        static constexpr uint32_t PERMANENT_BOUNCE_HASH = ConstExprHashingUtils::HashString("PERMANENT_BOUNCE");
        static constexpr uint32_t UNDETERMINED_BOUNCE_HASH = ConstExprHashingUtils::HashString("UNDETERMINED_BOUNCE");
        static constexpr uint32_t COMPLAINT_HASH = ConstExprHashingUtils::HashString("COMPLAINT");


        DeliveryEventType GetDeliveryEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_HASH)
          {
            return DeliveryEventType::SEND;
          }
          else if (hashCode == DELIVERY_HASH)
          {
            return DeliveryEventType::DELIVERY;
          }
          else if (hashCode == TRANSIENT_BOUNCE_HASH)
          {
            return DeliveryEventType::TRANSIENT_BOUNCE;
          }
          else if (hashCode == PERMANENT_BOUNCE_HASH)
          {
            return DeliveryEventType::PERMANENT_BOUNCE;
          }
          else if (hashCode == UNDETERMINED_BOUNCE_HASH)
          {
            return DeliveryEventType::UNDETERMINED_BOUNCE;
          }
          else if (hashCode == COMPLAINT_HASH)
          {
            return DeliveryEventType::COMPLAINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryEventType>(hashCode);
          }

          return DeliveryEventType::NOT_SET;
        }

        Aws::String GetNameForDeliveryEventType(DeliveryEventType enumValue)
        {
          switch(enumValue)
          {
          case DeliveryEventType::NOT_SET:
            return {};
          case DeliveryEventType::SEND:
            return "SEND";
          case DeliveryEventType::DELIVERY:
            return "DELIVERY";
          case DeliveryEventType::TRANSIENT_BOUNCE:
            return "TRANSIENT_BOUNCE";
          case DeliveryEventType::PERMANENT_BOUNCE:
            return "PERMANENT_BOUNCE";
          case DeliveryEventType::UNDETERMINED_BOUNCE:
            return "UNDETERMINED_BOUNCE";
          case DeliveryEventType::COMPLAINT:
            return "COMPLAINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryEventTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
