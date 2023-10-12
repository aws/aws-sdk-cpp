/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/TsEncryptionMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace TsEncryptionMethodMapper
      {

        static constexpr uint32_t AES_128_HASH = ConstExprHashingUtils::HashString("AES_128");
        static constexpr uint32_t SAMPLE_AES_HASH = ConstExprHashingUtils::HashString("SAMPLE_AES");


        TsEncryptionMethod GetTsEncryptionMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES_128_HASH)
          {
            return TsEncryptionMethod::AES_128;
          }
          else if (hashCode == SAMPLE_AES_HASH)
          {
            return TsEncryptionMethod::SAMPLE_AES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TsEncryptionMethod>(hashCode);
          }

          return TsEncryptionMethod::NOT_SET;
        }

        Aws::String GetNameForTsEncryptionMethod(TsEncryptionMethod enumValue)
        {
          switch(enumValue)
          {
          case TsEncryptionMethod::NOT_SET:
            return {};
          case TsEncryptionMethod::AES_128:
            return "AES_128";
          case TsEncryptionMethod::SAMPLE_AES:
            return "SAMPLE_AES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TsEncryptionMethodMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
