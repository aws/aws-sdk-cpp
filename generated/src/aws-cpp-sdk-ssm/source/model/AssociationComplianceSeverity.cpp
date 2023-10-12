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

        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t UNSPECIFIED_HASH = ConstExprHashingUtils::HashString("UNSPECIFIED");


        AssociationComplianceSeverity GetAssociationComplianceSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AssociationComplianceSeverity::NOT_SET:
            return {};
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
