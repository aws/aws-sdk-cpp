/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SubscriptionProtocolType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace SubscriptionProtocolTypeMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int EMAIL_JSON_HASH = HashingUtils::HashString("EMAIL_JSON");
        static const int SMS_HASH = HashingUtils::HashString("SMS");
        static const int SQS_HASH = HashingUtils::HashString("SQS");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int APP_HASH = HashingUtils::HashString("APP");
        static const int FIREHOSE_HASH = HashingUtils::HashString("FIREHOSE");


        SubscriptionProtocolType GetSubscriptionProtocolTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return SubscriptionProtocolType::HTTP;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return SubscriptionProtocolType::HTTPS;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return SubscriptionProtocolType::EMAIL;
          }
          else if (hashCode == EMAIL_JSON_HASH)
          {
            return SubscriptionProtocolType::EMAIL_JSON;
          }
          else if (hashCode == SMS_HASH)
          {
            return SubscriptionProtocolType::SMS;
          }
          else if (hashCode == SQS_HASH)
          {
            return SubscriptionProtocolType::SQS;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return SubscriptionProtocolType::LAMBDA;
          }
          else if (hashCode == APP_HASH)
          {
            return SubscriptionProtocolType::APP;
          }
          else if (hashCode == FIREHOSE_HASH)
          {
            return SubscriptionProtocolType::FIREHOSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionProtocolType>(hashCode);
          }

          return SubscriptionProtocolType::NOT_SET;
        }

        Aws::String GetNameForSubscriptionProtocolType(SubscriptionProtocolType enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionProtocolType::HTTP:
            return "HTTP";
          case SubscriptionProtocolType::HTTPS:
            return "HTTPS";
          case SubscriptionProtocolType::EMAIL:
            return "EMAIL";
          case SubscriptionProtocolType::EMAIL_JSON:
            return "EMAIL_JSON";
          case SubscriptionProtocolType::SMS:
            return "SMS";
          case SubscriptionProtocolType::SQS:
            return "SQS";
          case SubscriptionProtocolType::LAMBDA:
            return "LAMBDA";
          case SubscriptionProtocolType::APP:
            return "APP";
          case SubscriptionProtocolType::FIREHOSE:
            return "FIREHOSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionProtocolTypeMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
