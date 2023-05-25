/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/AccessPolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace AccessPolicyTypeMapper
      {

        static const int data_HASH = HashingUtils::HashString("data");


        AccessPolicyType GetAccessPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == data_HASH)
          {
            return AccessPolicyType::data;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessPolicyType>(hashCode);
          }

          return AccessPolicyType::NOT_SET;
        }

        Aws::String GetNameForAccessPolicyType(AccessPolicyType enumValue)
        {
          switch(enumValue)
          {
          case AccessPolicyType::data:
            return "data";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessPolicyTypeMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
