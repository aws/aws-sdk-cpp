/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListEdgeDeploymentPlansSortBy.h>
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
      namespace ListEdgeDeploymentPlansSortByMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int DEVICE_FLEET_NAME_HASH = HashingUtils::HashString("DEVICE_FLEET_NAME");
        static const int CREATION_TIME_HASH = HashingUtils::HashString("CREATION_TIME");
        static const int LAST_MODIFIED_TIME_HASH = HashingUtils::HashString("LAST_MODIFIED_TIME");


        ListEdgeDeploymentPlansSortBy GetListEdgeDeploymentPlansSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return ListEdgeDeploymentPlansSortBy::NAME;
          }
          else if (hashCode == DEVICE_FLEET_NAME_HASH)
          {
            return ListEdgeDeploymentPlansSortBy::DEVICE_FLEET_NAME;
          }
          else if (hashCode == CREATION_TIME_HASH)
          {
            return ListEdgeDeploymentPlansSortBy::CREATION_TIME;
          }
          else if (hashCode == LAST_MODIFIED_TIME_HASH)
          {
            return ListEdgeDeploymentPlansSortBy::LAST_MODIFIED_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListEdgeDeploymentPlansSortBy>(hashCode);
          }

          return ListEdgeDeploymentPlansSortBy::NOT_SET;
        }

        Aws::String GetNameForListEdgeDeploymentPlansSortBy(ListEdgeDeploymentPlansSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListEdgeDeploymentPlansSortBy::NOT_SET:
            return {};
          case ListEdgeDeploymentPlansSortBy::NAME:
            return "NAME";
          case ListEdgeDeploymentPlansSortBy::DEVICE_FLEET_NAME:
            return "DEVICE_FLEET_NAME";
          case ListEdgeDeploymentPlansSortBy::CREATION_TIME:
            return "CREATION_TIME";
          case ListEdgeDeploymentPlansSortBy::LAST_MODIFIED_TIME:
            return "LAST_MODIFIED_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListEdgeDeploymentPlansSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
