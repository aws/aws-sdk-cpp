/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AacSpec.h>
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
      namespace AacSpecMapper
      {

        static const int MPEG2_HASH = HashingUtils::HashString("MPEG2");
        static const int MPEG4_HASH = HashingUtils::HashString("MPEG4");


        AacSpec GetAacSpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MPEG2_HASH)
          {
            return AacSpec::MPEG2;
          }
          else if (hashCode == MPEG4_HASH)
          {
            return AacSpec::MPEG4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacSpec>(hashCode);
          }

          return AacSpec::NOT_SET;
        }

        Aws::String GetNameForAacSpec(AacSpec enumValue)
        {
          switch(enumValue)
          {
          case AacSpec::MPEG2:
            return "MPEG2";
          case AacSpec::MPEG4:
            return "MPEG4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacSpecMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
