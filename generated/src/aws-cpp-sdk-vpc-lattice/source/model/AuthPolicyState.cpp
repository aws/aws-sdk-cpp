/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/AuthPolicyState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace AuthPolicyStateMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        AuthPolicyState GetAuthPolicyStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return AuthPolicyState::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return AuthPolicyState::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthPolicyState>(hashCode);
          }

          return AuthPolicyState::NOT_SET;
        }

        Aws::String GetNameForAuthPolicyState(AuthPolicyState enumValue)
        {
          switch(enumValue)
          {
          case AuthPolicyState::NOT_SET:
            return {};
          case AuthPolicyState::Active:
            return "Active";
          case AuthPolicyState::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthPolicyStateMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
