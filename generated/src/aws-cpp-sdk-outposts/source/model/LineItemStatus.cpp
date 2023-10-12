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

        static constexpr uint32_t PREPARING_HASH = ConstExprHashingUtils::HashString("PREPARING");
        static constexpr uint32_t BUILDING_HASH = ConstExprHashingUtils::HashString("BUILDING");
        static constexpr uint32_t SHIPPED_HASH = ConstExprHashingUtils::HashString("SHIPPED");
        static constexpr uint32_t DELIVERED_HASH = ConstExprHashingUtils::HashString("DELIVERED");
        static constexpr uint32_t INSTALLING_HASH = ConstExprHashingUtils::HashString("INSTALLING");
        static constexpr uint32_t INSTALLED_HASH = ConstExprHashingUtils::HashString("INSTALLED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t REPLACED_HASH = ConstExprHashingUtils::HashString("REPLACED");


        LineItemStatus GetLineItemStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
