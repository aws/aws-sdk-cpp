/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/BulkEmailStatus.h>
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
      namespace BulkEmailStatusMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t MESSAGE_REJECTED_HASH = ConstExprHashingUtils::HashString("MESSAGE_REJECTED");
        static constexpr uint32_t MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH = ConstExprHashingUtils::HashString("MAIL_FROM_DOMAIN_NOT_VERIFIED");
        static constexpr uint32_t CONFIGURATION_SET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CONFIGURATION_SET_NOT_FOUND");
        static constexpr uint32_t TEMPLATE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TEMPLATE_NOT_FOUND");
        static constexpr uint32_t ACCOUNT_SUSPENDED_HASH = ConstExprHashingUtils::HashString("ACCOUNT_SUSPENDED");
        static constexpr uint32_t ACCOUNT_THROTTLED_HASH = ConstExprHashingUtils::HashString("ACCOUNT_THROTTLED");
        static constexpr uint32_t ACCOUNT_DAILY_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ACCOUNT_DAILY_QUOTA_EXCEEDED");
        static constexpr uint32_t INVALID_SENDING_POOL_NAME_HASH = ConstExprHashingUtils::HashString("INVALID_SENDING_POOL_NAME");
        static constexpr uint32_t ACCOUNT_SENDING_PAUSED_HASH = ConstExprHashingUtils::HashString("ACCOUNT_SENDING_PAUSED");
        static constexpr uint32_t CONFIGURATION_SET_SENDING_PAUSED_HASH = ConstExprHashingUtils::HashString("CONFIGURATION_SET_SENDING_PAUSED");
        static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("INVALID_PARAMETER");
        static constexpr uint32_t TRANSIENT_FAILURE_HASH = ConstExprHashingUtils::HashString("TRANSIENT_FAILURE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        BulkEmailStatus GetBulkEmailStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return BulkEmailStatus::SUCCESS;
          }
          else if (hashCode == MESSAGE_REJECTED_HASH)
          {
            return BulkEmailStatus::MESSAGE_REJECTED;
          }
          else if (hashCode == MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH)
          {
            return BulkEmailStatus::MAIL_FROM_DOMAIN_NOT_VERIFIED;
          }
          else if (hashCode == CONFIGURATION_SET_NOT_FOUND_HASH)
          {
            return BulkEmailStatus::CONFIGURATION_SET_NOT_FOUND;
          }
          else if (hashCode == TEMPLATE_NOT_FOUND_HASH)
          {
            return BulkEmailStatus::TEMPLATE_NOT_FOUND;
          }
          else if (hashCode == ACCOUNT_SUSPENDED_HASH)
          {
            return BulkEmailStatus::ACCOUNT_SUSPENDED;
          }
          else if (hashCode == ACCOUNT_THROTTLED_HASH)
          {
            return BulkEmailStatus::ACCOUNT_THROTTLED;
          }
          else if (hashCode == ACCOUNT_DAILY_QUOTA_EXCEEDED_HASH)
          {
            return BulkEmailStatus::ACCOUNT_DAILY_QUOTA_EXCEEDED;
          }
          else if (hashCode == INVALID_SENDING_POOL_NAME_HASH)
          {
            return BulkEmailStatus::INVALID_SENDING_POOL_NAME;
          }
          else if (hashCode == ACCOUNT_SENDING_PAUSED_HASH)
          {
            return BulkEmailStatus::ACCOUNT_SENDING_PAUSED;
          }
          else if (hashCode == CONFIGURATION_SET_SENDING_PAUSED_HASH)
          {
            return BulkEmailStatus::CONFIGURATION_SET_SENDING_PAUSED;
          }
          else if (hashCode == INVALID_PARAMETER_HASH)
          {
            return BulkEmailStatus::INVALID_PARAMETER;
          }
          else if (hashCode == TRANSIENT_FAILURE_HASH)
          {
            return BulkEmailStatus::TRANSIENT_FAILURE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BulkEmailStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BulkEmailStatus>(hashCode);
          }

          return BulkEmailStatus::NOT_SET;
        }

        Aws::String GetNameForBulkEmailStatus(BulkEmailStatus enumValue)
        {
          switch(enumValue)
          {
          case BulkEmailStatus::NOT_SET:
            return {};
          case BulkEmailStatus::SUCCESS:
            return "SUCCESS";
          case BulkEmailStatus::MESSAGE_REJECTED:
            return "MESSAGE_REJECTED";
          case BulkEmailStatus::MAIL_FROM_DOMAIN_NOT_VERIFIED:
            return "MAIL_FROM_DOMAIN_NOT_VERIFIED";
          case BulkEmailStatus::CONFIGURATION_SET_NOT_FOUND:
            return "CONFIGURATION_SET_NOT_FOUND";
          case BulkEmailStatus::TEMPLATE_NOT_FOUND:
            return "TEMPLATE_NOT_FOUND";
          case BulkEmailStatus::ACCOUNT_SUSPENDED:
            return "ACCOUNT_SUSPENDED";
          case BulkEmailStatus::ACCOUNT_THROTTLED:
            return "ACCOUNT_THROTTLED";
          case BulkEmailStatus::ACCOUNT_DAILY_QUOTA_EXCEEDED:
            return "ACCOUNT_DAILY_QUOTA_EXCEEDED";
          case BulkEmailStatus::INVALID_SENDING_POOL_NAME:
            return "INVALID_SENDING_POOL_NAME";
          case BulkEmailStatus::ACCOUNT_SENDING_PAUSED:
            return "ACCOUNT_SENDING_PAUSED";
          case BulkEmailStatus::CONFIGURATION_SET_SENDING_PAUSED:
            return "CONFIGURATION_SET_SENDING_PAUSED";
          case BulkEmailStatus::INVALID_PARAMETER:
            return "INVALID_PARAMETER";
          case BulkEmailStatus::TRANSIENT_FAILURE:
            return "TRANSIENT_FAILURE";
          case BulkEmailStatus::FAILED:
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

      } // namespace BulkEmailStatusMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
