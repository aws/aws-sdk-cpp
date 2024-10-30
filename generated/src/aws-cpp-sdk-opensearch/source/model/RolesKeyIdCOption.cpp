/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/RolesKeyIdCOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace RolesKeyIdCOptionMapper
      {

        static const int GroupName_HASH = HashingUtils::HashString("GroupName");
        static const int GroupId_HASH = HashingUtils::HashString("GroupId");


        RolesKeyIdCOption GetRolesKeyIdCOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GroupName_HASH)
          {
            return RolesKeyIdCOption::GroupName;
          }
          else if (hashCode == GroupId_HASH)
          {
            return RolesKeyIdCOption::GroupId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RolesKeyIdCOption>(hashCode);
          }

          return RolesKeyIdCOption::NOT_SET;
        }

        Aws::String GetNameForRolesKeyIdCOption(RolesKeyIdCOption enumValue)
        {
          switch(enumValue)
          {
          case RolesKeyIdCOption::NOT_SET:
            return {};
          case RolesKeyIdCOption::GroupName:
            return "GroupName";
          case RolesKeyIdCOption::GroupId:
            return "GroupId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RolesKeyIdCOptionMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
