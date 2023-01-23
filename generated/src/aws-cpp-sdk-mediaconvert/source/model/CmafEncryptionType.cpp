/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafEncryptionType.h>
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
      namespace CmafEncryptionTypeMapper
      {

        static const int SAMPLE_AES_HASH = HashingUtils::HashString("SAMPLE_AES");
        static const int AES_CTR_HASH = HashingUtils::HashString("AES_CTR");


        CmafEncryptionType GetCmafEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAMPLE_AES_HASH)
          {
            return CmafEncryptionType::SAMPLE_AES;
          }
          else if (hashCode == AES_CTR_HASH)
          {
            return CmafEncryptionType::AES_CTR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafEncryptionType>(hashCode);
          }

          return CmafEncryptionType::NOT_SET;
        }

        Aws::String GetNameForCmafEncryptionType(CmafEncryptionType enumValue)
        {
          switch(enumValue)
          {
          case CmafEncryptionType::SAMPLE_AES:
            return "SAMPLE_AES";
          case CmafEncryptionType::AES_CTR:
            return "AES_CTR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafEncryptionTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
