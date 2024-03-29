﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3DcFilter.h>
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
      namespace Eac3DcFilterMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        Eac3DcFilter GetEac3DcFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return Eac3DcFilter::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Eac3DcFilter::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3DcFilter>(hashCode);
          }

          return Eac3DcFilter::NOT_SET;
        }

        Aws::String GetNameForEac3DcFilter(Eac3DcFilter enumValue)
        {
          switch(enumValue)
          {
          case Eac3DcFilter::NOT_SET:
            return {};
          case Eac3DcFilter::ENABLED:
            return "ENABLED";
          case Eac3DcFilter::DISABLED:
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

      } // namespace Eac3DcFilterMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
