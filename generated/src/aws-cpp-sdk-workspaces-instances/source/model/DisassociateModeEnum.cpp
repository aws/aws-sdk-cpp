/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/DisassociateModeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace DisassociateModeEnumMapper
      {

        static const int FORCE_HASH = HashingUtils::HashString("FORCE");
        static const int NO_FORCE_HASH = HashingUtils::HashString("NO_FORCE");


        DisassociateModeEnum GetDisassociateModeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORCE_HASH)
          {
            return DisassociateModeEnum::FORCE;
          }
          else if (hashCode == NO_FORCE_HASH)
          {
            return DisassociateModeEnum::NO_FORCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DisassociateModeEnum>(hashCode);
          }

          return DisassociateModeEnum::NOT_SET;
        }

        Aws::String GetNameForDisassociateModeEnum(DisassociateModeEnum enumValue)
        {
          switch(enumValue)
          {
          case DisassociateModeEnum::NOT_SET:
            return {};
          case DisassociateModeEnum::FORCE:
            return "FORCE";
          case DisassociateModeEnum::NO_FORCE:
            return "NO_FORCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DisassociateModeEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
