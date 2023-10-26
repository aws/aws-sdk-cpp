/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AdvancedInputFilter.h>
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
      namespace AdvancedInputFilterMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AdvancedInputFilter GetAdvancedInputFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AdvancedInputFilter::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AdvancedInputFilter::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdvancedInputFilter>(hashCode);
          }

          return AdvancedInputFilter::NOT_SET;
        }

        Aws::String GetNameForAdvancedInputFilter(AdvancedInputFilter enumValue)
        {
          switch(enumValue)
          {
          case AdvancedInputFilter::NOT_SET:
            return {};
          case AdvancedInputFilter::ENABLED:
            return "ENABLED";
          case AdvancedInputFilter::DISABLED:
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

      } // namespace AdvancedInputFilterMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
