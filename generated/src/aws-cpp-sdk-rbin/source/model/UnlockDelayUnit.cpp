/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/UnlockDelayUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RecycleBin
  {
    namespace Model
    {
      namespace UnlockDelayUnitMapper
      {

        static const int DAYS_HASH = HashingUtils::HashString("DAYS");


        UnlockDelayUnit GetUnlockDelayUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_HASH)
          {
            return UnlockDelayUnit::DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnlockDelayUnit>(hashCode);
          }

          return UnlockDelayUnit::NOT_SET;
        }

        Aws::String GetNameForUnlockDelayUnit(UnlockDelayUnit enumValue)
        {
          switch(enumValue)
          {
          case UnlockDelayUnit::DAYS:
            return "DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnlockDelayUnitMapper
    } // namespace Model
  } // namespace RecycleBin
} // namespace Aws
