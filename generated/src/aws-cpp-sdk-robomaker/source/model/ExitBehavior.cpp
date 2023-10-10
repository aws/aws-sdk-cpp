/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ExitBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace ExitBehaviorMapper
      {

        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int RESTART_HASH = HashingUtils::HashString("RESTART");


        ExitBehavior GetExitBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAIL_HASH)
          {
            return ExitBehavior::FAIL;
          }
          else if (hashCode == RESTART_HASH)
          {
            return ExitBehavior::RESTART;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExitBehavior>(hashCode);
          }

          return ExitBehavior::NOT_SET;
        }

        Aws::String GetNameForExitBehavior(ExitBehavior enumValue)
        {
          switch(enumValue)
          {
          case ExitBehavior::NOT_SET:
            return {};
          case ExitBehavior::FAIL:
            return "FAIL";
          case ExitBehavior::RESTART:
            return "RESTART";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExitBehaviorMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
