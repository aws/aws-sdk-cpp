/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/PackageContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace PackageContentTypeMapper
      {

        static const int application_zip_HASH = HashingUtils::HashString("application/zip");


        PackageContentType GetPackageContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == application_zip_HASH)
          {
            return PackageContentType::application_zip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageContentType>(hashCode);
          }

          return PackageContentType::NOT_SET;
        }

        Aws::String GetNameForPackageContentType(PackageContentType enumValue)
        {
          switch(enumValue)
          {
          case PackageContentType::NOT_SET:
            return {};
          case PackageContentType::application_zip:
            return "application/zip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageContentTypeMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
