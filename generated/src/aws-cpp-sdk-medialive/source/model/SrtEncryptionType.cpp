/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SrtEncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace SrtEncryptionTypeMapper
      {

        static const int AES128_HASH = HashingUtils::HashString("AES128");
        static const int AES192_HASH = HashingUtils::HashString("AES192");
        static const int AES256_HASH = HashingUtils::HashString("AES256");


        SrtEncryptionType GetSrtEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES128_HASH)
          {
            return SrtEncryptionType::AES128;
          }
          else if (hashCode == AES192_HASH)
          {
            return SrtEncryptionType::AES192;
          }
          else if (hashCode == AES256_HASH)
          {
            return SrtEncryptionType::AES256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SrtEncryptionType>(hashCode);
          }

          return SrtEncryptionType::NOT_SET;
        }

        Aws::String GetNameForSrtEncryptionType(SrtEncryptionType enumValue)
        {
          switch(enumValue)
          {
          case SrtEncryptionType::NOT_SET:
            return {};
          case SrtEncryptionType::AES128:
            return "AES128";
          case SrtEncryptionType::AES192:
            return "AES192";
          case SrtEncryptionType::AES256:
            return "AES256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SrtEncryptionTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
