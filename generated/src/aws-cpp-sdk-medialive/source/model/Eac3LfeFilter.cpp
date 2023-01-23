/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3LfeFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Eac3LfeFilterMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        Eac3LfeFilter GetEac3LfeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Eac3LfeFilter::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Eac3LfeFilter::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3LfeFilter>(hashCode);
          }

          return Eac3LfeFilter::NOT_SET;
        }

        Aws::String GetNameForEac3LfeFilter(Eac3LfeFilter enumValue)
        {
          switch(enumValue)
          {
          case Eac3LfeFilter::DISABLED:
            return "DISABLED";
          case Eac3LfeFilter::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3LfeFilterMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
