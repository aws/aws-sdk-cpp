/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchComplianceStatus.h>
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
      namespace PatchComplianceStatusMapper
      {

        static const int COMPLIANT_HASH = HashingUtils::HashString("COMPLIANT");
        static const int NON_COMPLIANT_HASH = HashingUtils::HashString("NON_COMPLIANT");


        PatchComplianceStatus GetPatchComplianceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANT_HASH)
          {
            return PatchComplianceStatus::COMPLIANT;
          }
          else if (hashCode == NON_COMPLIANT_HASH)
          {
            return PatchComplianceStatus::NON_COMPLIANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchComplianceStatus>(hashCode);
          }

          return PatchComplianceStatus::NOT_SET;
        }

        Aws::String GetNameForPatchComplianceStatus(PatchComplianceStatus enumValue)
        {
          switch(enumValue)
          {
          case PatchComplianceStatus::NOT_SET:
            return {};
          case PatchComplianceStatus::COMPLIANT:
            return "COMPLIANT";
          case PatchComplianceStatus::NON_COMPLIANT:
            return "NON_COMPLIANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchComplianceStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
