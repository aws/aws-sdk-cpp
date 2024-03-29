﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vp9FramerateControl.h>
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
      namespace Vp9FramerateControlMapper
      {

        static const int INITIALIZE_FROM_SOURCE_HASH = HashingUtils::HashString("INITIALIZE_FROM_SOURCE");
        static const int SPECIFIED_HASH = HashingUtils::HashString("SPECIFIED");


        Vp9FramerateControl GetVp9FramerateControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZE_FROM_SOURCE_HASH)
          {
            return Vp9FramerateControl::INITIALIZE_FROM_SOURCE;
          }
          else if (hashCode == SPECIFIED_HASH)
          {
            return Vp9FramerateControl::SPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vp9FramerateControl>(hashCode);
          }

          return Vp9FramerateControl::NOT_SET;
        }

        Aws::String GetNameForVp9FramerateControl(Vp9FramerateControl enumValue)
        {
          switch(enumValue)
          {
          case Vp9FramerateControl::NOT_SET:
            return {};
          case Vp9FramerateControl::INITIALIZE_FROM_SOURCE:
            return "INITIALIZE_FROM_SOURCE";
          case Vp9FramerateControl::SPECIFIED:
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

      } // namespace Vp9FramerateControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
