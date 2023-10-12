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

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");


        StateEnum GetStateEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
