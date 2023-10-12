/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ReplicationStorageClass.h>
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
      namespace ReplicationStorageClassMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t REDUCED_REDUNDANCY_HASH = ConstExprHashingUtils::HashString("REDUCED_REDUNDANCY");
        static constexpr uint32_t STANDARD_IA_HASH = ConstExprHashingUtils::HashString("STANDARD_IA");
        static constexpr uint32_t ONEZONE_IA_HASH = ConstExprHashingUtils::HashString("ONEZONE_IA");
        static constexpr uint32_t INTELLIGENT_TIERING_HASH = ConstExprHashingUtils::HashString("INTELLIGENT_TIERING");
        static constexpr uint32_t GLACIER_HASH = ConstExprHashingUtils::HashString("GLACIER");
        static constexpr uint32_t DEEP_ARCHIVE_HASH = ConstExprHashingUtils::HashString("DEEP_ARCHIVE");
        static constexpr uint32_t OUTPOSTS_HASH = ConstExprHashingUtils::HashString("OUTPOSTS");
        static constexpr uint32_t GLACIER_IR_HASH = ConstExprHashingUtils::HashString("GLACIER_IR");


        ReplicationStorageClass GetReplicationStorageClassForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ReplicationStorageClass::STANDARD;
          }
          else if (hashCode == REDUCED_REDUNDANCY_HASH)
          {
            return ReplicationStorageClass::REDUCED_REDUNDANCY;
          }
          else if (hashCode == STANDARD_IA_HASH)
          {
            return ReplicationStorageClass::STANDARD_IA;
          }
          else if (hashCode == ONEZONE_IA_HASH)
          {
            return ReplicationStorageClass::ONEZONE_IA;
          }
          else if (hashCode == INTELLIGENT_TIERING_HASH)
          {
            return ReplicationStorageClass::INTELLIGENT_TIERING;
          }
          else if (hashCode == GLACIER_HASH)
          {
            return ReplicationStorageClass::GLACIER;
          }
          else if (hashCode == DEEP_ARCHIVE_HASH)
          {
            return ReplicationStorageClass::DEEP_ARCHIVE;
          }
          else if (hashCode == OUTPOSTS_HASH)
          {
            return ReplicationStorageClass::OUTPOSTS;
          }
          else if (hashCode == GLACIER_IR_HASH)
          {
            return ReplicationStorageClass::GLACIER_IR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationStorageClass>(hashCode);
          }

          return ReplicationStorageClass::NOT_SET;
        }

        Aws::String GetNameForReplicationStorageClass(ReplicationStorageClass enumValue)
        {
          switch(enumValue)
          {
          case ReplicationStorageClass::NOT_SET:
            return {};
          case ReplicationStorageClass::STANDARD:
            return "STANDARD";
          case ReplicationStorageClass::REDUCED_REDUNDANCY:
            return "REDUCED_REDUNDANCY";
          case ReplicationStorageClass::STANDARD_IA:
            return "STANDARD_IA";
          case ReplicationStorageClass::ONEZONE_IA:
            return "ONEZONE_IA";
          case ReplicationStorageClass::INTELLIGENT_TIERING:
            return "INTELLIGENT_TIERING";
          case ReplicationStorageClass::GLACIER:
            return "GLACIER";
          case ReplicationStorageClass::DEEP_ARCHIVE:
            return "DEEP_ARCHIVE";
          case ReplicationStorageClass::OUTPOSTS:
            return "OUTPOSTS";
          case ReplicationStorageClass::GLACIER_IR:
            return "GLACIER_IR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationStorageClassMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
