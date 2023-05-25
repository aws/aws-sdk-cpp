/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/SubscriptionProtocolType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace SubscriptionProtocolTypeMapper
      {

        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int SQS_HASH = HashingUtils::HashString("SQS");


        SubscriptionProtocolType GetSubscriptionProtocolTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTPS_HASH)
          {
            return SubscriptionProtocolType::HTTPS;
          }
          else if (hashCode == SQS_HASH)
          {
            return SubscriptionProtocolType::SQS;
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
          case SubscriptionProtocolType::HTTPS:
            return "HTTPS";
          case SubscriptionProtocolType::SQS:
            return "SQS";
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
  } // namespace WorkDocs
} // namespace Aws
