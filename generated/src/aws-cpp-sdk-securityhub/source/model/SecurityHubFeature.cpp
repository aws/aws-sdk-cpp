/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SecurityHubFeature.h>
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
      namespace SecurityHubFeatureMapper
      {

        static const int SecurityHub_HASH = HashingUtils::HashString("SecurityHub");
        static const int SecurityHubV2_HASH = HashingUtils::HashString("SecurityHubV2");


        SecurityHubFeature GetSecurityHubFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SecurityHub_HASH)
          {
            return SecurityHubFeature::SecurityHub;
          }
          else if (hashCode == SecurityHubV2_HASH)
          {
            return SecurityHubFeature::SecurityHubV2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityHubFeature>(hashCode);
          }

          return SecurityHubFeature::NOT_SET;
        }

        Aws::String GetNameForSecurityHubFeature(SecurityHubFeature enumValue)
        {
          switch(enumValue)
          {
          case SecurityHubFeature::NOT_SET:
            return {};
          case SecurityHubFeature::SecurityHub:
            return "SecurityHub";
          case SecurityHubFeature::SecurityHubV2:
            return "SecurityHubV2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityHubFeatureMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
