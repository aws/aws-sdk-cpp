/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LaunchDisposition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace LaunchDispositionMapper
      {

        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");


        LaunchDisposition GetLaunchDispositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return LaunchDisposition::STOPPED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return LaunchDisposition::STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchDisposition>(hashCode);
          }

          return LaunchDisposition::NOT_SET;
        }

        Aws::String GetNameForLaunchDisposition(LaunchDisposition enumValue)
        {
          switch(enumValue)
          {
          case LaunchDisposition::NOT_SET:
            return {};
          case LaunchDisposition::STOPPED:
            return "STOPPED";
          case LaunchDisposition::STARTED:
            return "STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchDispositionMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
