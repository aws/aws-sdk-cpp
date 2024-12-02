/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/Participant.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace ParticipantMapper
      {

        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int AGENT_HASH = HashingUtils::HashString("AGENT");
        static const int BOT_HASH = HashingUtils::HashString("BOT");


        Participant GetParticipantForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_HASH)
          {
            return Participant::CUSTOMER;
          }
          else if (hashCode == AGENT_HASH)
          {
            return Participant::AGENT;
          }
          else if (hashCode == BOT_HASH)
          {
            return Participant::BOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Participant>(hashCode);
          }

          return Participant::NOT_SET;
        }

        Aws::String GetNameForParticipant(Participant enumValue)
        {
          switch(enumValue)
          {
          case Participant::NOT_SET:
            return {};
          case Participant::CUSTOMER:
            return "CUSTOMER";
          case Participant::AGENT:
            return "AGENT";
          case Participant::BOT:
            return "BOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
