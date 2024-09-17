/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/PolicyEffect.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VerifiedPermissions
  {
    namespace Model
    {
      namespace PolicyEffectMapper
      {

        static const int Permit_HASH = HashingUtils::HashString("Permit");
        static const int Forbid_HASH = HashingUtils::HashString("Forbid");


        PolicyEffect GetPolicyEffectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Permit_HASH)
          {
            return PolicyEffect::Permit;
          }
          else if (hashCode == Forbid_HASH)
          {
            return PolicyEffect::Forbid;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyEffect>(hashCode);
          }

          return PolicyEffect::NOT_SET;
        }

        Aws::String GetNameForPolicyEffect(PolicyEffect enumValue)
        {
          switch(enumValue)
          {
          case PolicyEffect::NOT_SET:
            return {};
          case PolicyEffect::Permit:
            return "Permit";
          case PolicyEffect::Forbid:
            return "Forbid";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyEffectMapper
    } // namespace Model
  } // namespace VerifiedPermissions
} // namespace Aws
