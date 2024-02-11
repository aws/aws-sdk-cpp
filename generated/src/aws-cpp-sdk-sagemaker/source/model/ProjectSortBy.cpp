/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProjectSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ProjectSortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        ProjectSortBy GetProjectSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ProjectSortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return ProjectSortBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectSortBy>(hashCode);
          }

          return ProjectSortBy::NOT_SET;
        }

        Aws::String GetNameForProjectSortBy(ProjectSortBy enumValue)
        {
          switch(enumValue)
          {
          case ProjectSortBy::NOT_SET:
            return {};
          case ProjectSortBy::Name:
            return "Name";
          case ProjectSortBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
