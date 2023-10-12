/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/PolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace PolicyTypeMapper
      {

        static constexpr uint32_t SERVICE_CONTROL_POLICY_HASH = ConstExprHashingUtils::HashString("SERVICE_CONTROL_POLICY");
        static constexpr uint32_t TAG_POLICY_HASH = ConstExprHashingUtils::HashString("TAG_POLICY");
        static constexpr uint32_t BACKUP_POLICY_HASH = ConstExprHashingUtils::HashString("BACKUP_POLICY");
        static constexpr uint32_t AISERVICES_OPT_OUT_POLICY_HASH = ConstExprHashingUtils::HashString("AISERVICES_OPT_OUT_POLICY");


        PolicyType GetPolicyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_CONTROL_POLICY_HASH)
          {
            return PolicyType::SERVICE_CONTROL_POLICY;
          }
          else if (hashCode == TAG_POLICY_HASH)
          {
            return PolicyType::TAG_POLICY;
          }
          else if (hashCode == BACKUP_POLICY_HASH)
          {
            return PolicyType::BACKUP_POLICY;
          }
          else if (hashCode == AISERVICES_OPT_OUT_POLICY_HASH)
          {
            return PolicyType::AISERVICES_OPT_OUT_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyType>(hashCode);
          }

          return PolicyType::NOT_SET;
        }

        Aws::String GetNameForPolicyType(PolicyType enumValue)
        {
          switch(enumValue)
          {
          case PolicyType::NOT_SET:
            return {};
          case PolicyType::SERVICE_CONTROL_POLICY:
            return "SERVICE_CONTROL_POLICY";
          case PolicyType::TAG_POLICY:
            return "TAG_POLICY";
          case PolicyType::BACKUP_POLICY:
            return "BACKUP_POLICY";
          case PolicyType::AISERVICES_OPT_OUT_POLICY:
            return "AISERVICES_OPT_OUT_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
