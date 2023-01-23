/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/Mode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ModeMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int high_performance_HASH = HashingUtils::HashString("high-performance");


        Mode GetModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return Mode::standard;
          }
          else if (hashCode == high_performance_HASH)
          {
            return Mode::high_performance;
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
          case Mode::standard:
            return "standard";
          case Mode::high_performance:
            return "high-performance";
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
  } // namespace Redshift
} // namespace Aws
