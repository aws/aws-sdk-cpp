/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MsSmoothFragmentLengthControl.h>
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
      namespace MsSmoothFragmentLengthControlMapper
      {

        static const int EXACT_HASH = HashingUtils::HashString("EXACT");
        static const int GOP_MULTIPLE_HASH = HashingUtils::HashString("GOP_MULTIPLE");


        MsSmoothFragmentLengthControl GetMsSmoothFragmentLengthControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXACT_HASH)
          {
            return MsSmoothFragmentLengthControl::EXACT;
          }
          else if (hashCode == GOP_MULTIPLE_HASH)
          {
            return MsSmoothFragmentLengthControl::GOP_MULTIPLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MsSmoothFragmentLengthControl>(hashCode);
          }

          return MsSmoothFragmentLengthControl::NOT_SET;
        }

        Aws::String GetNameForMsSmoothFragmentLengthControl(MsSmoothFragmentLengthControl enumValue)
        {
          switch(enumValue)
          {
          case MsSmoothFragmentLengthControl::NOT_SET:
            return {};
          case MsSmoothFragmentLengthControl::EXACT:
            return "EXACT";
          case MsSmoothFragmentLengthControl::GOP_MULTIPLE:
            return "GOP_MULTIPLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MsSmoothFragmentLengthControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
