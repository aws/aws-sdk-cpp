/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafKeyProviderType.h>
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
      namespace CmafKeyProviderTypeMapper
      {

        static const int SPEKE_HASH = HashingUtils::HashString("SPEKE");
        static const int STATIC_KEY_HASH = HashingUtils::HashString("STATIC_KEY");


        CmafKeyProviderType GetCmafKeyProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPEKE_HASH)
          {
            return CmafKeyProviderType::SPEKE;
          }
          else if (hashCode == STATIC_KEY_HASH)
          {
            return CmafKeyProviderType::STATIC_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafKeyProviderType>(hashCode);
          }

          return CmafKeyProviderType::NOT_SET;
        }

        Aws::String GetNameForCmafKeyProviderType(CmafKeyProviderType enumValue)
        {
          switch(enumValue)
          {
          case CmafKeyProviderType::SPEKE:
            return "SPEKE";
          case CmafKeyProviderType::STATIC_KEY:
            return "STATIC_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafKeyProviderTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
