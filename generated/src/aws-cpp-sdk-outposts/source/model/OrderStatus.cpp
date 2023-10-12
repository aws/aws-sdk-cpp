/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/OrderStatus.h>
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
      namespace OrderStatusMapper
      {

        static constexpr uint32_t RECEIVED_HASH = ConstExprHashingUtils::HashString("RECEIVED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t INSTALLING_HASH = ConstExprHashingUtils::HashString("INSTALLING");
        static constexpr uint32_t FULFILLED_HASH = ConstExprHashingUtils::HashString("FULFILLED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t PREPARING_HASH = ConstExprHashingUtils::HashString("PREPARING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        OrderStatus GetOrderStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECEIVED_HASH)
          {
            return OrderStatus::RECEIVED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return OrderStatus::PENDING;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return OrderStatus::PROCESSING;
          }
          else if (hashCode == INSTALLING_HASH)
          {
            return OrderStatus::INSTALLING;
          }
          else if (hashCode == FULFILLED_HASH)
          {
            return OrderStatus::FULFILLED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return OrderStatus::CANCELLED;
          }
          else if (hashCode == PREPARING_HASH)
          {
            return OrderStatus::PREPARING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return OrderStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return OrderStatus::COMPLETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return OrderStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderStatus>(hashCode);
          }

          return OrderStatus::NOT_SET;
        }

        Aws::String GetNameForOrderStatus(OrderStatus enumValue)
        {
          switch(enumValue)
          {
          case OrderStatus::NOT_SET:
            return {};
          case OrderStatus::RECEIVED:
            return "RECEIVED";
          case OrderStatus::PENDING:
            return "PENDING";
          case OrderStatus::PROCESSING:
            return "PROCESSING";
          case OrderStatus::INSTALLING:
            return "INSTALLING";
          case OrderStatus::FULFILLED:
            return "FULFILLED";
          case OrderStatus::CANCELLED:
            return "CANCELLED";
          case OrderStatus::PREPARING:
            return "PREPARING";
          case OrderStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case OrderStatus::COMPLETED:
            return "COMPLETED";
          case OrderStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderStatusMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
