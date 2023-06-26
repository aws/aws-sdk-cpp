/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/Unit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace UnitMapper
      {

        static const int BITS_HASH = HashingUtils::HashString("BITS");
        static const int BYTES_HASH = HashingUtils::HashString("BYTES");
        static const int PACKETS_HASH = HashingUtils::HashString("PACKETS");
        static const int REQUESTS_HASH = HashingUtils::HashString("REQUESTS");


        Unit GetUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BITS_HASH)
          {
            return Unit::BITS;
          }
          else if (hashCode == BYTES_HASH)
          {
            return Unit::BYTES;
          }
          else if (hashCode == PACKETS_HASH)
          {
            return Unit::PACKETS;
          }
          else if (hashCode == REQUESTS_HASH)
          {
            return Unit::REQUESTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Unit>(hashCode);
          }

          return Unit::NOT_SET;
        }

        Aws::String GetNameForUnit(Unit enumValue)
        {
          switch(enumValue)
          {
          case Unit::BITS:
            return "BITS";
          case Unit::BYTES:
            return "BYTES";
          case Unit::PACKETS:
            return "PACKETS";
          case Unit::REQUESTS:
            return "REQUESTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnitMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws
