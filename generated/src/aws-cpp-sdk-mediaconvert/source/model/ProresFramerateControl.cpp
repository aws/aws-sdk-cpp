﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProresFramerateControl.h>
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
      namespace ProresFramerateControlMapper
      {

        static const int INITIALIZE_FROM_SOURCE_HASH = HashingUtils::HashString("INITIALIZE_FROM_SOURCE");
        static const int SPECIFIED_HASH = HashingUtils::HashString("SPECIFIED");


        ProresFramerateControl GetProresFramerateControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZE_FROM_SOURCE_HASH)
          {
            return ProresFramerateControl::INITIALIZE_FROM_SOURCE;
          }
          else if (hashCode == SPECIFIED_HASH)
          {
            return ProresFramerateControl::SPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProresFramerateControl>(hashCode);
          }

          return ProresFramerateControl::NOT_SET;
        }

        Aws::String GetNameForProresFramerateControl(ProresFramerateControl enumValue)
        {
          switch(enumValue)
          {
          case ProresFramerateControl::NOT_SET:
            return {};
          case ProresFramerateControl::INITIALIZE_FROM_SOURCE:
            return "INITIALIZE_FROM_SOURCE";
          case ProresFramerateControl::SPECIFIED:
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

      } // namespace ProresFramerateControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
