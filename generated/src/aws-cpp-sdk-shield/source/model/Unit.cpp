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

        static constexpr uint32_t BITS_HASH = ConstExprHashingUtils::HashString("BITS");
        static constexpr uint32_t BYTES_HASH = ConstExprHashingUtils::HashString("BYTES");
        static constexpr uint32_t PACKETS_HASH = ConstExprHashingUtils::HashString("PACKETS");
        static constexpr uint32_t REQUESTS_HASH = ConstExprHashingUtils::HashString("REQUESTS");


        Unit GetUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Unit::NOT_SET:
            return {};
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
