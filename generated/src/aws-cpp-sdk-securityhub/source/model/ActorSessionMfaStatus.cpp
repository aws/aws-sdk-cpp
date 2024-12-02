/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ActorSessionMfaStatus.h>
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
      namespace ActorSessionMfaStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ActorSessionMfaStatus GetActorSessionMfaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ActorSessionMfaStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ActorSessionMfaStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActorSessionMfaStatus>(hashCode);
          }

          return ActorSessionMfaStatus::NOT_SET;
        }

        Aws::String GetNameForActorSessionMfaStatus(ActorSessionMfaStatus enumValue)
        {
          switch(enumValue)
          {
          case ActorSessionMfaStatus::NOT_SET:
            return {};
          case ActorSessionMfaStatus::ENABLED:
            return "ENABLED";
          case ActorSessionMfaStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActorSessionMfaStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
