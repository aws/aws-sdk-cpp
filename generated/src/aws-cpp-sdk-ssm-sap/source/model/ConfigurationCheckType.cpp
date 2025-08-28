/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ConfigurationCheckType.h>
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
      namespace ConfigurationCheckTypeMapper
      {

        static const int SAP_CHECK_01_HASH = HashingUtils::HashString("SAP_CHECK_01");
        static const int SAP_CHECK_02_HASH = HashingUtils::HashString("SAP_CHECK_02");
        static const int SAP_CHECK_03_HASH = HashingUtils::HashString("SAP_CHECK_03");


        ConfigurationCheckType GetConfigurationCheckTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAP_CHECK_01_HASH)
          {
            return ConfigurationCheckType::SAP_CHECK_01;
          }
          else if (hashCode == SAP_CHECK_02_HASH)
          {
            return ConfigurationCheckType::SAP_CHECK_02;
          }
          else if (hashCode == SAP_CHECK_03_HASH)
          {
            return ConfigurationCheckType::SAP_CHECK_03;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationCheckType>(hashCode);
          }

          return ConfigurationCheckType::NOT_SET;
        }

        Aws::String GetNameForConfigurationCheckType(ConfigurationCheckType enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationCheckType::NOT_SET:
            return {};
          case ConfigurationCheckType::SAP_CHECK_01:
            return "SAP_CHECK_01";
          case ConfigurationCheckType::SAP_CHECK_02:
            return "SAP_CHECK_02";
          case ConfigurationCheckType::SAP_CHECK_03:
            return "SAP_CHECK_03";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationCheckTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
