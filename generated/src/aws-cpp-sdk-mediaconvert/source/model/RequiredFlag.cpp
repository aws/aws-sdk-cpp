﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/RequiredFlag.h>
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
      namespace RequiredFlagMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        RequiredFlag GetRequiredFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return RequiredFlag::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RequiredFlag::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequiredFlag>(hashCode);
          }

          return RequiredFlag::NOT_SET;
        }

        Aws::String GetNameForRequiredFlag(RequiredFlag enumValue)
        {
          switch(enumValue)
          {
          case RequiredFlag::NOT_SET:
            return {};
          case RequiredFlag::ENABLED:
            return "ENABLED";
          case RequiredFlag::DISABLED:
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

      } // namespace RequiredFlagMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
