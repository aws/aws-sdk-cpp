/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/EncryptionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace EncryptionModeMapper
      {

        static const int SSE_S3_HASH = HashingUtils::HashString("SSE_S3");
        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE_KMS");


        EncryptionMode GetEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSE_S3_HASH)
          {
            return EncryptionMode::SSE_S3;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return EncryptionMode::SSE_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionMode>(hashCode);
          }

          return EncryptionMode::NOT_SET;
        }

        Aws::String GetNameForEncryptionMode(EncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case EncryptionMode::NOT_SET:
            return {};
          case EncryptionMode::SSE_S3:
            return "SSE_S3";
          case EncryptionMode::SSE_KMS:
            return "SSE_KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionModeMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
