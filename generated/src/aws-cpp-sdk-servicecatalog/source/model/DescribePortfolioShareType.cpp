/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribePortfolioShareType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace DescribePortfolioShareTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
        static const int ORGANIZATIONAL_UNIT_HASH = HashingUtils::HashString("ORGANIZATIONAL_UNIT");
        static const int ORGANIZATION_MEMBER_ACCOUNT_HASH = HashingUtils::HashString("ORGANIZATION_MEMBER_ACCOUNT");


        DescribePortfolioShareType GetDescribePortfolioShareTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return DescribePortfolioShareType::ACCOUNT;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return DescribePortfolioShareType::ORGANIZATION;
          }
          else if (hashCode == ORGANIZATIONAL_UNIT_HASH)
          {
            return DescribePortfolioShareType::ORGANIZATIONAL_UNIT;
          }
          else if (hashCode == ORGANIZATION_MEMBER_ACCOUNT_HASH)
          {
            return DescribePortfolioShareType::ORGANIZATION_MEMBER_ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribePortfolioShareType>(hashCode);
          }

          return DescribePortfolioShareType::NOT_SET;
        }

        Aws::String GetNameForDescribePortfolioShareType(DescribePortfolioShareType enumValue)
        {
          switch(enumValue)
          {
          case DescribePortfolioShareType::NOT_SET:
            return {};
          case DescribePortfolioShareType::ACCOUNT:
            return "ACCOUNT";
          case DescribePortfolioShareType::ORGANIZATION:
            return "ORGANIZATION";
          case DescribePortfolioShareType::ORGANIZATIONAL_UNIT:
            return "ORGANIZATIONAL_UNIT";
          case DescribePortfolioShareType::ORGANIZATION_MEMBER_ACCOUNT:
            return "ORGANIZATION_MEMBER_ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribePortfolioShareTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
