/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputFilter.h>
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
      namespace InputFilterMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int FORCED_HASH = HashingUtils::HashString("FORCED");


        InputFilter GetInputFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return InputFilter::AUTO;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return InputFilter::DISABLED;
          }
          else if (hashCode == FORCED_HASH)
          {
            return InputFilter::FORCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputFilter>(hashCode);
          }

          return InputFilter::NOT_SET;
        }

        Aws::String GetNameForInputFilter(InputFilter enumValue)
        {
          switch(enumValue)
          {
          case InputFilter::AUTO:
            return "AUTO";
          case InputFilter::DISABLED:
            return "DISABLED";
          case InputFilter::FORCED:
            return "FORCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputFilterMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
