/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/LineItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace LineItemStatusMapper
      {

        static const int PREPARING_HASH = HashingUtils::HashString("PREPARING");
        static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");
        static const int SHIPPED_HASH = HashingUtils::HashString("SHIPPED");
        static const int DELIVERED_HASH = HashingUtils::HashString("DELIVERED");
        static const int INSTALLING_HASH = HashingUtils::HashString("INSTALLING");
        static const int INSTALLED_HASH = HashingUtils::HashString("INSTALLED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int REPLACED_HASH = HashingUtils::HashString("REPLACED");


        LineItemStatus GetLineItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PREPARING_HASH)
          {
            return LineItemStatus::PREPARING;
          }
          else if (hashCode == BUILDING_HASH)
          {
            return LineItemStatus::BUILDING;
          }
          else if (hashCode == SHIPPED_HASH)
          {
            return LineItemStatus::SHIPPED;
          }
          else if (hashCode == DELIVERED_HASH)
          {
            return LineItemStatus::DELIVERED;
          }
          else if (hashCode == INSTALLING_HASH)
          {
            return LineItemStatus::INSTALLING;
          }
          else if (hashCode == INSTALLED_HASH)
          {
            return LineItemStatus::INSTALLED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return LineItemStatus::ERROR_;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return LineItemStatus::CANCELLED;
          }
          else if (hashCode == REPLACED_HASH)
          {
            return LineItemStatus::REPLACED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineItemStatus>(hashCode);
          }

          return LineItemStatus::NOT_SET;
        }

        Aws::String GetNameForLineItemStatus(LineItemStatus enumValue)
        {
          switch(enumValue)
          {
          case LineItemStatus::NOT_SET:
            return {};
          case LineItemStatus::PREPARING:
            return "PREPARING";
          case LineItemStatus::BUILDING:
            return "BUILDING";
          case LineItemStatus::SHIPPED:
            return "SHIPPED";
          case LineItemStatus::DELIVERED:
            return "DELIVERED";
          case LineItemStatus::INSTALLING:
            return "INSTALLING";
          case LineItemStatus::INSTALLED:
            return "INSTALLED";
          case LineItemStatus::ERROR_:
            return "ERROR";
          case LineItemStatus::CANCELLED:
            return "CANCELLED";
          case LineItemStatus::REPLACED:
            return "REPLACED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineItemStatusMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
