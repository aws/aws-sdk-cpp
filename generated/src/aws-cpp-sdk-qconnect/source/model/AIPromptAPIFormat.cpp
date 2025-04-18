/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIPromptAPIFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace AIPromptAPIFormatMapper
      {

        static const int ANTHROPIC_CLAUDE_MESSAGES_HASH = HashingUtils::HashString("ANTHROPIC_CLAUDE_MESSAGES");
        static const int ANTHROPIC_CLAUDE_TEXT_COMPLETIONS_HASH = HashingUtils::HashString("ANTHROPIC_CLAUDE_TEXT_COMPLETIONS");
        static const int MESSAGES_HASH = HashingUtils::HashString("MESSAGES");
        static const int TEXT_COMPLETIONS_HASH = HashingUtils::HashString("TEXT_COMPLETIONS");


        AIPromptAPIFormat GetAIPromptAPIFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANTHROPIC_CLAUDE_MESSAGES_HASH)
          {
            return AIPromptAPIFormat::ANTHROPIC_CLAUDE_MESSAGES;
          }
          else if (hashCode == ANTHROPIC_CLAUDE_TEXT_COMPLETIONS_HASH)
          {
            return AIPromptAPIFormat::ANTHROPIC_CLAUDE_TEXT_COMPLETIONS;
          }
          else if (hashCode == MESSAGES_HASH)
          {
            return AIPromptAPIFormat::MESSAGES;
          }
          else if (hashCode == TEXT_COMPLETIONS_HASH)
          {
            return AIPromptAPIFormat::TEXT_COMPLETIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AIPromptAPIFormat>(hashCode);
          }

          return AIPromptAPIFormat::NOT_SET;
        }

        Aws::String GetNameForAIPromptAPIFormat(AIPromptAPIFormat enumValue)
        {
          switch(enumValue)
          {
          case AIPromptAPIFormat::NOT_SET:
            return {};
          case AIPromptAPIFormat::ANTHROPIC_CLAUDE_MESSAGES:
            return "ANTHROPIC_CLAUDE_MESSAGES";
          case AIPromptAPIFormat::ANTHROPIC_CLAUDE_TEXT_COMPLETIONS:
            return "ANTHROPIC_CLAUDE_TEXT_COMPLETIONS";
          case AIPromptAPIFormat::MESSAGES:
            return "MESSAGES";
          case AIPromptAPIFormat::TEXT_COMPLETIONS:
            return "TEXT_COMPLETIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AIPromptAPIFormatMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
