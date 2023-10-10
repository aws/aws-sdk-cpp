/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ApplicationAssociatedResourceType.h>
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
      namespace ApplicationAssociatedResourceTypeMapper
      {

        static const int WORKSPACE_HASH = HashingUtils::HashString("WORKSPACE");
        static const int BUNDLE_HASH = HashingUtils::HashString("BUNDLE");
        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");


        ApplicationAssociatedResourceType GetApplicationAssociatedResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORKSPACE_HASH)
          {
            return ApplicationAssociatedResourceType::WORKSPACE;
          }
          else if (hashCode == BUNDLE_HASH)
          {
            return ApplicationAssociatedResourceType::BUNDLE;
          }
          else if (hashCode == IMAGE_HASH)
          {
            return ApplicationAssociatedResourceType::IMAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationAssociatedResourceType>(hashCode);
          }

          return ApplicationAssociatedResourceType::NOT_SET;
        }

        Aws::String GetNameForApplicationAssociatedResourceType(ApplicationAssociatedResourceType enumValue)
        {
          switch(enumValue)
          {
          case ApplicationAssociatedResourceType::NOT_SET:
            return {};
          case ApplicationAssociatedResourceType::WORKSPACE:
            return "WORKSPACE";
          case ApplicationAssociatedResourceType::BUNDLE:
            return "BUNDLE";
          case ApplicationAssociatedResourceType::IMAGE:
            return "IMAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationAssociatedResourceTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
