/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Metric.h>
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
      namespace MetricMapper
      {

        static const int SEND_HASH = HashingUtils::HashString("SEND");
        static const int COMPLAINT_HASH = HashingUtils::HashString("COMPLAINT");
        static const int PERMANENT_BOUNCE_HASH = HashingUtils::HashString("PERMANENT_BOUNCE");
        static const int TRANSIENT_BOUNCE_HASH = HashingUtils::HashString("TRANSIENT_BOUNCE");
        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int CLICK_HASH = HashingUtils::HashString("CLICK");
        static const int DELIVERY_HASH = HashingUtils::HashString("DELIVERY");
        static const int DELIVERY_OPEN_HASH = HashingUtils::HashString("DELIVERY_OPEN");
        static const int DELIVERY_CLICK_HASH = HashingUtils::HashString("DELIVERY_CLICK");
        static const int DELIVERY_COMPLAINT_HASH = HashingUtils::HashString("DELIVERY_COMPLAINT");


        Metric GetMetricForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_HASH)
          {
            return Metric::SEND;
          }
          else if (hashCode == COMPLAINT_HASH)
          {
            return Metric::COMPLAINT;
          }
          else if (hashCode == PERMANENT_BOUNCE_HASH)
          {
            return Metric::PERMANENT_BOUNCE;
          }
          else if (hashCode == TRANSIENT_BOUNCE_HASH)
          {
            return Metric::TRANSIENT_BOUNCE;
          }
          else if (hashCode == OPEN_HASH)
          {
            return Metric::OPEN;
          }
          else if (hashCode == CLICK_HASH)
          {
            return Metric::CLICK;
          }
          else if (hashCode == DELIVERY_HASH)
          {
            return Metric::DELIVERY;
          }
          else if (hashCode == DELIVERY_OPEN_HASH)
          {
            return Metric::DELIVERY_OPEN;
          }
          else if (hashCode == DELIVERY_CLICK_HASH)
          {
            return Metric::DELIVERY_CLICK;
          }
          else if (hashCode == DELIVERY_COMPLAINT_HASH)
          {
            return Metric::DELIVERY_COMPLAINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Metric>(hashCode);
          }

          return Metric::NOT_SET;
        }

        Aws::String GetNameForMetric(Metric enumValue)
        {
          switch(enumValue)
          {
          case Metric::SEND:
            return "SEND";
          case Metric::COMPLAINT:
            return "COMPLAINT";
          case Metric::PERMANENT_BOUNCE:
            return "PERMANENT_BOUNCE";
          case Metric::TRANSIENT_BOUNCE:
            return "TRANSIENT_BOUNCE";
          case Metric::OPEN:
            return "OPEN";
          case Metric::CLICK:
            return "CLICK";
          case Metric::DELIVERY:
            return "DELIVERY";
          case Metric::DELIVERY_OPEN:
            return "DELIVERY_OPEN";
          case Metric::DELIVERY_CLICK:
            return "DELIVERY_CLICK";
          case Metric::DELIVERY_COMPLAINT:
            return "DELIVERY_COMPLAINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
