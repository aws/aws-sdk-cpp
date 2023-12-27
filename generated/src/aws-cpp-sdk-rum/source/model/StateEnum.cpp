/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/StateEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchRUM
  {
    namespace Model
    {
      namespace StateEnumMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        StateEnum GetStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return StateEnum::CREATED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return StateEnum::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return StateEnum::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StateEnum>(hashCode);
          }

          return StateEnum::NOT_SET;
        }

        Aws::String GetNameForStateEnum(StateEnum enumValue)
        {
          switch(enumValue)
          {
          case StateEnum::NOT_SET:
            return {};
          case StateEnum::CREATED:
            return "CREATED";
          case StateEnum::DELETING:
            return "DELETING";
          case StateEnum::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateEnumMapper
    } // namespace Model
  } // namespace CloudWatchRUM
} // namespace Aws
