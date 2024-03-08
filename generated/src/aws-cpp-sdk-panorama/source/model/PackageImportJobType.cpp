/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PackageImportJobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace PackageImportJobTypeMapper
      {

        static const int NODE_PACKAGE_VERSION_HASH = HashingUtils::HashString("NODE_PACKAGE_VERSION");
        static const int MARKETPLACE_NODE_PACKAGE_VERSION_HASH = HashingUtils::HashString("MARKETPLACE_NODE_PACKAGE_VERSION");


        PackageImportJobType GetPackageImportJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NODE_PACKAGE_VERSION_HASH)
          {
            return PackageImportJobType::NODE_PACKAGE_VERSION;
          }
          else if (hashCode == MARKETPLACE_NODE_PACKAGE_VERSION_HASH)
          {
            return PackageImportJobType::MARKETPLACE_NODE_PACKAGE_VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageImportJobType>(hashCode);
          }

          return PackageImportJobType::NOT_SET;
        }

        Aws::String GetNameForPackageImportJobType(PackageImportJobType enumValue)
        {
          switch(enumValue)
          {
          case PackageImportJobType::NOT_SET:
            return {};
          case PackageImportJobType::NODE_PACKAGE_VERSION:
            return "NODE_PACKAGE_VERSION";
          case PackageImportJobType::MARKETPLACE_NODE_PACKAGE_VERSION:
            return "MARKETPLACE_NODE_PACKAGE_VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageImportJobTypeMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
