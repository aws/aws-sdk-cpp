/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/EnvironmentAccountConnectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace EnvironmentAccountConnectionStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t CONNECTED_HASH = ConstExprHashingUtils::HashString("CONNECTED");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");


        EnvironmentAccountConnectionStatus GetEnvironmentAccountConnectionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return EnvironmentAccountConnectionStatus::PENDING;
          }
          else if (hashCode == CONNECTED_HASH)
          {
            return EnvironmentAccountConnectionStatus::CONNECTED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return EnvironmentAccountConnectionStatus::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentAccountConnectionStatus>(hashCode);
          }

          return EnvironmentAccountConnectionStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentAccountConnectionStatus(EnvironmentAccountConnectionStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentAccountConnectionStatus::NOT_SET:
            return {};
          case EnvironmentAccountConnectionStatus::PENDING:
            return "PENDING";
          case EnvironmentAccountConnectionStatus::CONNECTED:
            return "CONNECTED";
          case EnvironmentAccountConnectionStatus::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentAccountConnectionStatusMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
