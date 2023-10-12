/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PoolFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace PoolFilterNameMapper
      {

        static constexpr uint32_t status_HASH = ConstExprHashingUtils::HashString("status");
        static constexpr uint32_t message_type_HASH = ConstExprHashingUtils::HashString("message-type");
        static constexpr uint32_t two_way_enabled_HASH = ConstExprHashingUtils::HashString("two-way-enabled");
        static constexpr uint32_t self_managed_opt_outs_enabled_HASH = ConstExprHashingUtils::HashString("self-managed-opt-outs-enabled");
        static constexpr uint32_t opt_out_list_name_HASH = ConstExprHashingUtils::HashString("opt-out-list-name");
        static constexpr uint32_t shared_routes_enabled_HASH = ConstExprHashingUtils::HashString("shared-routes-enabled");
        static constexpr uint32_t deletion_protection_enabled_HASH = ConstExprHashingUtils::HashString("deletion-protection-enabled");


        PoolFilterName GetPoolFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == status_HASH)
          {
            return PoolFilterName::status;
          }
          else if (hashCode == message_type_HASH)
          {
            return PoolFilterName::message_type;
          }
          else if (hashCode == two_way_enabled_HASH)
          {
            return PoolFilterName::two_way_enabled;
          }
          else if (hashCode == self_managed_opt_outs_enabled_HASH)
          {
            return PoolFilterName::self_managed_opt_outs_enabled;
          }
          else if (hashCode == opt_out_list_name_HASH)
          {
            return PoolFilterName::opt_out_list_name;
          }
          else if (hashCode == shared_routes_enabled_HASH)
          {
            return PoolFilterName::shared_routes_enabled;
          }
          else if (hashCode == deletion_protection_enabled_HASH)
          {
            return PoolFilterName::deletion_protection_enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PoolFilterName>(hashCode);
          }

          return PoolFilterName::NOT_SET;
        }

        Aws::String GetNameForPoolFilterName(PoolFilterName enumValue)
        {
          switch(enumValue)
          {
          case PoolFilterName::NOT_SET:
            return {};
          case PoolFilterName::status:
            return "status";
          case PoolFilterName::message_type:
            return "message-type";
          case PoolFilterName::two_way_enabled:
            return "two-way-enabled";
          case PoolFilterName::self_managed_opt_outs_enabled:
            return "self-managed-opt-outs-enabled";
          case PoolFilterName::opt_out_list_name:
            return "opt-out-list-name";
          case PoolFilterName::shared_routes_enabled:
            return "shared-routes-enabled";
          case PoolFilterName::deletion_protection_enabled:
            return "deletion-protection-enabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PoolFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
