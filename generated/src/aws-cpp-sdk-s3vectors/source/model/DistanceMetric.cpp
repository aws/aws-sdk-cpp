/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/DistanceMetric.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Vectors
  {
    namespace Model
    {
      namespace DistanceMetricMapper
      {

        static const int euclidean_HASH = HashingUtils::HashString("euclidean");
        static const int cosine_HASH = HashingUtils::HashString("cosine");


        DistanceMetric GetDistanceMetricForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == euclidean_HASH)
          {
            return DistanceMetric::euclidean;
          }
          else if (hashCode == cosine_HASH)
          {
            return DistanceMetric::cosine;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DistanceMetric>(hashCode);
          }

          return DistanceMetric::NOT_SET;
        }

        Aws::String GetNameForDistanceMetric(DistanceMetric enumValue)
        {
          switch(enumValue)
          {
          case DistanceMetric::NOT_SET:
            return {};
          case DistanceMetric::euclidean:
            return "euclidean";
          case DistanceMetric::cosine:
            return "cosine";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DistanceMetricMapper
    } // namespace Model
  } // namespace S3Vectors
} // namespace Aws
