/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraTelecine.h>
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
      namespace AvcIntraTelecineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HARD_HASH = HashingUtils::HashString("HARD");


        AvcIntraTelecine GetAvcIntraTelecineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AvcIntraTelecine::NONE;
          }
          else if (hashCode == HARD_HASH)
          {
            return AvcIntraTelecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvcIntraTelecine>(hashCode);
          }

          return AvcIntraTelecine::NOT_SET;
        }

        Aws::String GetNameForAvcIntraTelecine(AvcIntraTelecine enumValue)
        {
          switch(enumValue)
          {
          case AvcIntraTelecine::NONE:
            return "NONE";
          case AvcIntraTelecine::HARD:
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

      } // namespace AvcIntraTelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
