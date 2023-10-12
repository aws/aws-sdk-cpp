/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchComplianceLevel.h>
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
      namespace PatchComplianceLevelMapper
      {

        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t INFORMATIONAL_HASH = ConstExprHashingUtils::HashString("INFORMATIONAL");
        static constexpr uint32_t UNSPECIFIED_HASH = ConstExprHashingUtils::HashString("UNSPECIFIED");


        PatchComplianceLevel GetPatchComplianceLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return PatchComplianceLevel::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return PatchComplianceLevel::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return PatchComplianceLevel::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return PatchComplianceLevel::LOW;
          }
          else if (hashCode == INFORMATIONAL_HASH)
          {
            return PatchComplianceLevel::INFORMATIONAL;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return PatchComplianceLevel::UNSPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchComplianceLevel>(hashCode);
          }

          return PatchComplianceLevel::NOT_SET;
        }

        Aws::String GetNameForPatchComplianceLevel(PatchComplianceLevel enumValue)
        {
          switch(enumValue)
          {
          case PatchComplianceLevel::NOT_SET:
            return {};
          case PatchComplianceLevel::CRITICAL:
            return "CRITICAL";
          case PatchComplianceLevel::HIGH:
            return "HIGH";
          case PatchComplianceLevel::MEDIUM:
            return "MEDIUM";
          case PatchComplianceLevel::LOW:
            return "LOW";
          case PatchComplianceLevel::INFORMATIONAL:
            return "INFORMATIONAL";
          case PatchComplianceLevel::UNSPECIFIED:
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

      } // namespace PatchComplianceLevelMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
