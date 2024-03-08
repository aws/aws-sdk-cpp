/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/KeyUsagePropertyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace KeyUsagePropertyTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");


        KeyUsagePropertyType GetKeyUsagePropertyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return KeyUsagePropertyType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyUsagePropertyType>(hashCode);
          }

          return KeyUsagePropertyType::NOT_SET;
        }

        Aws::String GetNameForKeyUsagePropertyType(KeyUsagePropertyType enumValue)
        {
          switch(enumValue)
          {
          case KeyUsagePropertyType::NOT_SET:
            return {};
          case KeyUsagePropertyType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyUsagePropertyTypeMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
