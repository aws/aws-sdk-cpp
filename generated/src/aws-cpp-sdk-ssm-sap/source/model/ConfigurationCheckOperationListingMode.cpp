/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ConfigurationCheckOperationListingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ConfigurationCheckOperationListingModeMapper
      {

        static const int ALL_OPERATIONS_HASH = HashingUtils::HashString("ALL_OPERATIONS");
        static const int LATEST_PER_CHECK_HASH = HashingUtils::HashString("LATEST_PER_CHECK");


        ConfigurationCheckOperationListingMode GetConfigurationCheckOperationListingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_OPERATIONS_HASH)
          {
            return ConfigurationCheckOperationListingMode::ALL_OPERATIONS;
          }
          else if (hashCode == LATEST_PER_CHECK_HASH)
          {
            return ConfigurationCheckOperationListingMode::LATEST_PER_CHECK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationCheckOperationListingMode>(hashCode);
          }

          return ConfigurationCheckOperationListingMode::NOT_SET;
        }

        Aws::String GetNameForConfigurationCheckOperationListingMode(ConfigurationCheckOperationListingMode enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationCheckOperationListingMode::NOT_SET:
            return {};
          case ConfigurationCheckOperationListingMode::ALL_OPERATIONS:
            return "ALL_OPERATIONS";
          case ConfigurationCheckOperationListingMode::LATEST_PER_CHECK:
            return "LATEST_PER_CHECK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationCheckOperationListingModeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
