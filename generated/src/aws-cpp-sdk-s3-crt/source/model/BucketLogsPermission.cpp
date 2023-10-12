/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/BucketLogsPermission.h>
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
      namespace BucketLogsPermissionMapper
      {

        static constexpr uint32_t FULL_CONTROL_HASH = ConstExprHashingUtils::HashString("FULL_CONTROL");
        static constexpr uint32_t READ_HASH = ConstExprHashingUtils::HashString("READ");
        static constexpr uint32_t WRITE_HASH = ConstExprHashingUtils::HashString("WRITE");


        BucketLogsPermission GetBucketLogsPermissionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_CONTROL_HASH)
          {
            return BucketLogsPermission::FULL_CONTROL;
          }
          else if (hashCode == READ_HASH)
          {
            return BucketLogsPermission::READ;
          }
          else if (hashCode == WRITE_HASH)
          {
            return BucketLogsPermission::WRITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BucketLogsPermission>(hashCode);
          }

          return BucketLogsPermission::NOT_SET;
        }

        Aws::String GetNameForBucketLogsPermission(BucketLogsPermission enumValue)
        {
          switch(enumValue)
          {
          case BucketLogsPermission::NOT_SET:
            return {};
          case BucketLogsPermission::FULL_CONTROL:
            return "FULL_CONTROL";
          case BucketLogsPermission::READ:
            return "READ";
          case BucketLogsPermission::WRITE:
            return "WRITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BucketLogsPermissionMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
