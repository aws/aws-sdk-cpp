/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatMode.h>
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
      namespace ChatModeMapper
      {

        static const int RETRIEVAL_MODE_HASH = HashingUtils::HashString("RETRIEVAL_MODE");
        static const int CREATOR_MODE_HASH = HashingUtils::HashString("CREATOR_MODE");
        static const int PLUGIN_MODE_HASH = HashingUtils::HashString("PLUGIN_MODE");


        ChatMode GetChatModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETRIEVAL_MODE_HASH)
          {
            return ChatMode::RETRIEVAL_MODE;
          }
          else if (hashCode == CREATOR_MODE_HASH)
          {
            return ChatMode::CREATOR_MODE;
          }
          else if (hashCode == PLUGIN_MODE_HASH)
          {
            return ChatMode::PLUGIN_MODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChatMode>(hashCode);
          }

          return ChatMode::NOT_SET;
        }

        Aws::String GetNameForChatMode(ChatMode enumValue)
        {
          switch(enumValue)
          {
          case ChatMode::NOT_SET:
            return {};
          case ChatMode::RETRIEVAL_MODE:
            return "RETRIEVAL_MODE";
          case ChatMode::CREATOR_MODE:
            return "CREATOR_MODE";
          case ChatMode::PLUGIN_MODE:
            return "PLUGIN_MODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChatModeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
