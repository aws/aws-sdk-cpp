/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/Decision.h>
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
      namespace DecisionMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        Decision GetDecisionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return Decision::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return Decision::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Decision>(hashCode);
          }

          return Decision::NOT_SET;
        }

        Aws::String GetNameForDecision(Decision enumValue)
        {
          switch(enumValue)
          {
          case Decision::NOT_SET:
            return {};
          case Decision::ALLOW:
            return "ALLOW";
          case Decision::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DecisionMapper
    } // namespace Model
  } // namespace VerifiedPermissions
} // namespace Aws
