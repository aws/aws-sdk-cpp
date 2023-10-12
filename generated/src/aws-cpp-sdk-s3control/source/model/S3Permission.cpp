/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3Permission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace S3PermissionMapper
      {

        static constexpr uint32_t FULL_CONTROL_HASH = ConstExprHashingUtils::HashString("FULL_CONTROL");
        static constexpr uint32_t READ_HASH = ConstExprHashingUtils::HashString("READ");
        static constexpr uint32_t WRITE_HASH = ConstExprHashingUtils::HashString("WRITE");
        static constexpr uint32_t READ_ACP_HASH = ConstExprHashingUtils::HashString("READ_ACP");
        static constexpr uint32_t WRITE_ACP_HASH = ConstExprHashingUtils::HashString("WRITE_ACP");


        S3Permission GetS3PermissionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_CONTROL_HASH)
          {
            return S3Permission::FULL_CONTROL;
          }
          else if (hashCode == READ_HASH)
          {
            return S3Permission::READ;
          }
          else if (hashCode == WRITE_HASH)
          {
            return S3Permission::WRITE;
          }
          else if (hashCode == READ_ACP_HASH)
          {
            return S3Permission::READ_ACP;
          }
          else if (hashCode == WRITE_ACP_HASH)
          {
            return S3Permission::WRITE_ACP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3Permission>(hashCode);
          }

          return S3Permission::NOT_SET;
        }

        Aws::String GetNameForS3Permission(S3Permission enumValue)
        {
          switch(enumValue)
          {
          case S3Permission::NOT_SET:
            return {};
          case S3Permission::FULL_CONTROL:
            return "FULL_CONTROL";
          case S3Permission::READ:
            return "READ";
          case S3Permission::WRITE:
            return "WRITE";
          case S3Permission::READ_ACP:
            return "READ_ACP";
          case S3Permission::WRITE_ACP:
            return "WRITE_ACP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3PermissionMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
