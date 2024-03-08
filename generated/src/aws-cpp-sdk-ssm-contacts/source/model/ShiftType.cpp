/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ShiftType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMContacts
  {
    namespace Model
    {
      namespace ShiftTypeMapper
      {

        static const int REGULAR_HASH = HashingUtils::HashString("REGULAR");
        static const int OVERRIDDEN_HASH = HashingUtils::HashString("OVERRIDDEN");


        ShiftType GetShiftTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGULAR_HASH)
          {
            return ShiftType::REGULAR;
          }
          else if (hashCode == OVERRIDDEN_HASH)
          {
            return ShiftType::OVERRIDDEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShiftType>(hashCode);
          }

          return ShiftType::NOT_SET;
        }

        Aws::String GetNameForShiftType(ShiftType enumValue)
        {
          switch(enumValue)
          {
          case ShiftType::NOT_SET:
            return {};
          case ShiftType::REGULAR:
            return "REGULAR";
          case ShiftType::OVERRIDDEN:
            return "OVERRIDDEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShiftTypeMapper
    } // namespace Model
  } // namespace SSMContacts
} // namespace Aws
