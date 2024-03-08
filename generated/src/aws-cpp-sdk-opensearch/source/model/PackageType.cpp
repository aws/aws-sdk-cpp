/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace PackageTypeMapper
      {

        static const int TXT_DICTIONARY_HASH = HashingUtils::HashString("TXT-DICTIONARY");
        static const int ZIP_PLUGIN_HASH = HashingUtils::HashString("ZIP-PLUGIN");


        PackageType GetPackageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TXT_DICTIONARY_HASH)
          {
            return PackageType::TXT_DICTIONARY;
          }
          else if (hashCode == ZIP_PLUGIN_HASH)
          {
            return PackageType::ZIP_PLUGIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageType>(hashCode);
          }

          return PackageType::NOT_SET;
        }

        Aws::String GetNameForPackageType(PackageType enumValue)
        {
          switch(enumValue)
          {
          case PackageType::NOT_SET:
            return {};
          case PackageType::TXT_DICTIONARY:
            return "TXT-DICTIONARY";
          case PackageType::ZIP_PLUGIN:
            return "ZIP-PLUGIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
