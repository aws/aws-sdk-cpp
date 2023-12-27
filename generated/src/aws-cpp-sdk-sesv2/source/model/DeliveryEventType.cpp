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

        static const int SEND_HASH = HashingUtils::HashString("SEND");
        static const int DELIVERY_HASH = HashingUtils::HashString("DELIVERY");
        static const int TRANSIENT_BOUNCE_HASH = HashingUtils::HashString("TRANSIENT_BOUNCE");
        static const int PERMANENT_BOUNCE_HASH = HashingUtils::HashString("PERMANENT_BOUNCE");
        static const int UNDETERMINED_BOUNCE_HASH = HashingUtils::HashString("UNDETERMINED_BOUNCE");
        static const int COMPLAINT_HASH = HashingUtils::HashString("COMPLAINT");


        DeliveryEventType GetDeliveryEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
