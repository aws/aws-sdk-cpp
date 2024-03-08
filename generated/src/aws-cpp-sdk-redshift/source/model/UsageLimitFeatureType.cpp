/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/UsageLimitFeatureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace UsageLimitFeatureTypeMapper
      {

        static const int spectrum_HASH = HashingUtils::HashString("spectrum");
        static const int concurrency_scaling_HASH = HashingUtils::HashString("concurrency-scaling");
        static const int cross_region_datasharing_HASH = HashingUtils::HashString("cross-region-datasharing");


        UsageLimitFeatureType GetUsageLimitFeatureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == spectrum_HASH)
          {
            return UsageLimitFeatureType::spectrum;
          }
          else if (hashCode == concurrency_scaling_HASH)
          {
            return UsageLimitFeatureType::concurrency_scaling;
          }
          else if (hashCode == cross_region_datasharing_HASH)
          {
            return UsageLimitFeatureType::cross_region_datasharing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageLimitFeatureType>(hashCode);
          }

          return UsageLimitFeatureType::NOT_SET;
        }

        Aws::String GetNameForUsageLimitFeatureType(UsageLimitFeatureType enumValue)
        {
          switch(enumValue)
          {
          case UsageLimitFeatureType::NOT_SET:
            return {};
          case UsageLimitFeatureType::spectrum:
            return "spectrum";
          case UsageLimitFeatureType::concurrency_scaling:
            return "concurrency-scaling";
          case UsageLimitFeatureType::cross_region_datasharing:
            return "cross-region-datasharing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageLimitFeatureTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
