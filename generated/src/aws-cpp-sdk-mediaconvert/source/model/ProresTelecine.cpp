/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProresTelecine.h>
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
      namespace ProresTelecineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HARD_HASH = HashingUtils::HashString("HARD");


        ProresTelecine GetProresTelecineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ProresTelecine::NONE;
          }
          else if (hashCode == HARD_HASH)
          {
            return ProresTelecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProresTelecine>(hashCode);
          }

          return ProresTelecine::NOT_SET;
        }

        Aws::String GetNameForProresTelecine(ProresTelecine enumValue)
        {
          switch(enumValue)
          {
          case ProresTelecine::NONE:
            return "NONE";
          case ProresTelecine::HARD:
            return "HARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProresTelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
