/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/InputCardComputeMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace InputCardComputeModeMapper
      {

        static const int append_HASH = HashingUtils::HashString("append");
        static const int replace_HASH = HashingUtils::HashString("replace");


        InputCardComputeMode GetInputCardComputeModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == append_HASH)
          {
            return InputCardComputeMode::append;
          }
          else if (hashCode == replace_HASH)
          {
            return InputCardComputeMode::replace;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputCardComputeMode>(hashCode);
          }

          return InputCardComputeMode::NOT_SET;
        }

        Aws::String GetNameForInputCardComputeMode(InputCardComputeMode enumValue)
        {
          switch(enumValue)
          {
          case InputCardComputeMode::NOT_SET:
            return {};
          case InputCardComputeMode::append:
            return "append";
          case InputCardComputeMode::replace:
            return "replace";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputCardComputeModeMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
