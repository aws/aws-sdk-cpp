/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceTypeForTagging.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ResourceTypeForTaggingMapper
      {

        static constexpr uint32_t Document_HASH = ConstExprHashingUtils::HashString("Document");
        static constexpr uint32_t ManagedInstance_HASH = ConstExprHashingUtils::HashString("ManagedInstance");
        static constexpr uint32_t MaintenanceWindow_HASH = ConstExprHashingUtils::HashString("MaintenanceWindow");
        static constexpr uint32_t Parameter_HASH = ConstExprHashingUtils::HashString("Parameter");
        static constexpr uint32_t PatchBaseline_HASH = ConstExprHashingUtils::HashString("PatchBaseline");
        static constexpr uint32_t OpsItem_HASH = ConstExprHashingUtils::HashString("OpsItem");
        static constexpr uint32_t OpsMetadata_HASH = ConstExprHashingUtils::HashString("OpsMetadata");
        static constexpr uint32_t Automation_HASH = ConstExprHashingUtils::HashString("Automation");
        static constexpr uint32_t Association_HASH = ConstExprHashingUtils::HashString("Association");


        ResourceTypeForTagging GetResourceTypeForTaggingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Document_HASH)
          {
            return ResourceTypeForTagging::Document;
          }
          else if (hashCode == ManagedInstance_HASH)
          {
            return ResourceTypeForTagging::ManagedInstance;
          }
          else if (hashCode == MaintenanceWindow_HASH)
          {
            return ResourceTypeForTagging::MaintenanceWindow;
          }
          else if (hashCode == Parameter_HASH)
          {
            return ResourceTypeForTagging::Parameter;
          }
          else if (hashCode == PatchBaseline_HASH)
          {
            return ResourceTypeForTagging::PatchBaseline;
          }
          else if (hashCode == OpsItem_HASH)
          {
            return ResourceTypeForTagging::OpsItem;
          }
          else if (hashCode == OpsMetadata_HASH)
          {
            return ResourceTypeForTagging::OpsMetadata;
          }
          else if (hashCode == Automation_HASH)
          {
            return ResourceTypeForTagging::Automation;
          }
          else if (hashCode == Association_HASH)
          {
            return ResourceTypeForTagging::Association;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTypeForTagging>(hashCode);
          }

          return ResourceTypeForTagging::NOT_SET;
        }

        Aws::String GetNameForResourceTypeForTagging(ResourceTypeForTagging enumValue)
        {
          switch(enumValue)
          {
          case ResourceTypeForTagging::NOT_SET:
            return {};
          case ResourceTypeForTagging::Document:
            return "Document";
          case ResourceTypeForTagging::ManagedInstance:
            return "ManagedInstance";
          case ResourceTypeForTagging::MaintenanceWindow:
            return "MaintenanceWindow";
          case ResourceTypeForTagging::Parameter:
            return "Parameter";
          case ResourceTypeForTagging::PatchBaseline:
            return "PatchBaseline";
          case ResourceTypeForTagging::OpsItem:
            return "OpsItem";
          case ResourceTypeForTagging::OpsMetadata:
            return "OpsMetadata";
          case ResourceTypeForTagging::Automation:
            return "Automation";
          case ResourceTypeForTagging::Association:
            return "Association";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeForTaggingMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
