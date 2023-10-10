/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceMappingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ResourceMappingTypeMapper
      {

        static const int CfnStack_HASH = HashingUtils::HashString("CfnStack");
        static const int Resource_HASH = HashingUtils::HashString("Resource");
        static const int AppRegistryApp_HASH = HashingUtils::HashString("AppRegistryApp");
        static const int ResourceGroup_HASH = HashingUtils::HashString("ResourceGroup");
        static const int Terraform_HASH = HashingUtils::HashString("Terraform");
        static const int EKS_HASH = HashingUtils::HashString("EKS");


        ResourceMappingType GetResourceMappingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CfnStack_HASH)
          {
            return ResourceMappingType::CfnStack;
          }
          else if (hashCode == Resource_HASH)
          {
            return ResourceMappingType::Resource;
          }
          else if (hashCode == AppRegistryApp_HASH)
          {
            return ResourceMappingType::AppRegistryApp;
          }
          else if (hashCode == ResourceGroup_HASH)
          {
            return ResourceMappingType::ResourceGroup;
          }
          else if (hashCode == Terraform_HASH)
          {
            return ResourceMappingType::Terraform;
          }
          else if (hashCode == EKS_HASH)
          {
            return ResourceMappingType::EKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceMappingType>(hashCode);
          }

          return ResourceMappingType::NOT_SET;
        }

        Aws::String GetNameForResourceMappingType(ResourceMappingType enumValue)
        {
          switch(enumValue)
          {
          case ResourceMappingType::NOT_SET:
            return {};
          case ResourceMappingType::CfnStack:
            return "CfnStack";
          case ResourceMappingType::Resource:
            return "Resource";
          case ResourceMappingType::AppRegistryApp:
            return "AppRegistryApp";
          case ResourceMappingType::ResourceGroup:
            return "ResourceGroup";
          case ResourceMappingType::Terraform:
            return "Terraform";
          case ResourceMappingType::EKS:
            return "EKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceMappingTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
