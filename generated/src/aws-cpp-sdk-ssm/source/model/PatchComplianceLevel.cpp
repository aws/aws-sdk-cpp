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

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");


        PatchComplianceLevel GetPatchComplianceLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
