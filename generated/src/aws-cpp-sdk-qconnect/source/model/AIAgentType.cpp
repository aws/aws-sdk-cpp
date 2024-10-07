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
