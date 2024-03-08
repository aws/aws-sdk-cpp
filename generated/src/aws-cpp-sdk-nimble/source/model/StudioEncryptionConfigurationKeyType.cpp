/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioEncryptionConfigurationKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace StudioEncryptionConfigurationKeyTypeMapper
      {

        static const int AWS_OWNED_KEY_HASH = HashingUtils::HashString("AWS_OWNED_KEY");
        static const int CUSTOMER_MANAGED_KEY_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KEY");


        StudioEncryptionConfigurationKeyType GetStudioEncryptionConfigurationKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_OWNED_KEY_HASH)
          {
            return StudioEncryptionConfigurationKeyType::AWS_OWNED_KEY;
          }
          else if (hashCode == CUSTOMER_MANAGED_KEY_HASH)
          {
            return StudioEncryptionConfigurationKeyType::CUSTOMER_MANAGED_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioEncryptionConfigurationKeyType>(hashCode);
          }

          return StudioEncryptionConfigurationKeyType::NOT_SET;
        }

        Aws::String GetNameForStudioEncryptionConfigurationKeyType(StudioEncryptionConfigurationKeyType enumValue)
        {
          switch(enumValue)
          {
          case StudioEncryptionConfigurationKeyType::NOT_SET:
            return {};
          case StudioEncryptionConfigurationKeyType::AWS_OWNED_KEY:
            return "AWS_OWNED_KEY";
          case StudioEncryptionConfigurationKeyType::CUSTOMER_MANAGED_KEY:
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

      } // namespace StudioEncryptionConfigurationKeyTypeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
