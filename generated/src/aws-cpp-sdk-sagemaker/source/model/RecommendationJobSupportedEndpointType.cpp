/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobSupportedEndpointType.h>
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
      namespace RecommendationJobSupportedEndpointTypeMapper
      {

        static const int RealTime_HASH = HashingUtils::HashString("RealTime");
        static const int Serverless_HASH = HashingUtils::HashString("Serverless");


        RecommendationJobSupportedEndpointType GetRecommendationJobSupportedEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RealTime_HASH)
          {
            return RecommendationJobSupportedEndpointType::RealTime;
          }
          else if (hashCode == Serverless_HASH)
          {
            return RecommendationJobSupportedEndpointType::Serverless;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationJobSupportedEndpointType>(hashCode);
          }

          return RecommendationJobSupportedEndpointType::NOT_SET;
        }

        Aws::String GetNameForRecommendationJobSupportedEndpointType(RecommendationJobSupportedEndpointType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationJobSupportedEndpointType::NOT_SET:
            return {};
          case RecommendationJobSupportedEndpointType::RealTime:
            return "RealTime";
          case RecommendationJobSupportedEndpointType::Serverless:
            return "Serverless";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationJobSupportedEndpointTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
