﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ResourceMappingType.h>
#include <aws/resiliencehub/model/PhysicalResourceId.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a resource mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResourceMapping">AWS
   * API Reference</a></p>
   */
  class ResourceMapping
  {
  public:
    AWS_RESILIENCEHUB_API ResourceMapping();
    AWS_RESILIENCEHUB_API ResourceMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ResourceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the application this resource is mapped to when the
     * <code>mappingType</code> is <code>AppRegistryApp</code>.</p>
     */
    inline const Aws::String& GetAppRegistryAppName() const{ return m_appRegistryAppName; }
    inline bool AppRegistryAppNameHasBeenSet() const { return m_appRegistryAppNameHasBeenSet; }
    inline void SetAppRegistryAppName(const Aws::String& value) { m_appRegistryAppNameHasBeenSet = true; m_appRegistryAppName = value; }
    inline void SetAppRegistryAppName(Aws::String&& value) { m_appRegistryAppNameHasBeenSet = true; m_appRegistryAppName = std::move(value); }
    inline void SetAppRegistryAppName(const char* value) { m_appRegistryAppNameHasBeenSet = true; m_appRegistryAppName.assign(value); }
    inline ResourceMapping& WithAppRegistryAppName(const Aws::String& value) { SetAppRegistryAppName(value); return *this;}
    inline ResourceMapping& WithAppRegistryAppName(Aws::String&& value) { SetAppRegistryAppName(std::move(value)); return *this;}
    inline ResourceMapping& WithAppRegistryAppName(const char* value) { SetAppRegistryAppName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Amazon Elastic Kubernetes Service cluster and namespace that this
     * resource is mapped to when the <code>mappingType</code> is <code>EKS</code>.</p>
     *  <p>This parameter accepts values in "eks-cluster/namespace" format.</p>
     * 
     */
    inline const Aws::String& GetEksSourceName() const{ return m_eksSourceName; }
    inline bool EksSourceNameHasBeenSet() const { return m_eksSourceNameHasBeenSet; }
    inline void SetEksSourceName(const Aws::String& value) { m_eksSourceNameHasBeenSet = true; m_eksSourceName = value; }
    inline void SetEksSourceName(Aws::String&& value) { m_eksSourceNameHasBeenSet = true; m_eksSourceName = std::move(value); }
    inline void SetEksSourceName(const char* value) { m_eksSourceNameHasBeenSet = true; m_eksSourceName.assign(value); }
    inline ResourceMapping& WithEksSourceName(const Aws::String& value) { SetEksSourceName(value); return *this;}
    inline ResourceMapping& WithEksSourceName(Aws::String&& value) { SetEksSourceName(std::move(value)); return *this;}
    inline ResourceMapping& WithEksSourceName(const char* value) { SetEksSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the CloudFormation stack this resource is mapped to when the
     * <code>mappingType</code> is <code>CfnStack</code>.</p>
     */
    inline const Aws::String& GetLogicalStackName() const{ return m_logicalStackName; }
    inline bool LogicalStackNameHasBeenSet() const { return m_logicalStackNameHasBeenSet; }
    inline void SetLogicalStackName(const Aws::String& value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName = value; }
    inline void SetLogicalStackName(Aws::String&& value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName = std::move(value); }
    inline void SetLogicalStackName(const char* value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName.assign(value); }
    inline ResourceMapping& WithLogicalStackName(const Aws::String& value) { SetLogicalStackName(value); return *this;}
    inline ResourceMapping& WithLogicalStackName(Aws::String&& value) { SetLogicalStackName(std::move(value)); return *this;}
    inline ResourceMapping& WithLogicalStackName(const char* value) { SetLogicalStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of resource mapping.</p>
     */
    inline const ResourceMappingType& GetMappingType() const{ return m_mappingType; }
    inline bool MappingTypeHasBeenSet() const { return m_mappingTypeHasBeenSet; }
    inline void SetMappingType(const ResourceMappingType& value) { m_mappingTypeHasBeenSet = true; m_mappingType = value; }
    inline void SetMappingType(ResourceMappingType&& value) { m_mappingTypeHasBeenSet = true; m_mappingType = std::move(value); }
    inline ResourceMapping& WithMappingType(const ResourceMappingType& value) { SetMappingType(value); return *this;}
    inline ResourceMapping& WithMappingType(ResourceMappingType&& value) { SetMappingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the physical resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const{ return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    inline void SetPhysicalResourceId(const PhysicalResourceId& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }
    inline void SetPhysicalResourceId(PhysicalResourceId&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }
    inline ResourceMapping& WithPhysicalResourceId(const PhysicalResourceId& value) { SetPhysicalResourceId(value); return *this;}
    inline ResourceMapping& WithPhysicalResourceId(PhysicalResourceId&& value) { SetPhysicalResourceId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Resource Groups that this resource is mapped to when the
     * <code>mappingType</code> is <code>ResourceGroup</code>.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }
    inline ResourceMapping& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline ResourceMapping& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline ResourceMapping& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the resource that this resource is mapped to when the
     * <code>mappingType</code> is <code>Resource</code>.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline ResourceMapping& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline ResourceMapping& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline ResourceMapping& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Terraform source that this resource is mapped to when the
     * <code>mappingType</code> is <code>Terraform</code>.</p>
     */
    inline const Aws::String& GetTerraformSourceName() const{ return m_terraformSourceName; }
    inline bool TerraformSourceNameHasBeenSet() const { return m_terraformSourceNameHasBeenSet; }
    inline void SetTerraformSourceName(const Aws::String& value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName = value; }
    inline void SetTerraformSourceName(Aws::String&& value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName = std::move(value); }
    inline void SetTerraformSourceName(const char* value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName.assign(value); }
    inline ResourceMapping& WithTerraformSourceName(const Aws::String& value) { SetTerraformSourceName(value); return *this;}
    inline ResourceMapping& WithTerraformSourceName(Aws::String&& value) { SetTerraformSourceName(std::move(value)); return *this;}
    inline ResourceMapping& WithTerraformSourceName(const char* value) { SetTerraformSourceName(value); return *this;}
    ///@}
  private:

    Aws::String m_appRegistryAppName;
    bool m_appRegistryAppNameHasBeenSet = false;

    Aws::String m_eksSourceName;
    bool m_eksSourceNameHasBeenSet = false;

    Aws::String m_logicalStackName;
    bool m_logicalStackNameHasBeenSet = false;

    ResourceMappingType m_mappingType;
    bool m_mappingTypeHasBeenSet = false;

    PhysicalResourceId m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_terraformSourceName;
    bool m_terraformSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
