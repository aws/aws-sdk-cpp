/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/InventoryOptionalField.h>
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
      namespace InventoryOptionalFieldMapper
      {

        static constexpr uint32_t Size_HASH = ConstExprHashingUtils::HashString("Size");
        static constexpr uint32_t LastModifiedDate_HASH = ConstExprHashingUtils::HashString("LastModifiedDate");
        static constexpr uint32_t StorageClass_HASH = ConstExprHashingUtils::HashString("StorageClass");
        static constexpr uint32_t ETag_HASH = ConstExprHashingUtils::HashString("ETag");
        static constexpr uint32_t IsMultipartUploaded_HASH = ConstExprHashingUtils::HashString("IsMultipartUploaded");
        static constexpr uint32_t ReplicationStatus_HASH = ConstExprHashingUtils::HashString("ReplicationStatus");
        static constexpr uint32_t EncryptionStatus_HASH = ConstExprHashingUtils::HashString("EncryptionStatus");
        static constexpr uint32_t ObjectLockRetainUntilDate_HASH = ConstExprHashingUtils::HashString("ObjectLockRetainUntilDate");
        static constexpr uint32_t ObjectLockMode_HASH = ConstExprHashingUtils::HashString("ObjectLockMode");
        static constexpr uint32_t ObjectLockLegalHoldStatus_HASH = ConstExprHashingUtils::HashString("ObjectLockLegalHoldStatus");
        static constexpr uint32_t IntelligentTieringAccessTier_HASH = ConstExprHashingUtils::HashString("IntelligentTieringAccessTier");
        static constexpr uint32_t BucketKeyStatus_HASH = ConstExprHashingUtils::HashString("BucketKeyStatus");
        static constexpr uint32_t ChecksumAlgorithm_HASH = ConstExprHashingUtils::HashString("ChecksumAlgorithm");
        static constexpr uint32_t ObjectAccessControlList_HASH = ConstExprHashingUtils::HashString("ObjectAccessControlList");
        static constexpr uint32_t ObjectOwner_HASH = ConstExprHashingUtils::HashString("ObjectOwner");


        InventoryOptionalField GetInventoryOptionalFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Size_HASH)
          {
            return InventoryOptionalField::Size;
          }
          else if (hashCode == LastModifiedDate_HASH)
          {
            return InventoryOptionalField::LastModifiedDate;
          }
          else if (hashCode == StorageClass_HASH)
          {
            return InventoryOptionalField::StorageClass;
          }
          else if (hashCode == ETag_HASH)
          {
            return InventoryOptionalField::ETag;
          }
          else if (hashCode == IsMultipartUploaded_HASH)
          {
            return InventoryOptionalField::IsMultipartUploaded;
          }
          else if (hashCode == ReplicationStatus_HASH)
          {
            return InventoryOptionalField::ReplicationStatus;
          }
          else if (hashCode == EncryptionStatus_HASH)
          {
            return InventoryOptionalField::EncryptionStatus;
          }
          else if (hashCode == ObjectLockRetainUntilDate_HASH)
          {
            return InventoryOptionalField::ObjectLockRetainUntilDate;
          }
          else if (hashCode == ObjectLockMode_HASH)
          {
            return InventoryOptionalField::ObjectLockMode;
          }
          else if (hashCode == ObjectLockLegalHoldStatus_HASH)
          {
            return InventoryOptionalField::ObjectLockLegalHoldStatus;
          }
          else if (hashCode == IntelligentTieringAccessTier_HASH)
          {
            return InventoryOptionalField::IntelligentTieringAccessTier;
          }
          else if (hashCode == BucketKeyStatus_HASH)
          {
            return InventoryOptionalField::BucketKeyStatus;
          }
          else if (hashCode == ChecksumAlgorithm_HASH)
          {
            return InventoryOptionalField::ChecksumAlgorithm;
          }
          else if (hashCode == ObjectAccessControlList_HASH)
          {
            return InventoryOptionalField::ObjectAccessControlList;
          }
          else if (hashCode == ObjectOwner_HASH)
          {
            return InventoryOptionalField::ObjectOwner;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventoryOptionalField>(hashCode);
          }

          return InventoryOptionalField::NOT_SET;
        }

        Aws::String GetNameForInventoryOptionalField(InventoryOptionalField enumValue)
        {
          switch(enumValue)
          {
          case InventoryOptionalField::NOT_SET:
            return {};
          case InventoryOptionalField::Size:
            return "Size";
          case InventoryOptionalField::LastModifiedDate:
            return "LastModifiedDate";
          case InventoryOptionalField::StorageClass:
            return "StorageClass";
          case InventoryOptionalField::ETag:
            return "ETag";
          case InventoryOptionalField::IsMultipartUploaded:
            return "IsMultipartUploaded";
          case InventoryOptionalField::ReplicationStatus:
            return "ReplicationStatus";
          case InventoryOptionalField::EncryptionStatus:
            return "EncryptionStatus";
          case InventoryOptionalField::ObjectLockRetainUntilDate:
            return "ObjectLockRetainUntilDate";
          case InventoryOptionalField::ObjectLockMode:
            return "ObjectLockMode";
          case InventoryOptionalField::ObjectLockLegalHoldStatus:
            return "ObjectLockLegalHoldStatus";
          case InventoryOptionalField::IntelligentTieringAccessTier:
            return "IntelligentTieringAccessTier";
          case InventoryOptionalField::BucketKeyStatus:
            return "BucketKeyStatus";
          case InventoryOptionalField::ChecksumAlgorithm:
            return "ChecksumAlgorithm";
          case InventoryOptionalField::ObjectAccessControlList:
            return "ObjectAccessControlList";
          case InventoryOptionalField::ObjectOwner:
            return "ObjectOwner";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InventoryOptionalFieldMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
