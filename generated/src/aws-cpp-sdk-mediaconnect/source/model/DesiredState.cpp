/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DesiredState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace DesiredStateMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t STANDBY_HASH = ConstExprHashingUtils::HashString("STANDBY");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        DesiredState GetDesiredStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DesiredState::ACTIVE;
          }
          else if (hashCode == STANDBY_HASH)
          {
            return DesiredState::STANDBY;
          }
          else if (hashCode == DELETED_HASH)
          {
            return DesiredState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DesiredState>(hashCode);
          }

          return DesiredState::NOT_SET;
        }

        Aws::String GetNameForDesiredState(DesiredState enumValue)
        {
          switch(enumValue)
          {
          case DesiredState::NOT_SET:
            return {};
          case DesiredState::ACTIVE:
            return "ACTIVE";
          case DesiredState::STANDBY:
            return "STANDBY";
          case DesiredState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DesiredStateMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
