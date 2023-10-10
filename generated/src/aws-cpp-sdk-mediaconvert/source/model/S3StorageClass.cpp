﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/S3StorageClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace S3StorageClassMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int REDUCED_REDUNDANCY_HASH = HashingUtils::HashString("REDUCED_REDUNDANCY");
        static const int STANDARD_IA_HASH = HashingUtils::HashString("STANDARD_IA");
        static const int ONEZONE_IA_HASH = HashingUtils::HashString("ONEZONE_IA");
        static const int INTELLIGENT_TIERING_HASH = HashingUtils::HashString("INTELLIGENT_TIERING");
        static const int GLACIER_HASH = HashingUtils::HashString("GLACIER");
        static const int DEEP_ARCHIVE_HASH = HashingUtils::HashString("DEEP_ARCHIVE");


        S3StorageClass GetS3StorageClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return S3StorageClass::STANDARD;
          }
          else if (hashCode == REDUCED_REDUNDANCY_HASH)
          {
            return S3StorageClass::REDUCED_REDUNDANCY;
          }
          else if (hashCode == STANDARD_IA_HASH)
          {
            return S3StorageClass::STANDARD_IA;
          }
          else if (hashCode == ONEZONE_IA_HASH)
          {
            return S3StorageClass::ONEZONE_IA;
          }
          else if (hashCode == INTELLIGENT_TIERING_HASH)
          {
            return S3StorageClass::INTELLIGENT_TIERING;
          }
          else if (hashCode == GLACIER_HASH)
          {
            return S3StorageClass::GLACIER;
          }
          else if (hashCode == DEEP_ARCHIVE_HASH)
          {
            return S3StorageClass::DEEP_ARCHIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3StorageClass>(hashCode);
          }

          return S3StorageClass::NOT_SET;
        }

        Aws::String GetNameForS3StorageClass(S3StorageClass enumValue)
        {
          switch(enumValue)
          {
          case S3StorageClass::NOT_SET:
            return {};
          case S3StorageClass::STANDARD:
            return "STANDARD";
          case S3StorageClass::REDUCED_REDUNDANCY:
            return "REDUCED_REDUNDANCY";
          case S3StorageClass::STANDARD_IA:
            return "STANDARD_IA";
          case S3StorageClass::ONEZONE_IA:
            return "ONEZONE_IA";
          case S3StorageClass::INTELLIGENT_TIERING:
            return "INTELLIGENT_TIERING";
          case S3StorageClass::GLACIER:
            return "GLACIER";
          case S3StorageClass::DEEP_ARCHIVE:
            return "DEEP_ARCHIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3StorageClassMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
