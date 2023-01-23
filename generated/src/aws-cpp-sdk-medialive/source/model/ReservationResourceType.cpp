/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ReservationResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace ReservationResourceTypeMapper
      {

        static const int INPUT_HASH = HashingUtils::HashString("INPUT");
        static const int OUTPUT_HASH = HashingUtils::HashString("OUTPUT");
        static const int MULTIPLEX_HASH = HashingUtils::HashString("MULTIPLEX");
        static const int CHANNEL_HASH = HashingUtils::HashString("CHANNEL");


        ReservationResourceType GetReservationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPUT_HASH)
          {
            return ReservationResourceType::INPUT;
          }
          else if (hashCode == OUTPUT_HASH)
          {
            return ReservationResourceType::OUTPUT;
          }
          else if (hashCode == MULTIPLEX_HASH)
          {
            return ReservationResourceType::MULTIPLEX;
          }
          else if (hashCode == CHANNEL_HASH)
          {
            return ReservationResourceType::CHANNEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationResourceType>(hashCode);
          }

          return ReservationResourceType::NOT_SET;
        }

        Aws::String GetNameForReservationResourceType(ReservationResourceType enumValue)
        {
          switch(enumValue)
          {
          case ReservationResourceType::INPUT:
            return "INPUT";
          case ReservationResourceType::OUTPUT:
            return "OUTPUT";
          case ReservationResourceType::MULTIPLEX:
            return "MULTIPLEX";
          case ReservationResourceType::CHANNEL:
            return "CHANNEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationResourceTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
