/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/SseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Vectors
  {
    namespace Model
    {
      namespace SseTypeMapper
      {

        static const int AES256_HASH = HashingUtils::HashString("AES256");
        static const int aws_kms_HASH = HashingUtils::HashString("aws:kms");


        SseType GetSseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES256_HASH)
          {
            return SseType::AES256;
          }
          else if (hashCode == aws_kms_HASH)
          {
            return SseType::aws_kms;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SseType>(hashCode);
          }

          return SseType::NOT_SET;
        }

        Aws::String GetNameForSseType(SseType enumValue)
        {
          switch(enumValue)
          {
          case SseType::NOT_SET:
            return {};
          case SseType::AES256:
            return "AES256";
          case SseType::aws_kms:
            return "aws:kms";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SseTypeMapper
    } // namespace Model
  } // namespace S3Vectors
} // namespace Aws
