/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModificationStateEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ModificationStateEnumMapper
      {

        static const int UPDATE_INITIATED_HASH = HashingUtils::HashString("UPDATE_INITIATED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");


        ModificationStateEnum GetModificationStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_INITIATED_HASH)
          {
            return ModificationStateEnum::UPDATE_INITIATED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ModificationStateEnum::UPDATE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModificationStateEnum>(hashCode);
          }

          return ModificationStateEnum::NOT_SET;
        }

        Aws::String GetNameForModificationStateEnum(ModificationStateEnum enumValue)
        {
          switch(enumValue)
          {
          case ModificationStateEnum::UPDATE_INITIATED:
            return "UPDATE_INITIATED";
          case ModificationStateEnum::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModificationStateEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
