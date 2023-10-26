/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Av1FilmGrainSynthesis.h>
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
      namespace Av1FilmGrainSynthesisMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        Av1FilmGrainSynthesis GetAv1FilmGrainSynthesisForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Av1FilmGrainSynthesis::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Av1FilmGrainSynthesis::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1FilmGrainSynthesis>(hashCode);
          }

          return Av1FilmGrainSynthesis::NOT_SET;
        }

        Aws::String GetNameForAv1FilmGrainSynthesis(Av1FilmGrainSynthesis enumValue)
        {
          switch(enumValue)
          {
          case Av1FilmGrainSynthesis::NOT_SET:
            return {};
          case Av1FilmGrainSynthesis::DISABLED:
            return "DISABLED";
          case Av1FilmGrainSynthesis::ENABLED:
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

      } // namespace Av1FilmGrainSynthesisMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
