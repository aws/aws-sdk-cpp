/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIPromptType.h>
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
      namespace AIPromptTypeMapper
      {

        static const int ANSWER_GENERATION_HASH = HashingUtils::HashString("ANSWER_GENERATION");
        static const int INTENT_LABELING_GENERATION_HASH = HashingUtils::HashString("INTENT_LABELING_GENERATION");
        static const int QUERY_REFORMULATION_HASH = HashingUtils::HashString("QUERY_REFORMULATION");
        static const int SELF_SERVICE_PRE_PROCESSING_HASH = HashingUtils::HashString("SELF_SERVICE_PRE_PROCESSING");
        static const int SELF_SERVICE_ANSWER_GENERATION_HASH = HashingUtils::HashString("SELF_SERVICE_ANSWER_GENERATION");
        static const int EMAIL_RESPONSE_HASH = HashingUtils::HashString("EMAIL_RESPONSE");
        static const int EMAIL_OVERVIEW_HASH = HashingUtils::HashString("EMAIL_OVERVIEW");
        static const int EMAIL_GENERATIVE_ANSWER_HASH = HashingUtils::HashString("EMAIL_GENERATIVE_ANSWER");
        static const int EMAIL_QUERY_REFORMULATION_HASH = HashingUtils::HashString("EMAIL_QUERY_REFORMULATION");


        AIPromptType GetAIPromptTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANSWER_GENERATION_HASH)
          {
            return AIPromptType::ANSWER_GENERATION;
          }
          else if (hashCode == INTENT_LABELING_GENERATION_HASH)
          {
            return AIPromptType::INTENT_LABELING_GENERATION;
          }
          else if (hashCode == QUERY_REFORMULATION_HASH)
          {
            return AIPromptType::QUERY_REFORMULATION;
          }
          else if (hashCode == SELF_SERVICE_PRE_PROCESSING_HASH)
          {
            return AIPromptType::SELF_SERVICE_PRE_PROCESSING;
          }
          else if (hashCode == SELF_SERVICE_ANSWER_GENERATION_HASH)
          {
            return AIPromptType::SELF_SERVICE_ANSWER_GENERATION;
          }
          else if (hashCode == EMAIL_RESPONSE_HASH)
          {
            return AIPromptType::EMAIL_RESPONSE;
          }
          else if (hashCode == EMAIL_OVERVIEW_HASH)
          {
            return AIPromptType::EMAIL_OVERVIEW;
          }
          else if (hashCode == EMAIL_GENERATIVE_ANSWER_HASH)
          {
            return AIPromptType::EMAIL_GENERATIVE_ANSWER;
          }
          else if (hashCode == EMAIL_QUERY_REFORMULATION_HASH)
          {
            return AIPromptType::EMAIL_QUERY_REFORMULATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AIPromptType>(hashCode);
          }

          return AIPromptType::NOT_SET;
        }

        Aws::String GetNameForAIPromptType(AIPromptType enumValue)
        {
          switch(enumValue)
          {
          case AIPromptType::NOT_SET:
            return {};
          case AIPromptType::ANSWER_GENERATION:
            return "ANSWER_GENERATION";
          case AIPromptType::INTENT_LABELING_GENERATION:
            return "INTENT_LABELING_GENERATION";
          case AIPromptType::QUERY_REFORMULATION:
            return "QUERY_REFORMULATION";
          case AIPromptType::SELF_SERVICE_PRE_PROCESSING:
            return "SELF_SERVICE_PRE_PROCESSING";
          case AIPromptType::SELF_SERVICE_ANSWER_GENERATION:
            return "SELF_SERVICE_ANSWER_GENERATION";
          case AIPromptType::EMAIL_RESPONSE:
            return "EMAIL_RESPONSE";
          case AIPromptType::EMAIL_OVERVIEW:
            return "EMAIL_OVERVIEW";
          case AIPromptType::EMAIL_GENERATIVE_ANSWER:
            return "EMAIL_GENERATIVE_ANSWER";
          case AIPromptType::EMAIL_QUERY_REFORMULATION:
            return "EMAIL_QUERY_REFORMULATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AIPromptTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
