/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/OrganizationFeatureSet.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace OrganizationFeatureSetMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int CONSOLIDATED_BILLING_HASH = HashingUtils::HashString("CONSOLIDATED_BILLING");


        OrganizationFeatureSet GetOrganizationFeatureSetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return OrganizationFeatureSet::ALL;
          }
          else if (hashCode == CONSOLIDATED_BILLING_HASH)
          {
            return OrganizationFeatureSet::CONSOLIDATED_BILLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationFeatureSet>(hashCode);
          }

          return OrganizationFeatureSet::NOT_SET;
        }

        Aws::String GetNameForOrganizationFeatureSet(OrganizationFeatureSet enumValue)
        {
          switch(enumValue)
          {
          case OrganizationFeatureSet::ALL:
            return "ALL";
          case OrganizationFeatureSet::CONSOLIDATED_BILLING:
            return "CONSOLIDATED_BILLING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationFeatureSetMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
