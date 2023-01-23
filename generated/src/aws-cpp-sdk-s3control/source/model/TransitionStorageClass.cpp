﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/TransitionStorageClass.h>
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
      namespace TransitionStorageClassMapper
      {

        static const int GLACIER_HASH = HashingUtils::HashString("GLACIER");
        static const int STANDARD_IA_HASH = HashingUtils::HashString("STANDARD_IA");
        static const int ONEZONE_IA_HASH = HashingUtils::HashString("ONEZONE_IA");
        static const int INTELLIGENT_TIERING_HASH = HashingUtils::HashString("INTELLIGENT_TIERING");
        static const int DEEP_ARCHIVE_HASH = HashingUtils::HashString("DEEP_ARCHIVE");


        TransitionStorageClass GetTransitionStorageClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GLACIER_HASH)
          {
            return TransitionStorageClass::GLACIER;
          }
          else if (hashCode == STANDARD_IA_HASH)
          {
            return TransitionStorageClass::STANDARD_IA;
          }
          else if (hashCode == ONEZONE_IA_HASH)
          {
            return TransitionStorageClass::ONEZONE_IA;
          }
          else if (hashCode == INTELLIGENT_TIERING_HASH)
          {
            return TransitionStorageClass::INTELLIGENT_TIERING;
          }
          else if (hashCode == DEEP_ARCHIVE_HASH)
          {
            return TransitionStorageClass::DEEP_ARCHIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitionStorageClass>(hashCode);
          }

          return TransitionStorageClass::NOT_SET;
        }

        Aws::String GetNameForTransitionStorageClass(TransitionStorageClass enumValue)
        {
          switch(enumValue)
          {
          case TransitionStorageClass::GLACIER:
            return "GLACIER";
          case TransitionStorageClass::STANDARD_IA:
            return "STANDARD_IA";
          case TransitionStorageClass::ONEZONE_IA:
            return "ONEZONE_IA";
          case TransitionStorageClass::INTELLIGENT_TIERING:
            return "INTELLIGENT_TIERING";
          case TransitionStorageClass::DEEP_ARCHIVE:
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

      } // namespace TransitionStorageClassMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
