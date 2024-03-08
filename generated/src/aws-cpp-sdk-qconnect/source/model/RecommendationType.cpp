/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/RecommendationType.h>
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
      namespace RecommendationTypeMapper
      {

        static const int KNOWLEDGE_CONTENT_HASH = HashingUtils::HashString("KNOWLEDGE_CONTENT");
        static const int GENERATIVE_RESPONSE_HASH = HashingUtils::HashString("GENERATIVE_RESPONSE");
        static const int GENERATIVE_ANSWER_HASH = HashingUtils::HashString("GENERATIVE_ANSWER");


        RecommendationType GetRecommendationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KNOWLEDGE_CONTENT_HASH)
          {
            return RecommendationType::KNOWLEDGE_CONTENT;
          }
          else if (hashCode == GENERATIVE_RESPONSE_HASH)
          {
            return RecommendationType::GENERATIVE_RESPONSE;
          }
          else if (hashCode == GENERATIVE_ANSWER_HASH)
          {
            return RecommendationType::GENERATIVE_ANSWER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationType>(hashCode);
          }

          return RecommendationType::NOT_SET;
        }

        Aws::String GetNameForRecommendationType(RecommendationType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationType::NOT_SET:
            return {};
          case RecommendationType::KNOWLEDGE_CONTENT:
            return "KNOWLEDGE_CONTENT";
          case RecommendationType::GENERATIVE_RESPONSE:
            return "GENERATIVE_RESPONSE";
          case RecommendationType::GENERATIVE_ANSWER:
            return "GENERATIVE_ANSWER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
