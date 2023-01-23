/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDenoiseFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputDenoiseFilterMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        InputDenoiseFilter GetInputDenoiseFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return InputDenoiseFilter::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return InputDenoiseFilter::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDenoiseFilter>(hashCode);
          }

          return InputDenoiseFilter::NOT_SET;
        }

        Aws::String GetNameForInputDenoiseFilter(InputDenoiseFilter enumValue)
        {
          switch(enumValue)
          {
          case InputDenoiseFilter::DISABLED:
            return "DISABLED";
          case InputDenoiseFilter::ENABLED:
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

      } // namespace InputDenoiseFilterMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
