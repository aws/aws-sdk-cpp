/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/FileShareType.h>
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
      namespace FileShareTypeMapper
      {

        static constexpr uint32_t NFS_HASH = ConstExprHashingUtils::HashString("NFS");
        static constexpr uint32_t SMB_HASH = ConstExprHashingUtils::HashString("SMB");


        FileShareType GetFileShareTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NFS_HASH)
          {
            return FileShareType::NFS;
          }
          else if (hashCode == SMB_HASH)
          {
            return FileShareType::SMB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileShareType>(hashCode);
          }

          return FileShareType::NOT_SET;
        }

        Aws::String GetNameForFileShareType(FileShareType enumValue)
        {
          switch(enumValue)
          {
          case FileShareType::NOT_SET:
            return {};
          case FileShareType::NFS:
            return "NFS";
          case FileShareType::SMB:
            return "SMB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileShareTypeMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
