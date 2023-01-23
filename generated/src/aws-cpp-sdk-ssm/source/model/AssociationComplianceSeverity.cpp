/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationComplianceSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AssociationComplianceSeverityMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");


        AssociationComplianceSeverity GetAssociationComplianceSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return AssociationComplianceSeverity::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return AssociationComplianceSeverity::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return AssociationComplianceSeverity::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return AssociationComplianceSeverity::LOW;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return AssociationComplianceSeverity::UNSPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationComplianceSeverity>(hashCode);
          }

          return AssociationComplianceSeverity::NOT_SET;
        }

        Aws::String GetNameForAssociationComplianceSeverity(AssociationComplianceSeverity enumValue)
        {
          switch(enumValue)
          {
          case AssociationComplianceSeverity::CRITICAL:
            return "CRITICAL";
          case AssociationComplianceSeverity::HIGH:
            return "HIGH";
          case AssociationComplianceSeverity::MEDIUM:
            return "MEDIUM";
          case AssociationComplianceSeverity::LOW:
            return "LOW";
          case AssociationComplianceSeverity::UNSPECIFIED:
            return "UNSPECIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationComplianceSeverityMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
