/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UsageLimitUsageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftServerless
  {
    namespace Model
    {
      namespace UsageLimitUsageTypeMapper
      {

        static const int serverless_compute_HASH = HashingUtils::HashString("serverless-compute");
        static const int cross_region_datasharing_HASH = HashingUtils::HashString("cross-region-datasharing");


        UsageLimitUsageType GetUsageLimitUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == serverless_compute_HASH)
          {
            return UsageLimitUsageType::serverless_compute;
          }
          else if (hashCode == cross_region_datasharing_HASH)
          {
            return UsageLimitUsageType::cross_region_datasharing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageLimitUsageType>(hashCode);
          }

          return UsageLimitUsageType::NOT_SET;
        }

        Aws::String GetNameForUsageLimitUsageType(UsageLimitUsageType enumValue)
        {
          switch(enumValue)
          {
          case UsageLimitUsageType::NOT_SET:
            return {};
          case UsageLimitUsageType::serverless_compute:
            return "serverless-compute";
          case UsageLimitUsageType::cross_region_datasharing:
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

      } // namespace UsageLimitUsageTypeMapper
    } // namespace Model
  } // namespace RedshiftServerless
} // namespace Aws
