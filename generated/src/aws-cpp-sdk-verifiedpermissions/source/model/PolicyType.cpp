/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/PolicyType.h>
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
      namespace PolicyTypeMapper
      {

        static const int STATIC__HASH = HashingUtils::HashString("STATIC");
        static const int TEMPLATE_LINKED_HASH = HashingUtils::HashString("TEMPLATE_LINKED");


        PolicyType GetPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return PolicyType::STATIC_;
          }
          else if (hashCode == TEMPLATE_LINKED_HASH)
          {
            return PolicyType::TEMPLATE_LINKED;
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
          case PolicyType::STATIC_:
            return "STATIC";
          case PolicyType::TEMPLATE_LINKED:
            return "TEMPLATE_LINKED";
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
  } // namespace VerifiedPermissions
} // namespace Aws
