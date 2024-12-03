/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PluginTypeCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace PluginTypeCategoryMapper
      {

        static const int Customer_relationship_management_CRM_HASH = HashingUtils::HashString("Customer relationship management (CRM)");
        static const int Project_management_HASH = HashingUtils::HashString("Project management");
        static const int Communication_HASH = HashingUtils::HashString("Communication");
        static const int Productivity_HASH = HashingUtils::HashString("Productivity");
        static const int Ticketing_and_incident_management_HASH = HashingUtils::HashString("Ticketing and incident management");


        PluginTypeCategory GetPluginTypeCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Customer_relationship_management_CRM_HASH)
          {
            return PluginTypeCategory::Customer_relationship_management_CRM;
          }
          else if (hashCode == Project_management_HASH)
          {
            return PluginTypeCategory::Project_management;
          }
          else if (hashCode == Communication_HASH)
          {
            return PluginTypeCategory::Communication;
          }
          else if (hashCode == Productivity_HASH)
          {
            return PluginTypeCategory::Productivity;
          }
          else if (hashCode == Ticketing_and_incident_management_HASH)
          {
            return PluginTypeCategory::Ticketing_and_incident_management;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PluginTypeCategory>(hashCode);
          }

          return PluginTypeCategory::NOT_SET;
        }

        Aws::String GetNameForPluginTypeCategory(PluginTypeCategory enumValue)
        {
          switch(enumValue)
          {
          case PluginTypeCategory::NOT_SET:
            return {};
          case PluginTypeCategory::Customer_relationship_management_CRM:
            return "Customer relationship management (CRM)";
          case PluginTypeCategory::Project_management:
            return "Project management";
          case PluginTypeCategory::Communication:
            return "Communication";
          case PluginTypeCategory::Productivity:
            return "Productivity";
          case PluginTypeCategory::Ticketing_and_incident_management:
            return "Ticketing and incident management";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PluginTypeCategoryMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
