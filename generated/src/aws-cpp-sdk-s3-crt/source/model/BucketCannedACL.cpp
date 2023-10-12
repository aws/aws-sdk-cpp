/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/BucketCannedACL.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace BucketCannedACLMapper
      {

        static constexpr uint32_t private__HASH = ConstExprHashingUtils::HashString("private");
        static constexpr uint32_t public_read_HASH = ConstExprHashingUtils::HashString("public-read");
        static constexpr uint32_t public_read_write_HASH = ConstExprHashingUtils::HashString("public-read-write");
        static constexpr uint32_t authenticated_read_HASH = ConstExprHashingUtils::HashString("authenticated-read");


        BucketCannedACL GetBucketCannedACLForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == private__HASH)
          {
            return BucketCannedACL::private_;
          }
          else if (hashCode == public_read_HASH)
          {
            return BucketCannedACL::public_read;
          }
          else if (hashCode == public_read_write_HASH)
          {
            return BucketCannedACL::public_read_write;
          }
          else if (hashCode == authenticated_read_HASH)
          {
            return BucketCannedACL::authenticated_read;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BucketCannedACL>(hashCode);
          }

          return BucketCannedACL::NOT_SET;
        }

        Aws::String GetNameForBucketCannedACL(BucketCannedACL enumValue)
        {
          switch(enumValue)
          {
          case BucketCannedACL::NOT_SET:
            return {};
          case BucketCannedACL::private_:
            return "private";
          case BucketCannedACL::public_read:
            return "public-read";
          case BucketCannedACL::public_read_write:
            return "public-read-write";
          case BucketCannedACL::authenticated_read:
            return "authenticated-read";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BucketCannedACLMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
