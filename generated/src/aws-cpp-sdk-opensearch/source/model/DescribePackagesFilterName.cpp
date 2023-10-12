/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribePackagesFilterName.h>
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
      namespace DescribePackagesFilterNameMapper
      {

        static constexpr uint32_t PackageID_HASH = ConstExprHashingUtils::HashString("PackageID");
        static constexpr uint32_t PackageName_HASH = ConstExprHashingUtils::HashString("PackageName");
        static constexpr uint32_t PackageStatus_HASH = ConstExprHashingUtils::HashString("PackageStatus");


        DescribePackagesFilterName GetDescribePackagesFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PackageID_HASH)
          {
            return DescribePackagesFilterName::PackageID;
          }
          else if (hashCode == PackageName_HASH)
          {
            return DescribePackagesFilterName::PackageName;
          }
          else if (hashCode == PackageStatus_HASH)
          {
            return DescribePackagesFilterName::PackageStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribePackagesFilterName>(hashCode);
          }

          return DescribePackagesFilterName::NOT_SET;
        }

        Aws::String GetNameForDescribePackagesFilterName(DescribePackagesFilterName enumValue)
        {
          switch(enumValue)
          {
          case DescribePackagesFilterName::NOT_SET:
            return {};
          case DescribePackagesFilterName::PackageID:
            return "PackageID";
          case DescribePackagesFilterName::PackageName:
            return "PackageName";
          case DescribePackagesFilterName::PackageStatus:
            return "PackageStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribePackagesFilterNameMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
