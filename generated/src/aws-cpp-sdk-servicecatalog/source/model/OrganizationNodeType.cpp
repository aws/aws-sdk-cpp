/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/OrganizationNodeType.h>
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
      namespace OrganizationNodeTypeMapper
      {

        static constexpr uint32_t ORGANIZATION_HASH = ConstExprHashingUtils::HashString("ORGANIZATION");
        static constexpr uint32_t ORGANIZATIONAL_UNIT_HASH = ConstExprHashingUtils::HashString("ORGANIZATIONAL_UNIT");
        static constexpr uint32_t ACCOUNT_HASH = ConstExprHashingUtils::HashString("ACCOUNT");


        OrganizationNodeType GetOrganizationNodeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORGANIZATION_HASH)
          {
            return OrganizationNodeType::ORGANIZATION;
          }
          else if (hashCode == ORGANIZATIONAL_UNIT_HASH)
          {
            return OrganizationNodeType::ORGANIZATIONAL_UNIT;
          }
          else if (hashCode == ACCOUNT_HASH)
          {
            return OrganizationNodeType::ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationNodeType>(hashCode);
          }

          return OrganizationNodeType::NOT_SET;
        }

        Aws::String GetNameForOrganizationNodeType(OrganizationNodeType enumValue)
        {
          switch(enumValue)
          {
          case OrganizationNodeType::NOT_SET:
            return {};
          case OrganizationNodeType::ORGANIZATION:
            return "ORGANIZATION";
          case OrganizationNodeType::ORGANIZATIONAL_UNIT:
            return "ORGANIZATIONAL_UNIT";
          case OrganizationNodeType::ACCOUNT:
            return "ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationNodeTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
