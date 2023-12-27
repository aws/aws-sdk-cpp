/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AsyncNotificationTopicTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AsyncNotificationTopicTypesMapper
      {

        static const int SUCCESS_NOTIFICATION_TOPIC_HASH = HashingUtils::HashString("SUCCESS_NOTIFICATION_TOPIC");
        static const int ERROR_NOTIFICATION_TOPIC_HASH = HashingUtils::HashString("ERROR_NOTIFICATION_TOPIC");


        AsyncNotificationTopicTypes GetAsyncNotificationTopicTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_NOTIFICATION_TOPIC_HASH)
          {
            return AsyncNotificationTopicTypes::SUCCESS_NOTIFICATION_TOPIC;
          }
          else if (hashCode == ERROR_NOTIFICATION_TOPIC_HASH)
          {
            return AsyncNotificationTopicTypes::ERROR_NOTIFICATION_TOPIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AsyncNotificationTopicTypes>(hashCode);
          }

          return AsyncNotificationTopicTypes::NOT_SET;
        }

        Aws::String GetNameForAsyncNotificationTopicTypes(AsyncNotificationTopicTypes enumValue)
        {
          switch(enumValue)
          {
          case AsyncNotificationTopicTypes::NOT_SET:
            return {};
          case AsyncNotificationTopicTypes::SUCCESS_NOTIFICATION_TOPIC:
            return "SUCCESS_NOTIFICATION_TOPIC";
          case AsyncNotificationTopicTypes::ERROR_NOTIFICATION_TOPIC:
            return "ERROR_NOTIFICATION_TOPIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AsyncNotificationTopicTypesMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
