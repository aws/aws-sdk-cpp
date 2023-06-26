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

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int MESSAGE_REJECTED_HASH = HashingUtils::HashString("MESSAGE_REJECTED");
        static const int MAIL_FROM_DOMAIN_NOT_VERIFIED_HASH = HashingUtils::HashString("MAIL_FROM_DOMAIN_NOT_VERIFIED");
        static const int CONFIGURATION_SET_NOT_FOUND_HASH = HashingUtils::HashString("CONFIGURATION_SET_NOT_FOUND");
        static const int TEMPLATE_NOT_FOUND_HASH = HashingUtils::HashString("TEMPLATE_NOT_FOUND");
        static const int ACCOUNT_SUSPENDED_HASH = HashingUtils::HashString("ACCOUNT_SUSPENDED");
        static const int ACCOUNT_THROTTLED_HASH = HashingUtils::HashString("ACCOUNT_THROTTLED");
        static const int ACCOUNT_DAILY_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_DAILY_QUOTA_EXCEEDED");
        static const int INVALID_SENDING_POOL_NAME_HASH = HashingUtils::HashString("INVALID_SENDING_POOL_NAME");
        static const int ACCOUNT_SENDING_PAUSED_HASH = HashingUtils::HashString("ACCOUNT_SENDING_PAUSED");
        static const int CONFIGURATION_SET_SENDING_PAUSED_HASH = HashingUtils::HashString("CONFIGURATION_SET_SENDING_PAUSED");
        static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("INVALID_PARAMETER");
        static const int TRANSIENT_FAILURE_HASH = HashingUtils::HashString("TRANSIENT_FAILURE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        BulkEmailStatus GetBulkEmailStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
