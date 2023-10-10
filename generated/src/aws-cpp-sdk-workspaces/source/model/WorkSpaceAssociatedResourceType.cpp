/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkSpaceAssociatedResourceType.h>
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
      namespace WorkSpaceAssociatedResourceTypeMapper
      {

        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");


        WorkSpaceAssociatedResourceType GetWorkSpaceAssociatedResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICATION_HASH)
          {
            return WorkSpaceAssociatedResourceType::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkSpaceAssociatedResourceType>(hashCode);
          }

          return WorkSpaceAssociatedResourceType::NOT_SET;
        }

        Aws::String GetNameForWorkSpaceAssociatedResourceType(WorkSpaceAssociatedResourceType enumValue)
        {
          switch(enumValue)
          {
          case WorkSpaceAssociatedResourceType::NOT_SET:
            return {};
          case WorkSpaceAssociatedResourceType::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkSpaceAssociatedResourceTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
