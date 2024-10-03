/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IncludeFolderMembers.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace IncludeFolderMembersMapper
      {

        static const int RECURSE_HASH = HashingUtils::HashString("RECURSE");
        static const int ONE_LEVEL_HASH = HashingUtils::HashString("ONE_LEVEL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        IncludeFolderMembers GetIncludeFolderMembersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECURSE_HASH)
          {
            return IncludeFolderMembers::RECURSE;
          }
          else if (hashCode == ONE_LEVEL_HASH)
          {
            return IncludeFolderMembers::ONE_LEVEL;
          }
          else if (hashCode == NONE_HASH)
          {
            return IncludeFolderMembers::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeFolderMembers>(hashCode);
          }

          return IncludeFolderMembers::NOT_SET;
        }

        Aws::String GetNameForIncludeFolderMembers(IncludeFolderMembers enumValue)
        {
          switch(enumValue)
          {
          case IncludeFolderMembers::NOT_SET:
            return {};
          case IncludeFolderMembers::RECURSE:
            return "RECURSE";
          case IncludeFolderMembers::ONE_LEVEL:
            return "ONE_LEVEL";
          case IncludeFolderMembers::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludeFolderMembersMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
