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

        static const int FindingsSummary_TotalFindings_HASH = HashingUtils::HashString("FindingsSummary.TotalFindings");
        static const int FindingsSummary_Severities_Other_HASH = HashingUtils::HashString("FindingsSummary.Severities.Other");
        static const int FindingsSummary_Severities_Fatal_HASH = HashingUtils::HashString("FindingsSummary.Severities.Fatal");
        static const int FindingsSummary_Severities_Critical_HASH = HashingUtils::HashString("FindingsSummary.Severities.Critical");
        static const int FindingsSummary_Severities_High_HASH = HashingUtils::HashString("FindingsSummary.Severities.High");
        static const int FindingsSummary_Severities_Medium_HASH = HashingUtils::HashString("FindingsSummary.Severities.Medium");
        static const int FindingsSummary_Severities_Low_HASH = HashingUtils::HashString("FindingsSummary.Severities.Low");
        static const int FindingsSummary_Severities_Informational_HASH = HashingUtils::HashString("FindingsSummary.Severities.Informational");
        static const int FindingsSummary_Severities_Unknown_HASH = HashingUtils::HashString("FindingsSummary.Severities.Unknown");


        ResourcesNumberField GetResourcesNumberFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FindingsSummary_TotalFindings_HASH)
          {
            return ResourcesNumberField::FindingsSummary_TotalFindings;
          }
          else if (hashCode == FindingsSummary_Severities_Other_HASH)
          {
            return ResourcesNumberField::FindingsSummary_Severities_Other;
          }
          else if (hashCode == FindingsSummary_Severities_Fatal_HASH)
          {
            return ResourcesNumberField::FindingsSummary_Severities_Fatal;
          }
          else if (hashCode == FindingsSummary_Severities_Critical_HASH)
          {
            return ResourcesNumberField::FindingsSummary_Severities_Critical;
          }
          else if (hashCode == FindingsSummary_Severities_High_HASH)
          {
            return ResourcesNumberField::FindingsSummary_Severities_High;
          }
          else if (hashCode == FindingsSummary_Severities_Medium_HASH)
          {
            return ResourcesNumberField::FindingsSummary_Severities_Medium;
          }
          else if (hashCode == FindingsSummary_Severities_Low_HASH)
          {
            return ResourcesNumberField::FindingsSummary_Severities_Low;
          }
          else if (hashCode == FindingsSummary_Severities_Informational_HASH)
          {
            return ResourcesNumberField::FindingsSummary_Severities_Informational;
          }
          else if (hashCode == FindingsSummary_Severities_Unknown_HASH)
          {
            return ResourcesNumberField::FindingsSummary_Severities_Unknown;
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
          case ResourcesNumberField::FindingsSummary_TotalFindings:
            return "FindingsSummary.TotalFindings";
          case ResourcesNumberField::FindingsSummary_Severities_Other:
            return "FindingsSummary.Severities.Other";
          case ResourcesNumberField::FindingsSummary_Severities_Fatal:
            return "FindingsSummary.Severities.Fatal";
          case ResourcesNumberField::FindingsSummary_Severities_Critical:
            return "FindingsSummary.Severities.Critical";
          case ResourcesNumberField::FindingsSummary_Severities_High:
            return "FindingsSummary.Severities.High";
          case ResourcesNumberField::FindingsSummary_Severities_Medium:
            return "FindingsSummary.Severities.Medium";
          case ResourcesNumberField::FindingsSummary_Severities_Low:
            return "FindingsSummary.Severities.Low";
          case ResourcesNumberField::FindingsSummary_Severities_Informational:
            return "FindingsSummary.Severities.Informational";
          case ResourcesNumberField::FindingsSummary_Severities_Unknown:
            return "FindingsSummary.Severities.Unknown";
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
