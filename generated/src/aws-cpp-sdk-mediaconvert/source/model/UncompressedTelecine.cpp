/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UncompressedTelecine.h>
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
      namespace UncompressedTelecineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HARD_HASH = HashingUtils::HashString("HARD");


        UncompressedTelecine GetUncompressedTelecineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return UncompressedTelecine::NONE;
          }
          else if (hashCode == HARD_HASH)
          {
            return UncompressedTelecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UncompressedTelecine>(hashCode);
          }

          return UncompressedTelecine::NOT_SET;
        }

        Aws::String GetNameForUncompressedTelecine(UncompressedTelecine enumValue)
        {
          switch(enumValue)
          {
          case UncompressedTelecine::NOT_SET:
            return {};
          case UncompressedTelecine::NONE:
            return "NONE";
          case UncompressedTelecine::HARD:
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

      } // namespace UncompressedTelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
