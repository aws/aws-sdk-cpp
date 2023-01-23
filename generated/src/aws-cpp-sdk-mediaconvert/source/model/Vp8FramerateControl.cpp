/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vp8FramerateControl.h>
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
      namespace Vp8FramerateControlMapper
      {

        static const int INITIALIZE_FROM_SOURCE_HASH = HashingUtils::HashString("INITIALIZE_FROM_SOURCE");
        static const int SPECIFIED_HASH = HashingUtils::HashString("SPECIFIED");


        Vp8FramerateControl GetVp8FramerateControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZE_FROM_SOURCE_HASH)
          {
            return Vp8FramerateControl::INITIALIZE_FROM_SOURCE;
          }
          else if (hashCode == SPECIFIED_HASH)
          {
            return Vp8FramerateControl::SPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vp8FramerateControl>(hashCode);
          }

          return Vp8FramerateControl::NOT_SET;
        }

        Aws::String GetNameForVp8FramerateControl(Vp8FramerateControl enumValue)
        {
          switch(enumValue)
          {
          case Vp8FramerateControl::INITIALIZE_FROM_SOURCE:
            return "INITIALIZE_FROM_SOURCE";
          case Vp8FramerateControl::SPECIFIED:
            return "SPECIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Vp8FramerateControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
