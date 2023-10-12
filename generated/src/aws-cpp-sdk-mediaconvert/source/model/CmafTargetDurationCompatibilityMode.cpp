/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafTargetDurationCompatibilityMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CmafTargetDurationCompatibilityModeMapper
      {

        static constexpr uint32_t LEGACY_HASH = ConstExprHashingUtils::HashString("LEGACY");
        static constexpr uint32_t SPEC_COMPLIANT_HASH = ConstExprHashingUtils::HashString("SPEC_COMPLIANT");


        CmafTargetDurationCompatibilityMode GetCmafTargetDurationCompatibilityModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEGACY_HASH)
          {
            return CmafTargetDurationCompatibilityMode::LEGACY;
          }
          else if (hashCode == SPEC_COMPLIANT_HASH)
          {
            return CmafTargetDurationCompatibilityMode::SPEC_COMPLIANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafTargetDurationCompatibilityMode>(hashCode);
          }

          return CmafTargetDurationCompatibilityMode::NOT_SET;
        }

        Aws::String GetNameForCmafTargetDurationCompatibilityMode(CmafTargetDurationCompatibilityMode enumValue)
        {
          switch(enumValue)
          {
          case CmafTargetDurationCompatibilityMode::NOT_SET:
            return {};
          case CmafTargetDurationCompatibilityMode::LEGACY:
            return "LEGACY";
          case CmafTargetDurationCompatibilityMode::SPEC_COMPLIANT:
            return "SPEC_COMPLIANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafTargetDurationCompatibilityModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
