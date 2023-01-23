/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NoiseReducerFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace NoiseReducerFilterMapper
      {

        static const int BILATERAL_HASH = HashingUtils::HashString("BILATERAL");
        static const int MEAN_HASH = HashingUtils::HashString("MEAN");
        static const int GAUSSIAN_HASH = HashingUtils::HashString("GAUSSIAN");
        static const int LANCZOS_HASH = HashingUtils::HashString("LANCZOS");
        static const int SHARPEN_HASH = HashingUtils::HashString("SHARPEN");
        static const int CONSERVE_HASH = HashingUtils::HashString("CONSERVE");
        static const int SPATIAL_HASH = HashingUtils::HashString("SPATIAL");
        static const int TEMPORAL_HASH = HashingUtils::HashString("TEMPORAL");


        NoiseReducerFilter GetNoiseReducerFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BILATERAL_HASH)
          {
            return NoiseReducerFilter::BILATERAL;
          }
          else if (hashCode == MEAN_HASH)
          {
            return NoiseReducerFilter::MEAN;
          }
          else if (hashCode == GAUSSIAN_HASH)
          {
            return NoiseReducerFilter::GAUSSIAN;
          }
          else if (hashCode == LANCZOS_HASH)
          {
            return NoiseReducerFilter::LANCZOS;
          }
          else if (hashCode == SHARPEN_HASH)
          {
            return NoiseReducerFilter::SHARPEN;
          }
          else if (hashCode == CONSERVE_HASH)
          {
            return NoiseReducerFilter::CONSERVE;
          }
          else if (hashCode == SPATIAL_HASH)
          {
            return NoiseReducerFilter::SPATIAL;
          }
          else if (hashCode == TEMPORAL_HASH)
          {
            return NoiseReducerFilter::TEMPORAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NoiseReducerFilter>(hashCode);
          }

          return NoiseReducerFilter::NOT_SET;
        }

        Aws::String GetNameForNoiseReducerFilter(NoiseReducerFilter enumValue)
        {
          switch(enumValue)
          {
          case NoiseReducerFilter::BILATERAL:
            return "BILATERAL";
          case NoiseReducerFilter::MEAN:
            return "MEAN";
          case NoiseReducerFilter::GAUSSIAN:
            return "GAUSSIAN";
          case NoiseReducerFilter::LANCZOS:
            return "LANCZOS";
          case NoiseReducerFilter::SHARPEN:
            return "SHARPEN";
          case NoiseReducerFilter::CONSERVE:
            return "CONSERVE";
          case NoiseReducerFilter::SPATIAL:
            return "SPATIAL";
          case NoiseReducerFilter::TEMPORAL:
            return "TEMPORAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NoiseReducerFilterMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
