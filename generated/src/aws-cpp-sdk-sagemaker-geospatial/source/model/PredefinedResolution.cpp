/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/PredefinedResolution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerGeospatial
  {
    namespace Model
    {
      namespace PredefinedResolutionMapper
      {

        static const int HIGHEST_HASH = HashingUtils::HashString("HIGHEST");
        static const int LOWEST_HASH = HashingUtils::HashString("LOWEST");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");


        PredefinedResolution GetPredefinedResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGHEST_HASH)
          {
            return PredefinedResolution::HIGHEST;
          }
          else if (hashCode == LOWEST_HASH)
          {
            return PredefinedResolution::LOWEST;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return PredefinedResolution::AVERAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PredefinedResolution>(hashCode);
          }

          return PredefinedResolution::NOT_SET;
        }

        Aws::String GetNameForPredefinedResolution(PredefinedResolution enumValue)
        {
          switch(enumValue)
          {
          case PredefinedResolution::HIGHEST:
            return "HIGHEST";
          case PredefinedResolution::LOWEST:
            return "LOWEST";
          case PredefinedResolution::AVERAGE:
            return "AVERAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PredefinedResolutionMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
