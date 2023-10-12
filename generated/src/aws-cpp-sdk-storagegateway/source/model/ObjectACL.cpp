/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace ObjectACLMapper
      {

        static constexpr uint32_t private__HASH = ConstExprHashingUtils::HashString("private");
        static constexpr uint32_t public_read_HASH = ConstExprHashingUtils::HashString("public-read");
        static constexpr uint32_t public_read_write_HASH = ConstExprHashingUtils::HashString("public-read-write");
        static constexpr uint32_t authenticated_read_HASH = ConstExprHashingUtils::HashString("authenticated-read");
        static constexpr uint32_t bucket_owner_read_HASH = ConstExprHashingUtils::HashString("bucket-owner-read");
        static constexpr uint32_t bucket_owner_full_control_HASH = ConstExprHashingUtils::HashString("bucket-owner-full-control");
        static constexpr uint32_t aws_exec_read_HASH = ConstExprHashingUtils::HashString("aws-exec-read");


        ObjectACL GetObjectACLForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == private__HASH)
          {
            return ObjectACL::private_;
          }
          else if (hashCode == public_read_HASH)
          {
            return ObjectACL::public_read;
          }
          else if (hashCode == public_read_write_HASH)
          {
            return ObjectACL::public_read_write;
          }
          else if (hashCode == authenticated_read_HASH)
          {
            return ObjectACL::authenticated_read;
          }
          else if (hashCode == bucket_owner_read_HASH)
          {
            return ObjectACL::bucket_owner_read;
          }
          else if (hashCode == bucket_owner_full_control_HASH)
          {
            return ObjectACL::bucket_owner_full_control;
          }
          else if (hashCode == aws_exec_read_HASH)
          {
            return ObjectACL::aws_exec_read;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectACL>(hashCode);
          }

          return ObjectACL::NOT_SET;
        }

        Aws::String GetNameForObjectACL(ObjectACL enumValue)
        {
          switch(enumValue)
          {
          case ObjectACL::NOT_SET:
            return {};
          case ObjectACL::private_:
            return "private";
          case ObjectACL::public_read:
            return "public-read";
          case ObjectACL::public_read_write:
            return "public-read-write";
          case ObjectACL::authenticated_read:
            return "authenticated-read";
          case ObjectACL::bucket_owner_read:
            return "bucket-owner-read";
          case ObjectACL::bucket_owner_full_control:
            return "bucket-owner-full-control";
          case ObjectACL::aws_exec_read:
            return "aws-exec-read";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectACLMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
