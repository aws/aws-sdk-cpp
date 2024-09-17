/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/EncryptionType.h>
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
      namespace EncryptionTypeMapper
      {

        static const int SseS3_HASH = HashingUtils::HashString("SseS3");
        static const int SseKms_HASH = HashingUtils::HashString("SseKms");
        static const int DsseKms_HASH = HashingUtils::HashString("DsseKms");


        EncryptionType GetEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SseS3_HASH)
          {
            return EncryptionType::SseS3;
          }
          else if (hashCode == SseKms_HASH)
          {
            return EncryptionType::SseKms;
          }
          else if (hashCode == DsseKms_HASH)
          {
            return EncryptionType::DsseKms;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionType>(hashCode);
          }

          return EncryptionType::NOT_SET;
        }

        Aws::String GetNameForEncryptionType(EncryptionType enumValue)
        {
          switch(enumValue)
          {
          case EncryptionType::NOT_SET:
            return {};
          case EncryptionType::SseS3:
            return "SseS3";
          case EncryptionType::SseKms:
            return "SseKms";
          case EncryptionType::DsseKms:
            return "DsseKms";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionTypeMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
