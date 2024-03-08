/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/S3EncryptionOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace S3EncryptionOptionMapper
      {

        static const int SSE_S3_HASH = HashingUtils::HashString("SSE_S3");
        static const int SSE_KMS_HASH = HashingUtils::HashString("SSE_KMS");


        S3EncryptionOption GetS3EncryptionOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSE_S3_HASH)
          {
            return S3EncryptionOption::SSE_S3;
          }
          else if (hashCode == SSE_KMS_HASH)
          {
            return S3EncryptionOption::SSE_KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3EncryptionOption>(hashCode);
          }

          return S3EncryptionOption::NOT_SET;
        }

        Aws::String GetNameForS3EncryptionOption(S3EncryptionOption enumValue)
        {
          switch(enumValue)
          {
          case S3EncryptionOption::NOT_SET:
            return {};
          case S3EncryptionOption::SSE_S3:
            return "SSE_S3";
          case S3EncryptionOption::SSE_KMS:
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

      } // namespace S3EncryptionOptionMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws
