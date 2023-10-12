/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ComplianceStatus.h>
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
      namespace ComplianceStatusMapper
      {

        static constexpr uint32_t COMPLIANT_HASH = ConstExprHashingUtils::HashString("COMPLIANT");
        static constexpr uint32_t NON_COMPLIANT_HASH = ConstExprHashingUtils::HashString("NON_COMPLIANT");


        ComplianceStatus GetComplianceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANT_HASH)
          {
            return ComplianceStatus::COMPLIANT;
          }
          else if (hashCode == NON_COMPLIANT_HASH)
          {
            return ComplianceStatus::NON_COMPLIANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComplianceStatus>(hashCode);
          }

          return ComplianceStatus::NOT_SET;
        }

        Aws::String GetNameForComplianceStatus(ComplianceStatus enumValue)
        {
          switch(enumValue)
          {
          case ComplianceStatus::NOT_SET:
            return {};
          case ComplianceStatus::COMPLIANT:
            return "COMPLIANT";
          case ComplianceStatus::NON_COMPLIANT:
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

      } // namespace ComplianceStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
