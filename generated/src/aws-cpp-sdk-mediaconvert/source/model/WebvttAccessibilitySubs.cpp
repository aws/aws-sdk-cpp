/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/WebvttAccessibilitySubs.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace WebvttAccessibilitySubsMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        WebvttAccessibilitySubs GetWebvttAccessibilitySubsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return WebvttAccessibilitySubs::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return WebvttAccessibilitySubs::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebvttAccessibilitySubs>(hashCode);
          }

          return WebvttAccessibilitySubs::NOT_SET;
        }

        Aws::String GetNameForWebvttAccessibilitySubs(WebvttAccessibilitySubs enumValue)
        {
          switch(enumValue)
          {
          case WebvttAccessibilitySubs::NOT_SET:
            return {};
          case WebvttAccessibilitySubs::DISABLED:
            return "DISABLED";
          case WebvttAccessibilitySubs::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebvttAccessibilitySubsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
