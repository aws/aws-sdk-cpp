/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Ac3LfeFilter.h>
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
      namespace Ac3LfeFilterMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        Ac3LfeFilter GetAc3LfeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return Ac3LfeFilter::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Ac3LfeFilter::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ac3LfeFilter>(hashCode);
          }

          return Ac3LfeFilter::NOT_SET;
        }

        Aws::String GetNameForAc3LfeFilter(Ac3LfeFilter enumValue)
        {
          switch(enumValue)
          {
          case Ac3LfeFilter::ENABLED:
            return "ENABLED";
          case Ac3LfeFilter::DISABLED:
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

      } // namespace Ac3LfeFilterMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
