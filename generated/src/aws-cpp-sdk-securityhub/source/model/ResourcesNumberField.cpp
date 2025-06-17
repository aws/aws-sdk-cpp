/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourcesNumberField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ResourcesNumberFieldMapper
      {

        static const int findings_summary_total_findings_HASH = HashingUtils::HashString("findings_summary.total_findings");
        static const int findings_summary_severities_other_HASH = HashingUtils::HashString("findings_summary.severities.other");
        static const int findings_summary_severities_fatal_HASH = HashingUtils::HashString("findings_summary.severities.fatal");
        static const int findings_summary_severities_critical_HASH = HashingUtils::HashString("findings_summary.severities.critical");
        static const int findings_summary_severities_high_HASH = HashingUtils::HashString("findings_summary.severities.high");
        static const int findings_summary_severities_medium_HASH = HashingUtils::HashString("findings_summary.severities.medium");
        static const int findings_summary_severities_low_HASH = HashingUtils::HashString("findings_summary.severities.low");
        static const int findings_summary_severities_informational_HASH = HashingUtils::HashString("findings_summary.severities.informational");
        static const int findings_summary_severities_unknown_HASH = HashingUtils::HashString("findings_summary.severities.unknown");


        ResourcesNumberField GetResourcesNumberFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == findings_summary_total_findings_HASH)
          {
            return ResourcesNumberField::findings_summary_total_findings;
          }
          else if (hashCode == findings_summary_severities_other_HASH)
          {
            return ResourcesNumberField::findings_summary_severities_other;
          }
          else if (hashCode == findings_summary_severities_fatal_HASH)
          {
            return ResourcesNumberField::findings_summary_severities_fatal;
          }
          else if (hashCode == findings_summary_severities_critical_HASH)
          {
            return ResourcesNumberField::findings_summary_severities_critical;
          }
          else if (hashCode == findings_summary_severities_high_HASH)
          {
            return ResourcesNumberField::findings_summary_severities_high;
          }
          else if (hashCode == findings_summary_severities_medium_HASH)
          {
            return ResourcesNumberField::findings_summary_severities_medium;
          }
          else if (hashCode == findings_summary_severities_low_HASH)
          {
            return ResourcesNumberField::findings_summary_severities_low;
          }
          else if (hashCode == findings_summary_severities_informational_HASH)
          {
            return ResourcesNumberField::findings_summary_severities_informational;
          }
          else if (hashCode == findings_summary_severities_unknown_HASH)
          {
            return ResourcesNumberField::findings_summary_severities_unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourcesNumberField>(hashCode);
          }

          return ResourcesNumberField::NOT_SET;
        }

        Aws::String GetNameForResourcesNumberField(ResourcesNumberField enumValue)
        {
          switch(enumValue)
          {
          case ResourcesNumberField::NOT_SET:
            return {};
          case ResourcesNumberField::findings_summary_total_findings:
            return "findings_summary.total_findings";
          case ResourcesNumberField::findings_summary_severities_other:
            return "findings_summary.severities.other";
          case ResourcesNumberField::findings_summary_severities_fatal:
            return "findings_summary.severities.fatal";
          case ResourcesNumberField::findings_summary_severities_critical:
            return "findings_summary.severities.critical";
          case ResourcesNumberField::findings_summary_severities_high:
            return "findings_summary.severities.high";
          case ResourcesNumberField::findings_summary_severities_medium:
            return "findings_summary.severities.medium";
          case ResourcesNumberField::findings_summary_severities_low:
            return "findings_summary.severities.low";
          case ResourcesNumberField::findings_summary_severities_informational:
            return "findings_summary.severities.informational";
          case ResourcesNumberField::findings_summary_severities_unknown:
            return "findings_summary.severities.unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourcesNumberFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
