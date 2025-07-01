/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatResponseConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace ChatResponseConfigurationStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        ChatResponseConfigurationStatus GetChatResponseConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ChatResponseConfigurationStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ChatResponseConfigurationStatus::UPDATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChatResponseConfigurationStatus::FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ChatResponseConfigurationStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChatResponseConfigurationStatus>(hashCode);
          }

          return ChatResponseConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForChatResponseConfigurationStatus(ChatResponseConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case ChatResponseConfigurationStatus::NOT_SET:
            return {};
          case ChatResponseConfigurationStatus::CREATING:
            return "CREATING";
          case ChatResponseConfigurationStatus::UPDATING:
            return "UPDATING";
          case ChatResponseConfigurationStatus::FAILED:
            return "FAILED";
          case ChatResponseConfigurationStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChatResponseConfigurationStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
