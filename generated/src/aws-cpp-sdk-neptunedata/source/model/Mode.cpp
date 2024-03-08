/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/Mode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace neptunedata
  {
    namespace Model
    {
      namespace ModeMapper
      {

        static const int RESUME_HASH = HashingUtils::HashString("RESUME");
        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        Mode GetModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESUME_HASH)
          {
            return Mode::RESUME;
          }
          else if (hashCode == NEW__HASH)
          {
            return Mode::NEW_;
          }
          else if (hashCode == AUTO_HASH)
          {
            return Mode::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mode>(hashCode);
          }

          return Mode::NOT_SET;
        }

        Aws::String GetNameForMode(Mode enumValue)
        {
          switch(enumValue)
          {
          case Mode::NOT_SET:
            return {};
          case Mode::RESUME:
            return "RESUME";
          case Mode::NEW_:
            return "NEW";
          case Mode::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModeMapper
    } // namespace Model
  } // namespace neptunedata
} // namespace Aws
