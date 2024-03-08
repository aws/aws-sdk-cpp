/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/WebExperienceSamplePromptsControlMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace WebExperienceSamplePromptsControlModeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        WebExperienceSamplePromptsControlMode GetWebExperienceSamplePromptsControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return WebExperienceSamplePromptsControlMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return WebExperienceSamplePromptsControlMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebExperienceSamplePromptsControlMode>(hashCode);
          }

          return WebExperienceSamplePromptsControlMode::NOT_SET;
        }

        Aws::String GetNameForWebExperienceSamplePromptsControlMode(WebExperienceSamplePromptsControlMode enumValue)
        {
          switch(enumValue)
          {
          case WebExperienceSamplePromptsControlMode::NOT_SET:
            return {};
          case WebExperienceSamplePromptsControlMode::ENABLED:
            return "ENABLED";
          case WebExperienceSamplePromptsControlMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebExperienceSamplePromptsControlModeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
