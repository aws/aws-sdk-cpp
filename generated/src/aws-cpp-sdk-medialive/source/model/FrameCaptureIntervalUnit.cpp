/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FrameCaptureIntervalUnit.h>
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
      namespace FrameCaptureIntervalUnitMapper
      {

        static constexpr uint32_t MILLISECONDS_HASH = ConstExprHashingUtils::HashString("MILLISECONDS");
        static constexpr uint32_t SECONDS_HASH = ConstExprHashingUtils::HashString("SECONDS");


        FrameCaptureIntervalUnit GetFrameCaptureIntervalUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MILLISECONDS_HASH)
          {
            return FrameCaptureIntervalUnit::MILLISECONDS;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return FrameCaptureIntervalUnit::SECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FrameCaptureIntervalUnit>(hashCode);
          }

          return FrameCaptureIntervalUnit::NOT_SET;
        }

        Aws::String GetNameForFrameCaptureIntervalUnit(FrameCaptureIntervalUnit enumValue)
        {
          switch(enumValue)
          {
          case FrameCaptureIntervalUnit::NOT_SET:
            return {};
          case FrameCaptureIntervalUnit::MILLISECONDS:
            return "MILLISECONDS";
          case FrameCaptureIntervalUnit::SECONDS:
            return "SECONDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrameCaptureIntervalUnitMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
