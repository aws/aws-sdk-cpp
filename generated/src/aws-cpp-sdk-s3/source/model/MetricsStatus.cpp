/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/MetricsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace MetricsStatusMapper
      {

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        MetricsStatus GetMetricsStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return MetricsStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return MetricsStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricsStatus>(hashCode);
          }

          return MetricsStatus::NOT_SET;
        }

        Aws::String GetNameForMetricsStatus(MetricsStatus enumValue)
        {
          switch(enumValue)
          {
          case MetricsStatus::NOT_SET:
            return {};
          case MetricsStatus::Enabled:
            return "Enabled";
          case MetricsStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricsStatusMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
