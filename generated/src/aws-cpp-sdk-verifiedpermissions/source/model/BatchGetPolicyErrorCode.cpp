/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/BatchGetPolicyErrorCode.h>
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
      namespace BatchGetPolicyErrorCodeMapper
      {

        static const int POLICY_STORE_NOT_FOUND_HASH = HashingUtils::HashString("POLICY_STORE_NOT_FOUND");
        static const int POLICY_NOT_FOUND_HASH = HashingUtils::HashString("POLICY_NOT_FOUND");


        BatchGetPolicyErrorCode GetBatchGetPolicyErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POLICY_STORE_NOT_FOUND_HASH)
          {
            return BatchGetPolicyErrorCode::POLICY_STORE_NOT_FOUND;
          }
          else if (hashCode == POLICY_NOT_FOUND_HASH)
          {
            return BatchGetPolicyErrorCode::POLICY_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchGetPolicyErrorCode>(hashCode);
          }

          return BatchGetPolicyErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchGetPolicyErrorCode(BatchGetPolicyErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchGetPolicyErrorCode::NOT_SET:
            return {};
          case BatchGetPolicyErrorCode::POLICY_STORE_NOT_FOUND:
            return "POLICY_STORE_NOT_FOUND";
          case BatchGetPolicyErrorCode::POLICY_NOT_FOUND:
            return "POLICY_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchGetPolicyErrorCodeMapper
    } // namespace Model
  } // namespace VerifiedPermissions
} // namespace Aws
