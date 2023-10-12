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

        static constexpr uint32_t MPEG2_HASH = ConstExprHashingUtils::HashString("MPEG2");
        static constexpr uint32_t MPEG4_HASH = ConstExprHashingUtils::HashString("MPEG4");


        AacSpec GetAacSpecForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AacSpec::NOT_SET:
            return {};
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
