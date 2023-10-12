/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/ObjectStorageClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace ObjectStorageClassMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t REDUCED_REDUNDANCY_HASH = ConstExprHashingUtils::HashString("REDUCED_REDUNDANCY");
        static constexpr uint32_t GLACIER_HASH = ConstExprHashingUtils::HashString("GLACIER");
        static constexpr uint32_t STANDARD_IA_HASH = ConstExprHashingUtils::HashString("STANDARD_IA");
        static constexpr uint32_t ONEZONE_IA_HASH = ConstExprHashingUtils::HashString("ONEZONE_IA");
        static constexpr uint32_t INTELLIGENT_TIERING_HASH = ConstExprHashingUtils::HashString("INTELLIGENT_TIERING");
        static constexpr uint32_t DEEP_ARCHIVE_HASH = ConstExprHashingUtils::HashString("DEEP_ARCHIVE");
        static constexpr uint32_t OUTPOSTS_HASH = ConstExprHashingUtils::HashString("OUTPOSTS");
        static constexpr uint32_t GLACIER_IR_HASH = ConstExprHashingUtils::HashString("GLACIER_IR");
        static constexpr uint32_t SNOW_HASH = ConstExprHashingUtils::HashString("SNOW");


        ObjectStorageClass GetObjectStorageClassForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ObjectStorageClass::STANDARD;
          }
          else if (hashCode == REDUCED_REDUNDANCY_HASH)
          {
            return ObjectStorageClass::REDUCED_REDUNDANCY;
          }
          else if (hashCode == GLACIER_HASH)
          {
            return ObjectStorageClass::GLACIER;
          }
          else if (hashCode == STANDARD_IA_HASH)
          {
            return ObjectStorageClass::STANDARD_IA;
          }
          else if (hashCode == ONEZONE_IA_HASH)
          {
            return ObjectStorageClass::ONEZONE_IA;
          }
          else if (hashCode == INTELLIGENT_TIERING_HASH)
          {
            return ObjectStorageClass::INTELLIGENT_TIERING;
          }
          else if (hashCode == DEEP_ARCHIVE_HASH)
          {
            return ObjectStorageClass::DEEP_ARCHIVE;
          }
          else if (hashCode == OUTPOSTS_HASH)
          {
            return ObjectStorageClass::OUTPOSTS;
          }
          else if (hashCode == GLACIER_IR_HASH)
          {
            return ObjectStorageClass::GLACIER_IR;
          }
          else if (hashCode == SNOW_HASH)
          {
            return ObjectStorageClass::SNOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectStorageClass>(hashCode);
          }

          return ObjectStorageClass::NOT_SET;
        }

        Aws::String GetNameForObjectStorageClass(ObjectStorageClass enumValue)
        {
          switch(enumValue)
          {
          case ObjectStorageClass::NOT_SET:
            return {};
          case ObjectStorageClass::STANDARD:
            return "STANDARD";
          case ObjectStorageClass::REDUCED_REDUNDANCY:
            return "REDUCED_REDUNDANCY";
          case ObjectStorageClass::GLACIER:
            return "GLACIER";
          case ObjectStorageClass::STANDARD_IA:
            return "STANDARD_IA";
          case ObjectStorageClass::ONEZONE_IA:
            return "ONEZONE_IA";
          case ObjectStorageClass::INTELLIGENT_TIERING:
            return "INTELLIGENT_TIERING";
          case ObjectStorageClass::DEEP_ARCHIVE:
            return "DEEP_ARCHIVE";
          case ObjectStorageClass::OUTPOSTS:
            return "OUTPOSTS";
          case ObjectStorageClass::GLACIER_IR:
            return "GLACIER_IR";
          case ObjectStorageClass::SNOW:
            return "SNOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectStorageClassMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
