/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/RecommendationSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectWisdomService
  {
    namespace Model
    {
      namespace RecommendationSourceTypeMapper
      {

        static constexpr uint32_t ISSUE_DETECTION_HASH = ConstExprHashingUtils::HashString("ISSUE_DETECTION");
        static constexpr uint32_t RULE_EVALUATION_HASH = ConstExprHashingUtils::HashString("RULE_EVALUATION");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");


        RecommendationSourceType GetRecommendationSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace ConnectWisdomService
} // namespace Aws
