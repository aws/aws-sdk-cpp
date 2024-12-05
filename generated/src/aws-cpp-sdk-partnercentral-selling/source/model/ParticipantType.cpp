/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ParticipantType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace ParticipantTypeMapper
      {

        static const int SENDER_HASH = HashingUtils::HashString("SENDER");
        static const int RECEIVER_HASH = HashingUtils::HashString("RECEIVER");


        ParticipantType GetParticipantTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SENDER_HASH)
          {
            return ParticipantType::SENDER;
          }
          else if (hashCode == RECEIVER_HASH)
          {
            return ParticipantType::RECEIVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantType>(hashCode);
          }

          return ParticipantType::NOT_SET;
        }

        Aws::String GetNameForParticipantType(ParticipantType enumValue)
        {
          switch(enumValue)
          {
          case ParticipantType::NOT_SET:
            return {};
          case ParticipantType::SENDER:
            return "SENDER";
          case ParticipantType::RECEIVER:
            return "RECEIVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantTypeMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
