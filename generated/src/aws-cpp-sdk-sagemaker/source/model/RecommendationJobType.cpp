/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobType.h>
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
      namespace RecommendationJobTypeMapper
      {

        static constexpr uint32_t Default_HASH = ConstExprHashingUtils::HashString("Default");
        static constexpr uint32_t Advanced_HASH = ConstExprHashingUtils::HashString("Advanced");


        RecommendationJobType GetRecommendationJobTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Default_HASH)
          {
            return RecommendationJobType::Default;
          }
          else if (hashCode == Advanced_HASH)
          {
            return RecommendationJobType::Advanced;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationJobType>(hashCode);
          }

          return RecommendationJobType::NOT_SET;
        }

        Aws::String GetNameForRecommendationJobType(RecommendationJobType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationJobType::NOT_SET:
            return {};
          case RecommendationJobType::Default:
            return "Default";
          case RecommendationJobType::Advanced:
            return "Advanced";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationJobTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
