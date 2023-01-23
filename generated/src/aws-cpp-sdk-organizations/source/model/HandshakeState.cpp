/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/HandshakeState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace HandshakeStateMapper
      {

        static const int REQUESTED_HASH = HashingUtils::HashString("REQUESTED");
        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
        static const int DECLINED_HASH = HashingUtils::HashString("DECLINED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        HandshakeState GetHandshakeStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUESTED_HASH)
          {
            return HandshakeState::REQUESTED;
          }
          else if (hashCode == OPEN_HASH)
          {
            return HandshakeState::OPEN;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return HandshakeState::CANCELED;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return HandshakeState::ACCEPTED;
          }
          else if (hashCode == DECLINED_HASH)
          {
            return HandshakeState::DECLINED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return HandshakeState::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HandshakeState>(hashCode);
          }

          return HandshakeState::NOT_SET;
        }

        Aws::String GetNameForHandshakeState(HandshakeState enumValue)
        {
          switch(enumValue)
          {
          case HandshakeState::REQUESTED:
            return "REQUESTED";
          case HandshakeState::OPEN:
            return "OPEN";
          case HandshakeState::CANCELED:
            return "CANCELED";
          case HandshakeState::ACCEPTED:
            return "ACCEPTED";
          case HandshakeState::DECLINED:
            return "DECLINED";
          case HandshakeState::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HandshakeStateMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
