/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/PortfolioShareType.h>
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
      namespace PortfolioShareTypeMapper
      {

        static const int IMPORTED_HASH = HashingUtils::HashString("IMPORTED");
        static const int AWS_SERVICECATALOG_HASH = HashingUtils::HashString("AWS_SERVICECATALOG");
        static const int AWS_ORGANIZATIONS_HASH = HashingUtils::HashString("AWS_ORGANIZATIONS");


        PortfolioShareType GetPortfolioShareTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORTED_HASH)
          {
            return PortfolioShareType::IMPORTED;
          }
          else if (hashCode == AWS_SERVICECATALOG_HASH)
          {
            return PortfolioShareType::AWS_SERVICECATALOG;
          }
          else if (hashCode == AWS_ORGANIZATIONS_HASH)
          {
            return PortfolioShareType::AWS_ORGANIZATIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortfolioShareType>(hashCode);
          }

          return PortfolioShareType::NOT_SET;
        }

        Aws::String GetNameForPortfolioShareType(PortfolioShareType enumValue)
        {
          switch(enumValue)
          {
          case PortfolioShareType::IMPORTED:
            return "IMPORTED";
          case PortfolioShareType::AWS_SERVICECATALOG:
            return "AWS_SERVICECATALOG";
          case PortfolioShareType::AWS_ORGANIZATIONS:
            return "AWS_ORGANIZATIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PortfolioShareTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
