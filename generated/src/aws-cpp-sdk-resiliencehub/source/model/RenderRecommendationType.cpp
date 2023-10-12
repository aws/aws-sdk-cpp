/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RenderRecommendationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace RenderRecommendationTypeMapper
      {

        static constexpr uint32_t Alarm_HASH = ConstExprHashingUtils::HashString("Alarm");
        static constexpr uint32_t Sop_HASH = ConstExprHashingUtils::HashString("Sop");
        static constexpr uint32_t Test_HASH = ConstExprHashingUtils::HashString("Test");


        RenderRecommendationType GetRenderRecommendationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Alarm_HASH)
          {
            return RenderRecommendationType::Alarm;
          }
          else if (hashCode == Sop_HASH)
          {
            return RenderRecommendationType::Sop;
          }
          else if (hashCode == Test_HASH)
          {
            return RenderRecommendationType::Test;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RenderRecommendationType>(hashCode);
          }

          return RenderRecommendationType::NOT_SET;
        }

        Aws::String GetNameForRenderRecommendationType(RenderRecommendationType enumValue)
        {
          switch(enumValue)
          {
          case RenderRecommendationType::NOT_SET:
            return {};
          case RenderRecommendationType::Alarm:
            return "Alarm";
          case RenderRecommendationType::Sop:
            return "Sop";
          case RenderRecommendationType::Test:
            return "Test";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RenderRecommendationTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
