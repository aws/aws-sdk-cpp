/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeblockFilter.h>
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
      namespace InputDeblockFilterMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        InputDeblockFilter GetInputDeblockFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return InputDeblockFilter::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return InputDeblockFilter::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeblockFilter>(hashCode);
          }

          return InputDeblockFilter::NOT_SET;
        }

        Aws::String GetNameForInputDeblockFilter(InputDeblockFilter enumValue)
        {
          switch(enumValue)
          {
          case InputDeblockFilter::DISABLED:
            return "DISABLED";
          case InputDeblockFilter::ENABLED:
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

      } // namespace InputDeblockFilterMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
