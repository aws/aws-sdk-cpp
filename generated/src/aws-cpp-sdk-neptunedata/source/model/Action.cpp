/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/Action.h>
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
      namespace ActionMapper
      {

        static constexpr uint32_t initiateDatabaseReset_HASH = ConstExprHashingUtils::HashString("initiateDatabaseReset");
        static constexpr uint32_t performDatabaseReset_HASH = ConstExprHashingUtils::HashString("performDatabaseReset");


        Action GetActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == initiateDatabaseReset_HASH)
          {
            return Action::initiateDatabaseReset;
          }
          else if (hashCode == performDatabaseReset_HASH)
          {
            return Action::performDatabaseReset;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Action>(hashCode);
          }

          return Action::NOT_SET;
        }

        Aws::String GetNameForAction(Action enumValue)
        {
          switch(enumValue)
          {
          case Action::NOT_SET:
            return {};
          case Action::initiateDatabaseReset:
            return "initiateDatabaseReset";
          case Action::performDatabaseReset:
            return "performDatabaseReset";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionMapper
    } // namespace Model
  } // namespace neptunedata
} // namespace Aws
