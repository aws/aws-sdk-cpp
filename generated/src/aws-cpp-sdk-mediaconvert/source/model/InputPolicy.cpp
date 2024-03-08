/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputPolicy.h>
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
      namespace InputPolicyMapper
      {

        static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");
        static const int DISALLOWED_HASH = HashingUtils::HashString("DISALLOWED");


        InputPolicy GetInputPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOWED_HASH)
          {
            return InputPolicy::ALLOWED;
          }
          else if (hashCode == DISALLOWED_HASH)
          {
            return InputPolicy::DISALLOWED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputPolicy>(hashCode);
          }

          return InputPolicy::NOT_SET;
        }

        Aws::String GetNameForInputPolicy(InputPolicy enumValue)
        {
          switch(enumValue)
          {
          case InputPolicy::NOT_SET:
            return {};
          case InputPolicy::ALLOWED:
            return "ALLOWED";
          case InputPolicy::DISALLOWED:
            return "DISALLOWED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputPolicyMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
