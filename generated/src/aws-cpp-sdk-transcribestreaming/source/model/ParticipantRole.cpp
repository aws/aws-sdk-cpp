/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ParticipantRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeStreamingService
  {
    namespace Model
    {
      namespace ParticipantRoleMapper
      {

        static const int AGENT_HASH = HashingUtils::HashString("AGENT");
        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");


        ParticipantRole GetParticipantRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_HASH)
          {
            return ParticipantRole::AGENT;
          }
          else if (hashCode == CUSTOMER_HASH)
          {
            return ParticipantRole::CUSTOMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantRole>(hashCode);
          }

          return ParticipantRole::NOT_SET;
        }

        Aws::String GetNameForParticipantRole(ParticipantRole enumValue)
        {
          switch(enumValue)
          {
          case ParticipantRole::AGENT:
            return "AGENT";
          case ParticipantRole::CUSTOMER:
            return "CUSTOMER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantRoleMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
