/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/RecommendationSourceType.h>
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
      namespace RecommendationSourceTypeMapper
      {

        static const int ISSUE_DETECTION_HASH = HashingUtils::HashString("ISSUE_DETECTION");
        static const int RULE_EVALUATION_HASH = HashingUtils::HashString("RULE_EVALUATION");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        RecommendationSourceType GetRecommendationSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ISSUE_DETECTION_HASH)
          {
            return RecommendationSourceType::ISSUE_DETECTION;
          }
          else if (hashCode == RULE_EVALUATION_HASH)
          {
            return RecommendationSourceType::RULE_EVALUATION;
          }
          else if (hashCode == OTHER_HASH)
          {
            return RecommendationSourceType::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationSourceType>(hashCode);
          }

          return RecommendationSourceType::NOT_SET;
        }

        Aws::String GetNameForRecommendationSourceType(RecommendationSourceType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationSourceType::NOT_SET:
            return {};
          case RecommendationSourceType::ISSUE_DETECTION:
            return "ISSUE_DETECTION";
          case RecommendationSourceType::RULE_EVALUATION:
            return "RULE_EVALUATION";
          case RecommendationSourceType::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationSourceTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
