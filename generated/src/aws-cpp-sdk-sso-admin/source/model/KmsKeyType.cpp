/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/KmsKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace KmsKeyTypeMapper
      {

        static const int AWS_OWNED_KMS_KEY_HASH = HashingUtils::HashString("AWS_OWNED_KMS_KEY");
        static const int CUSTOMER_MANAGED_KEY_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KEY");


        KmsKeyType GetKmsKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_OWNED_KMS_KEY_HASH)
          {
            return KmsKeyType::AWS_OWNED_KMS_KEY;
          }
          else if (hashCode == CUSTOMER_MANAGED_KEY_HASH)
          {
            return KmsKeyType::CUSTOMER_MANAGED_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KmsKeyType>(hashCode);
          }

          return KmsKeyType::NOT_SET;
        }

        Aws::String GetNameForKmsKeyType(KmsKeyType enumValue)
        {
          switch(enumValue)
          {
          case KmsKeyType::NOT_SET:
            return {};
          case KmsKeyType::AWS_OWNED_KMS_KEY:
            return "AWS_OWNED_KMS_KEY";
          case KmsKeyType::CUSTOMER_MANAGED_KEY:
            return "CUSTOMER_MANAGED_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KmsKeyTypeMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
