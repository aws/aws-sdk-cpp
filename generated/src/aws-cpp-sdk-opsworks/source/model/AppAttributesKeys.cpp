/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/AppAttributesKeys.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace AppAttributesKeysMapper
      {

        static constexpr uint32_t DocumentRoot_HASH = ConstExprHashingUtils::HashString("DocumentRoot");
        static constexpr uint32_t RailsEnv_HASH = ConstExprHashingUtils::HashString("RailsEnv");
        static constexpr uint32_t AutoBundleOnDeploy_HASH = ConstExprHashingUtils::HashString("AutoBundleOnDeploy");
        static constexpr uint32_t AwsFlowRubySettings_HASH = ConstExprHashingUtils::HashString("AwsFlowRubySettings");


        AppAttributesKeys GetAppAttributesKeysForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DocumentRoot_HASH)
          {
            return AppAttributesKeys::DocumentRoot;
          }
          else if (hashCode == RailsEnv_HASH)
          {
            return AppAttributesKeys::RailsEnv;
          }
          else if (hashCode == AutoBundleOnDeploy_HASH)
          {
            return AppAttributesKeys::AutoBundleOnDeploy;
          }
          else if (hashCode == AwsFlowRubySettings_HASH)
          {
            return AppAttributesKeys::AwsFlowRubySettings;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppAttributesKeys>(hashCode);
          }

          return AppAttributesKeys::NOT_SET;
        }

        Aws::String GetNameForAppAttributesKeys(AppAttributesKeys enumValue)
        {
          switch(enumValue)
          {
          case AppAttributesKeys::NOT_SET:
            return {};
          case AppAttributesKeys::DocumentRoot:
            return "DocumentRoot";
          case AppAttributesKeys::RailsEnv:
            return "RailsEnv";
          case AppAttributesKeys::AutoBundleOnDeploy:
            return "AutoBundleOnDeploy";
          case AppAttributesKeys::AwsFlowRubySettings:
            return "AwsFlowRubySettings";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppAttributesKeysMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
