/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIAgentType.h>
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
      namespace AIAgentTypeMapper
      {

        static const int MANUAL_SEARCH_HASH = HashingUtils::HashString("MANUAL_SEARCH");
        static const int ANSWER_RECOMMENDATION_HASH = HashingUtils::HashString("ANSWER_RECOMMENDATION");
        static const int SELF_SERVICE_HASH = HashingUtils::HashString("SELF_SERVICE");
        static const int EMAIL_RESPONSE_HASH = HashingUtils::HashString("EMAIL_RESPONSE");
        static const int EMAIL_OVERVIEW_HASH = HashingUtils::HashString("EMAIL_OVERVIEW");
        static const int EMAIL_GENERATIVE_ANSWER_HASH = HashingUtils::HashString("EMAIL_GENERATIVE_ANSWER");


        AIAgentType GetAIAgentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_SEARCH_HASH)
          {
            return AIAgentType::MANUAL_SEARCH;
          }
          else if (hashCode == ANSWER_RECOMMENDATION_HASH)
          {
            return AIAgentType::ANSWER_RECOMMENDATION;
          }
          else if (hashCode == SELF_SERVICE_HASH)
          {
            return AIAgentType::SELF_SERVICE;
          }
          else if (hashCode == EMAIL_RESPONSE_HASH)
          {
            return AIAgentType::EMAIL_RESPONSE;
          }
          else if (hashCode == EMAIL_OVERVIEW_HASH)
          {
            return AIAgentType::EMAIL_OVERVIEW;
          }
          else if (hashCode == EMAIL_GENERATIVE_ANSWER_HASH)
          {
            return AIAgentType::EMAIL_GENERATIVE_ANSWER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AIAgentType>(hashCode);
          }

          return AIAgentType::NOT_SET;
        }

        Aws::String GetNameForAIAgentType(AIAgentType enumValue)
        {
          switch(enumValue)
          {
          case AIAgentType::NOT_SET:
            return {};
          case AIAgentType::MANUAL_SEARCH:
            return "MANUAL_SEARCH";
          case AIAgentType::ANSWER_RECOMMENDATION:
            return "ANSWER_RECOMMENDATION";
          case AIAgentType::SELF_SERVICE:
            return "SELF_SERVICE";
          case AIAgentType::EMAIL_RESPONSE:
            return "EMAIL_RESPONSE";
          case AIAgentType::EMAIL_OVERVIEW:
            return "EMAIL_OVERVIEW";
          case AIAgentType::EMAIL_GENERATIVE_ANSWER:
            return "EMAIL_GENERATIVE_ANSWER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AIAgentTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
