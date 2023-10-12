/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/InstanceState.h>
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
      namespace InstanceStateMapper
      {

        static constexpr uint32_t REGISTERING_HASH = ConstExprHashingUtils::HashString("REGISTERING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DEREGISTERING_HASH = ConstExprHashingUtils::HashString("DEREGISTERING");
        static constexpr uint32_t DEREGISTERED_HASH = ConstExprHashingUtils::HashString("DEREGISTERED");
        static constexpr uint32_t REGISTRATION_ERROR_HASH = ConstExprHashingUtils::HashString("REGISTRATION_ERROR");
        static constexpr uint32_t DEREGISTRATION_ERROR_HASH = ConstExprHashingUtils::HashString("DEREGISTRATION_ERROR");


        InstanceState GetInstanceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTERING_HASH)
          {
            return InstanceState::REGISTERING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return InstanceState::ACTIVE;
          }
          else if (hashCode == DEREGISTERING_HASH)
          {
            return InstanceState::DEREGISTERING;
          }
          else if (hashCode == DEREGISTERED_HASH)
          {
            return InstanceState::DEREGISTERED;
          }
          else if (hashCode == REGISTRATION_ERROR_HASH)
          {
            return InstanceState::REGISTRATION_ERROR;
          }
          else if (hashCode == DEREGISTRATION_ERROR_HASH)
          {
            return InstanceState::DEREGISTRATION_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceState>(hashCode);
          }

          return InstanceState::NOT_SET;
        }

        Aws::String GetNameForInstanceState(InstanceState enumValue)
        {
          switch(enumValue)
          {
          case InstanceState::NOT_SET:
            return {};
          case InstanceState::REGISTERING:
            return "REGISTERING";
          case InstanceState::ACTIVE:
            return "ACTIVE";
          case InstanceState::DEREGISTERING:
            return "DEREGISTERING";
          case InstanceState::DEREGISTERED:
            return "DEREGISTERED";
          case InstanceState::REGISTRATION_ERROR:
            return "REGISTRATION_ERROR";
          case InstanceState::DEREGISTRATION_ERROR:
            return "DEREGISTRATION_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStateMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
