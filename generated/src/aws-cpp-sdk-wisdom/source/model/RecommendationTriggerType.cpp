/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/RecommendationTriggerType.h>
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
      namespace RecommendationTriggerTypeMapper
      {

        static const int QUERY_HASH = HashingUtils::HashString("QUERY");


        RecommendationTriggerType GetRecommendationTriggerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUERY_HASH)
          {
            return RecommendationTriggerType::QUERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationTriggerType>(hashCode);
          }

          return RecommendationTriggerType::NOT_SET;
        }

        Aws::String GetNameForRecommendationTriggerType(RecommendationTriggerType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationTriggerType::NOT_SET:
            return {};
          case RecommendationTriggerType::QUERY:
            return "QUERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationTriggerTypeMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
