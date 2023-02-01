/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vc3Telecine.h>
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
      namespace Vc3TelecineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HARD_HASH = HashingUtils::HashString("HARD");


        Vc3Telecine GetVc3TelecineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Vc3Telecine::NONE;
          }
          else if (hashCode == HARD_HASH)
          {
            return Vc3Telecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vc3Telecine>(hashCode);
          }

          return Vc3Telecine::NOT_SET;
        }

        Aws::String GetNameForVc3Telecine(Vc3Telecine enumValue)
        {
          switch(enumValue)
          {
          case Vc3Telecine::NONE:
            return "NONE";
          case Vc3Telecine::HARD:
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

      } // namespace Vc3TelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
