/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OrganizationConfigurationConfigurationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace OrganizationConfigurationConfigurationTypeMapper
      {

        static const int CENTRAL_HASH = HashingUtils::HashString("CENTRAL");
        static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");


        OrganizationConfigurationConfigurationType GetOrganizationConfigurationConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENTRAL_HASH)
          {
            return OrganizationConfigurationConfigurationType::CENTRAL;
          }
          else if (hashCode == LOCAL_HASH)
          {
            return OrganizationConfigurationConfigurationType::LOCAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationConfigurationConfigurationType>(hashCode);
          }

          return OrganizationConfigurationConfigurationType::NOT_SET;
        }

        Aws::String GetNameForOrganizationConfigurationConfigurationType(OrganizationConfigurationConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case OrganizationConfigurationConfigurationType::NOT_SET:
            return {};
          case OrganizationConfigurationConfigurationType::CENTRAL:
            return "CENTRAL";
          case OrganizationConfigurationConfigurationType::LOCAL:
            return "LOCAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationConfigurationConfigurationTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
