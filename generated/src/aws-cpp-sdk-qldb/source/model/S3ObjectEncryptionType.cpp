/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/S3ObjectEncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QLDB
  {
    namespace Model
    {
      namespace S3ObjectEncryptionTypeMapper
      {

        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE_KMS");
        static const int SSE_S3_HASH = HashingUtils::HashString("SSE_S3");
        static const int NO_ENCRYPTION_HASH = HashingUtils::HashString("NO_ENCRYPTION");


        S3ObjectEncryptionType GetS3ObjectEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSE_KMS_HASH)
          {
            return S3ObjectEncryptionType::SSE_KMS;
          }
          else if (hashCode == SSE_S3_HASH)
          {
            return S3ObjectEncryptionType::SSE_S3;
          }
          else if (hashCode == NO_ENCRYPTION_HASH)
          {
            return S3ObjectEncryptionType::NO_ENCRYPTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ObjectEncryptionType>(hashCode);
          }

          return S3ObjectEncryptionType::NOT_SET;
        }

        Aws::String GetNameForS3ObjectEncryptionType(S3ObjectEncryptionType enumValue)
        {
          switch(enumValue)
          {
          case S3ObjectEncryptionType::SSE_KMS:
            return "SSE_KMS";
          case S3ObjectEncryptionType::SSE_S3:
            return "SSE_S3";
          case S3ObjectEncryptionType::NO_ENCRYPTION:
            return "NO_ENCRYPTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ObjectEncryptionTypeMapper
    } // namespace Model
  } // namespace QLDB
} // namespace Aws
