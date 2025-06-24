/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfBooleanField.h>
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
      namespace OcsfBooleanFieldMapper
      {

        static const int compliance_assessments_meets_criteria_HASH = HashingUtils::HashString("compliance.assessments.meets_criteria");
        static const int vulnerabilities_is_exploit_available_HASH = HashingUtils::HashString("vulnerabilities.is_exploit_available");
        static const int vulnerabilities_is_fix_available_HASH = HashingUtils::HashString("vulnerabilities.is_fix_available");


        OcsfBooleanField GetOcsfBooleanFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == compliance_assessments_meets_criteria_HASH)
          {
            return OcsfBooleanField::compliance_assessments_meets_criteria;
          }
          else if (hashCode == vulnerabilities_is_exploit_available_HASH)
          {
            return OcsfBooleanField::vulnerabilities_is_exploit_available;
          }
          else if (hashCode == vulnerabilities_is_fix_available_HASH)
          {
            return OcsfBooleanField::vulnerabilities_is_fix_available;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OcsfBooleanField>(hashCode);
          }

          return OcsfBooleanField::NOT_SET;
        }

        Aws::String GetNameForOcsfBooleanField(OcsfBooleanField enumValue)
        {
          switch(enumValue)
          {
          case OcsfBooleanField::NOT_SET:
            return {};
          case OcsfBooleanField::compliance_assessments_meets_criteria:
            return "compliance.assessments.meets_criteria";
          case OcsfBooleanField::vulnerabilities_is_exploit_available:
            return "vulnerabilities.is_exploit_available";
          case OcsfBooleanField::vulnerabilities_is_fix_available:
            return "vulnerabilities.is_fix_available";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OcsfBooleanFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
