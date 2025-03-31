/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ScopePermission.h>
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
      namespace ScopePermissionMapper
      {

        static const int GetObject_HASH = HashingUtils::HashString("GetObject");
        static const int GetObjectAttributes_HASH = HashingUtils::HashString("GetObjectAttributes");
        static const int ListMultipartUploadParts_HASH = HashingUtils::HashString("ListMultipartUploadParts");
        static const int ListBucket_HASH = HashingUtils::HashString("ListBucket");
        static const int ListBucketMultipartUploads_HASH = HashingUtils::HashString("ListBucketMultipartUploads");
        static const int PutObject_HASH = HashingUtils::HashString("PutObject");
        static const int DeleteObject_HASH = HashingUtils::HashString("DeleteObject");
        static const int AbortMultipartUpload_HASH = HashingUtils::HashString("AbortMultipartUpload");


        ScopePermission GetScopePermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GetObject_HASH)
          {
            return ScopePermission::GetObject;
          }
          else if (hashCode == GetObjectAttributes_HASH)
          {
            return ScopePermission::GetObjectAttributes;
          }
          else if (hashCode == ListMultipartUploadParts_HASH)
          {
            return ScopePermission::ListMultipartUploadParts;
          }
          else if (hashCode == ListBucket_HASH)
          {
            return ScopePermission::ListBucket;
          }
          else if (hashCode == ListBucketMultipartUploads_HASH)
          {
            return ScopePermission::ListBucketMultipartUploads;
          }
          else if (hashCode == PutObject_HASH)
          {
            return ScopePermission::PutObject;
          }
          else if (hashCode == DeleteObject_HASH)
          {
            return ScopePermission::DeleteObject;
          }
          else if (hashCode == AbortMultipartUpload_HASH)
          {
            return ScopePermission::AbortMultipartUpload;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScopePermission>(hashCode);
          }

          return ScopePermission::NOT_SET;
        }

        Aws::String GetNameForScopePermission(ScopePermission enumValue)
        {
          switch(enumValue)
          {
          case ScopePermission::NOT_SET:
            return {};
          case ScopePermission::GetObject:
            return "GetObject";
          case ScopePermission::GetObjectAttributes:
            return "GetObjectAttributes";
          case ScopePermission::ListMultipartUploadParts:
            return "ListMultipartUploadParts";
          case ScopePermission::ListBucket:
            return "ListBucket";
          case ScopePermission::ListBucketMultipartUploads:
            return "ListBucketMultipartUploads";
          case ScopePermission::PutObject:
            return "PutObject";
          case ScopePermission::DeleteObject:
            return "DeleteObject";
          case ScopePermission::AbortMultipartUpload:
            return "AbortMultipartUpload";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopePermissionMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
