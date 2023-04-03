/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisioningArtifactType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ProvisioningArtifactTypeMapper
      {

        static const int CLOUD_FORMATION_TEMPLATE_HASH = HashingUtils::HashString("CLOUD_FORMATION_TEMPLATE");
        static const int MARKETPLACE_AMI_HASH = HashingUtils::HashString("MARKETPLACE_AMI");
        static const int MARKETPLACE_CAR_HASH = HashingUtils::HashString("MARKETPLACE_CAR");
        static const int DEFAULT_CUSTOM_HASH = HashingUtils::HashString("DEFAULT_CUSTOM");
        static const int TERRAFORM_OPEN_SOURCE_HASH = HashingUtils::HashString("TERRAFORM_OPEN_SOURCE");


        ProvisioningArtifactType GetProvisioningArtifactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUD_FORMATION_TEMPLATE_HASH)
          {
            return ProvisioningArtifactType::CLOUD_FORMATION_TEMPLATE;
          }
          else if (hashCode == MARKETPLACE_AMI_HASH)
          {
            return ProvisioningArtifactType::MARKETPLACE_AMI;
          }
          else if (hashCode == MARKETPLACE_CAR_HASH)
          {
            return ProvisioningArtifactType::MARKETPLACE_CAR;
          }
          else if (hashCode == DEFAULT_CUSTOM_HASH)
          {
            return ProvisioningArtifactType::DEFAULT_CUSTOM;
          }
          else if (hashCode == TERRAFORM_OPEN_SOURCE_HASH)
          {
            return ProvisioningArtifactType::TERRAFORM_OPEN_SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisioningArtifactType>(hashCode);
          }

          return ProvisioningArtifactType::NOT_SET;
        }

        Aws::String GetNameForProvisioningArtifactType(ProvisioningArtifactType enumValue)
        {
          switch(enumValue)
          {
          case ProvisioningArtifactType::CLOUD_FORMATION_TEMPLATE:
            return "CLOUD_FORMATION_TEMPLATE";
          case ProvisioningArtifactType::MARKETPLACE_AMI:
            return "MARKETPLACE_AMI";
          case ProvisioningArtifactType::MARKETPLACE_CAR:
            return "MARKETPLACE_CAR";
          case ProvisioningArtifactType::DEFAULT_CUSTOM:
            return "DEFAULT_CUSTOM";
          case ProvisioningArtifactType::TERRAFORM_OPEN_SOURCE:
            return "TERRAFORM_OPEN_SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisioningArtifactTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
