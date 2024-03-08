/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/FirstBoot.h>
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
      namespace FirstBootMapper
      {

        static const int WAITING_HASH = HashingUtils::HashString("WAITING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        FirstBoot GetFirstBootForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAITING_HASH)
          {
            return FirstBoot::WAITING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return FirstBoot::SUCCEEDED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return FirstBoot::UNKNOWN;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return FirstBoot::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirstBoot>(hashCode);
          }

          return FirstBoot::NOT_SET;
        }

        Aws::String GetNameForFirstBoot(FirstBoot enumValue)
        {
          switch(enumValue)
          {
          case FirstBoot::NOT_SET:
            return {};
          case FirstBoot::WAITING:
            return "WAITING";
          case FirstBoot::SUCCEEDED:
            return "SUCCEEDED";
          case FirstBoot::UNKNOWN:
            return "UNKNOWN";
          case FirstBoot::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirstBootMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
