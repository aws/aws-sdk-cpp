/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingImageEncryptionConfigurationKeyType.h>
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
      namespace StreamingImageEncryptionConfigurationKeyTypeMapper
      {

        static const int CUSTOMER_MANAGED_KEY_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KEY");


        StreamingImageEncryptionConfigurationKeyType GetStreamingImageEncryptionConfigurationKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_MANAGED_KEY_HASH)
          {
            return StreamingImageEncryptionConfigurationKeyType::CUSTOMER_MANAGED_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingImageEncryptionConfigurationKeyType>(hashCode);
          }

          return StreamingImageEncryptionConfigurationKeyType::NOT_SET;
        }

        Aws::String GetNameForStreamingImageEncryptionConfigurationKeyType(StreamingImageEncryptionConfigurationKeyType enumValue)
        {
          switch(enumValue)
          {
          case StreamingImageEncryptionConfigurationKeyType::NOT_SET:
            return {};
          case StreamingImageEncryptionConfigurationKeyType::CUSTOMER_MANAGED_KEY:
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

      } // namespace StreamingImageEncryptionConfigurationKeyTypeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
