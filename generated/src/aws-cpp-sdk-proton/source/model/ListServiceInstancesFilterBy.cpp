/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListServiceInstancesFilterBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace ListServiceInstancesFilterByMapper
      {

        static const int name_HASH = HashingUtils::HashString("name");
        static const int deploymentStatus_HASH = HashingUtils::HashString("deploymentStatus");
        static const int templateName_HASH = HashingUtils::HashString("templateName");
        static const int serviceName_HASH = HashingUtils::HashString("serviceName");
        static const int deployedTemplateVersionStatus_HASH = HashingUtils::HashString("deployedTemplateVersionStatus");
        static const int environmentName_HASH = HashingUtils::HashString("environmentName");
        static const int lastDeploymentAttemptedAtBefore_HASH = HashingUtils::HashString("lastDeploymentAttemptedAtBefore");
        static const int lastDeploymentAttemptedAtAfter_HASH = HashingUtils::HashString("lastDeploymentAttemptedAtAfter");
        static const int createdAtBefore_HASH = HashingUtils::HashString("createdAtBefore");
        static const int createdAtAfter_HASH = HashingUtils::HashString("createdAtAfter");


        ListServiceInstancesFilterBy GetListServiceInstancesFilterByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == name_HASH)
          {
            return ListServiceInstancesFilterBy::name;
          }
          else if (hashCode == deploymentStatus_HASH)
          {
            return ListServiceInstancesFilterBy::deploymentStatus;
          }
          else if (hashCode == templateName_HASH)
          {
            return ListServiceInstancesFilterBy::templateName;
          }
          else if (hashCode == serviceName_HASH)
          {
            return ListServiceInstancesFilterBy::serviceName;
          }
          else if (hashCode == deployedTemplateVersionStatus_HASH)
          {
            return ListServiceInstancesFilterBy::deployedTemplateVersionStatus;
          }
          else if (hashCode == environmentName_HASH)
          {
            return ListServiceInstancesFilterBy::environmentName;
          }
          else if (hashCode == lastDeploymentAttemptedAtBefore_HASH)
          {
            return ListServiceInstancesFilterBy::lastDeploymentAttemptedAtBefore;
          }
          else if (hashCode == lastDeploymentAttemptedAtAfter_HASH)
          {
            return ListServiceInstancesFilterBy::lastDeploymentAttemptedAtAfter;
          }
          else if (hashCode == createdAtBefore_HASH)
          {
            return ListServiceInstancesFilterBy::createdAtBefore;
          }
          else if (hashCode == createdAtAfter_HASH)
          {
            return ListServiceInstancesFilterBy::createdAtAfter;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListServiceInstancesFilterBy>(hashCode);
          }

          return ListServiceInstancesFilterBy::NOT_SET;
        }

        Aws::String GetNameForListServiceInstancesFilterBy(ListServiceInstancesFilterBy enumValue)
        {
          switch(enumValue)
          {
          case ListServiceInstancesFilterBy::name:
            return "name";
          case ListServiceInstancesFilterBy::deploymentStatus:
            return "deploymentStatus";
          case ListServiceInstancesFilterBy::templateName:
            return "templateName";
          case ListServiceInstancesFilterBy::serviceName:
            return "serviceName";
          case ListServiceInstancesFilterBy::deployedTemplateVersionStatus:
            return "deployedTemplateVersionStatus";
          case ListServiceInstancesFilterBy::environmentName:
            return "environmentName";
          case ListServiceInstancesFilterBy::lastDeploymentAttemptedAtBefore:
            return "lastDeploymentAttemptedAtBefore";
          case ListServiceInstancesFilterBy::lastDeploymentAttemptedAtAfter:
            return "lastDeploymentAttemptedAtAfter";
          case ListServiceInstancesFilterBy::createdAtBefore:
            return "createdAtBefore";
          case ListServiceInstancesFilterBy::createdAtAfter:
            return "createdAtAfter";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListServiceInstancesFilterByMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
