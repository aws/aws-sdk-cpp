/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/HostRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace HostRoleMapper
      {

        static constexpr uint32_t LEADER_HASH = ConstExprHashingUtils::HashString("LEADER");
        static constexpr uint32_t WORKER_HASH = ConstExprHashingUtils::HashString("WORKER");
        static constexpr uint32_t STANDBY_HASH = ConstExprHashingUtils::HashString("STANDBY");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        HostRole GetHostRoleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEADER_HASH)
          {
            return HostRole::LEADER;
          }
          else if (hashCode == WORKER_HASH)
          {
            return HostRole::WORKER;
          }
          else if (hashCode == STANDBY_HASH)
          {
            return HostRole::STANDBY;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return HostRole::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostRole>(hashCode);
          }

          return HostRole::NOT_SET;
        }

        Aws::String GetNameForHostRole(HostRole enumValue)
        {
          switch(enumValue)
          {
          case HostRole::NOT_SET:
            return {};
          case HostRole::LEADER:
            return "LEADER";
          case HostRole::WORKER:
            return "WORKER";
          case HostRole::STANDBY:
            return "STANDBY";
          case HostRole::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HostRoleMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
