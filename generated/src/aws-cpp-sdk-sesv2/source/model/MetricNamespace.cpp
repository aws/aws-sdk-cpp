/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MetricNamespace.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace MetricNamespaceMapper
      {

        static const int VDM_HASH = HashingUtils::HashString("VDM");


        MetricNamespace GetMetricNamespaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VDM_HASH)
          {
            return MetricNamespace::VDM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricNamespace>(hashCode);
          }

          return MetricNamespace::NOT_SET;
        }

        Aws::String GetNameForMetricNamespace(MetricNamespace enumValue)
        {
          switch(enumValue)
          {
          case MetricNamespace::VDM:
            return "VDM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricNamespaceMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
