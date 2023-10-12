/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/EffectivePolicyType.h>
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
      namespace EffectivePolicyTypeMapper
      {

        static constexpr uint32_t TAG_POLICY_HASH = ConstExprHashingUtils::HashString("TAG_POLICY");
        static constexpr uint32_t BACKUP_POLICY_HASH = ConstExprHashingUtils::HashString("BACKUP_POLICY");
        static constexpr uint32_t AISERVICES_OPT_OUT_POLICY_HASH = ConstExprHashingUtils::HashString("AISERVICES_OPT_OUT_POLICY");


        EffectivePolicyType GetEffectivePolicyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TAG_POLICY_HASH)
          {
            return EffectivePolicyType::TAG_POLICY;
          }
          else if (hashCode == BACKUP_POLICY_HASH)
          {
            return EffectivePolicyType::BACKUP_POLICY;
          }
          else if (hashCode == AISERVICES_OPT_OUT_POLICY_HASH)
          {
            return EffectivePolicyType::AISERVICES_OPT_OUT_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EffectivePolicyType>(hashCode);
          }

          return EffectivePolicyType::NOT_SET;
        }

        Aws::String GetNameForEffectivePolicyType(EffectivePolicyType enumValue)
        {
          switch(enumValue)
          {
          case EffectivePolicyType::NOT_SET:
            return {};
          case EffectivePolicyType::TAG_POLICY:
            return "TAG_POLICY";
          case EffectivePolicyType::BACKUP_POLICY:
            return "BACKUP_POLICY";
          case EffectivePolicyType::AISERVICES_OPT_OUT_POLICY:
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

      } // namespace EffectivePolicyTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
