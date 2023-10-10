/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/IncludeFillerNalUnits.h>
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
      namespace IncludeFillerNalUnitsMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int DROP_HASH = HashingUtils::HashString("DROP");
        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");


        IncludeFillerNalUnits GetIncludeFillerNalUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return IncludeFillerNalUnits::AUTO;
          }
          else if (hashCode == DROP_HASH)
          {
            return IncludeFillerNalUnits::DROP;
          }
          else if (hashCode == INCLUDE_HASH)
          {
            return IncludeFillerNalUnits::INCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeFillerNalUnits>(hashCode);
          }

          return IncludeFillerNalUnits::NOT_SET;
        }

        Aws::String GetNameForIncludeFillerNalUnits(IncludeFillerNalUnits enumValue)
        {
          switch(enumValue)
          {
          case IncludeFillerNalUnits::NOT_SET:
            return {};
          case IncludeFillerNalUnits::AUTO:
            return "AUTO";
          case IncludeFillerNalUnits::DROP:
            return "DROP";
          case IncludeFillerNalUnits::INCLUDE:
            return "INCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludeFillerNalUnitsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
