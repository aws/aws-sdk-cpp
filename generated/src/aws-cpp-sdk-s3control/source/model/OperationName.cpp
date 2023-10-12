/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/OperationName.h>
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
      namespace OperationNameMapper
      {

        static constexpr uint32_t LambdaInvoke_HASH = ConstExprHashingUtils::HashString("LambdaInvoke");
        static constexpr uint32_t S3PutObjectCopy_HASH = ConstExprHashingUtils::HashString("S3PutObjectCopy");
        static constexpr uint32_t S3PutObjectAcl_HASH = ConstExprHashingUtils::HashString("S3PutObjectAcl");
        static constexpr uint32_t S3PutObjectTagging_HASH = ConstExprHashingUtils::HashString("S3PutObjectTagging");
        static constexpr uint32_t S3DeleteObjectTagging_HASH = ConstExprHashingUtils::HashString("S3DeleteObjectTagging");
        static constexpr uint32_t S3InitiateRestoreObject_HASH = ConstExprHashingUtils::HashString("S3InitiateRestoreObject");
        static constexpr uint32_t S3PutObjectLegalHold_HASH = ConstExprHashingUtils::HashString("S3PutObjectLegalHold");
        static constexpr uint32_t S3PutObjectRetention_HASH = ConstExprHashingUtils::HashString("S3PutObjectRetention");
        static constexpr uint32_t S3ReplicateObject_HASH = ConstExprHashingUtils::HashString("S3ReplicateObject");


        OperationName GetOperationNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LambdaInvoke_HASH)
          {
            return OperationName::LambdaInvoke;
          }
          else if (hashCode == S3PutObjectCopy_HASH)
          {
            return OperationName::S3PutObjectCopy;
          }
          else if (hashCode == S3PutObjectAcl_HASH)
          {
            return OperationName::S3PutObjectAcl;
          }
          else if (hashCode == S3PutObjectTagging_HASH)
          {
            return OperationName::S3PutObjectTagging;
          }
          else if (hashCode == S3DeleteObjectTagging_HASH)
          {
            return OperationName::S3DeleteObjectTagging;
          }
          else if (hashCode == S3InitiateRestoreObject_HASH)
          {
            return OperationName::S3InitiateRestoreObject;
          }
          else if (hashCode == S3PutObjectLegalHold_HASH)
          {
            return OperationName::S3PutObjectLegalHold;
          }
          else if (hashCode == S3PutObjectRetention_HASH)
          {
            return OperationName::S3PutObjectRetention;
          }
          else if (hashCode == S3ReplicateObject_HASH)
          {
            return OperationName::S3ReplicateObject;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationName>(hashCode);
          }

          return OperationName::NOT_SET;
        }

        Aws::String GetNameForOperationName(OperationName enumValue)
        {
          switch(enumValue)
          {
          case OperationName::NOT_SET:
            return {};
          case OperationName::LambdaInvoke:
            return "LambdaInvoke";
          case OperationName::S3PutObjectCopy:
            return "S3PutObjectCopy";
          case OperationName::S3PutObjectAcl:
            return "S3PutObjectAcl";
          case OperationName::S3PutObjectTagging:
            return "S3PutObjectTagging";
          case OperationName::S3DeleteObjectTagging:
            return "S3DeleteObjectTagging";
          case OperationName::S3InitiateRestoreObject:
            return "S3InitiateRestoreObject";
          case OperationName::S3PutObjectLegalHold:
            return "S3PutObjectLegalHold";
          case OperationName::S3PutObjectRetention:
            return "S3PutObjectRetention";
          case OperationName::S3ReplicateObject:
            return "S3ReplicateObject";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationNameMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
