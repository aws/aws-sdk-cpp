/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/TransitionStorageClass.h>
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
      namespace TransitionStorageClassMapper
      {

        static constexpr uint32_t GLACIER_HASH = ConstExprHashingUtils::HashString("GLACIER");
        static constexpr uint32_t STANDARD_IA_HASH = ConstExprHashingUtils::HashString("STANDARD_IA");
        static constexpr uint32_t ONEZONE_IA_HASH = ConstExprHashingUtils::HashString("ONEZONE_IA");
        static constexpr uint32_t INTELLIGENT_TIERING_HASH = ConstExprHashingUtils::HashString("INTELLIGENT_TIERING");
        static constexpr uint32_t DEEP_ARCHIVE_HASH = ConstExprHashingUtils::HashString("DEEP_ARCHIVE");
        static constexpr uint32_t GLACIER_IR_HASH = ConstExprHashingUtils::HashString("GLACIER_IR");


        TransitionStorageClass GetTransitionStorageClassForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == GLACIER_IR_HASH)
          {
            return TransitionStorageClass::GLACIER_IR;
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
          case TransitionStorageClass::NOT_SET:
            return {};
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
          case TransitionStorageClass::GLACIER_IR:
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

      } // namespace TransitionStorageClassMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
