/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsControlsUpdatable.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace StandardsControlsUpdatableMapper
      {

        static const int READY_FOR_UPDATES_HASH = HashingUtils::HashString("READY_FOR_UPDATES");
        static const int NOT_READY_FOR_UPDATES_HASH = HashingUtils::HashString("NOT_READY_FOR_UPDATES");


        StandardsControlsUpdatable GetStandardsControlsUpdatableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_FOR_UPDATES_HASH)
          {
            return StandardsControlsUpdatable::READY_FOR_UPDATES;
          }
          else if (hashCode == NOT_READY_FOR_UPDATES_HASH)
          {
            return StandardsControlsUpdatable::NOT_READY_FOR_UPDATES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandardsControlsUpdatable>(hashCode);
          }

          return StandardsControlsUpdatable::NOT_SET;
        }

        Aws::String GetNameForStandardsControlsUpdatable(StandardsControlsUpdatable enumValue)
        {
          switch(enumValue)
          {
          case StandardsControlsUpdatable::NOT_SET:
            return {};
          case StandardsControlsUpdatable::READY_FOR_UPDATES:
            return "READY_FOR_UPDATES";
          case StandardsControlsUpdatable::NOT_READY_FOR_UPDATES:
            return "NOT_READY_FOR_UPDATES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StandardsControlsUpdatableMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
