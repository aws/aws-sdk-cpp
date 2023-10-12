/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/TargetState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace TargetStateMapper
      {

        static constexpr uint32_t REGISTERING_HASH = ConstExprHashingUtils::HashString("REGISTERING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("UNAVAILABLE");


        TargetState GetTargetStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTERING_HASH)
          {
            return TargetState::REGISTERING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return TargetState::AVAILABLE;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return TargetState::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetState>(hashCode);
          }

          return TargetState::NOT_SET;
        }

        Aws::String GetNameForTargetState(TargetState enumValue)
        {
          switch(enumValue)
          {
          case TargetState::NOT_SET:
            return {};
          case TargetState::REGISTERING:
            return "REGISTERING";
          case TargetState::AVAILABLE:
            return "AVAILABLE";
          case TargetState::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetStateMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
