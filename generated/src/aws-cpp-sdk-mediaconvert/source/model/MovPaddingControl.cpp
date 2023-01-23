/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MovPaddingControl.h>
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
      namespace MovPaddingControlMapper
      {

        static const int OMNEON_HASH = HashingUtils::HashString("OMNEON");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        MovPaddingControl GetMovPaddingControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OMNEON_HASH)
          {
            return MovPaddingControl::OMNEON;
          }
          else if (hashCode == NONE_HASH)
          {
            return MovPaddingControl::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MovPaddingControl>(hashCode);
          }

          return MovPaddingControl::NOT_SET;
        }

        Aws::String GetNameForMovPaddingControl(MovPaddingControl enumValue)
        {
          switch(enumValue)
          {
          case MovPaddingControl::OMNEON:
            return "OMNEON";
          case MovPaddingControl::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MovPaddingControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
