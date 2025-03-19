/**
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
    AWS_RESILIENCEHUB_API ResourceMapping() = default;
    AWS_RESILIENCEHUB_API ResourceMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ResourceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the application this resource is mapped to when the
     * <code>mappingType</code> is <code>AppRegistryApp</code>.</p>
     */
    inline const Aws::String& GetAppRegistryAppName() const { return m_appRegistryAppName; }
    inline bool AppRegistryAppNameHasBeenSet() const { return m_appRegistryAppNameHasBeenSet; }
    template<typename AppRegistryAppNameT = Aws::String>
    void SetAppRegistryAppName(AppRegistryAppNameT&& value) { m_appRegistryAppNameHasBeenSet = true; m_appRegistryAppName = std::forward<AppRegistryAppNameT>(value); }
    template<typename AppRegistryAppNameT = Aws::String>
    ResourceMapping& WithAppRegistryAppName(AppRegistryAppNameT&& value) { SetAppRegistryAppName(std::forward<AppRegistryAppNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Amazon Elastic Kubernetes Service cluster and namespace that this
     * resource is mapped to when the <code>mappingType</code> is <code>EKS</code>.</p>
     *  <p>This parameter accepts values in "eks-cluster/namespace" format.</p>
     * 
     */
    inline const Aws::String& GetEksSourceName() const { return m_eksSourceName; }
    inline bool EksSourceNameHasBeenSet() const { return m_eksSourceNameHasBeenSet; }
    template<typename EksSourceNameT = Aws::String>
    void SetEksSourceName(EksSourceNameT&& value) { m_eksSourceNameHasBeenSet = true; m_eksSourceName = std::forward<EksSourceNameT>(value); }
    template<typename EksSourceNameT = Aws::String>
    ResourceMapping& WithEksSourceName(EksSourceNameT&& value) { SetEksSourceName(std::forward<EksSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the CloudFormation stack this resource is mapped to when the
     * <code>mappingType</code> is <code>CfnStack</code>.</p>
     */
    inline const Aws::String& GetLogicalStackName() const { return m_logicalStackName; }
    inline bool LogicalStackNameHasBeenSet() const { return m_logicalStackNameHasBeenSet; }
    template<typename LogicalStackNameT = Aws::String>
    void SetLogicalStackName(LogicalStackNameT&& value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName = std::forward<LogicalStackNameT>(value); }
    template<typename LogicalStackNameT = Aws::String>
    ResourceMapping& WithLogicalStackName(LogicalStackNameT&& value) { SetLogicalStackName(std::forward<LogicalStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of resource mapping.</p>
     */
    inline ResourceMappingType GetMappingType() const { return m_mappingType; }
    inline bool MappingTypeHasBeenSet() const { return m_mappingTypeHasBeenSet; }
    inline void SetMappingType(ResourceMappingType value) { m_mappingTypeHasBeenSet = true; m_mappingType = value; }
    inline ResourceMapping& WithMappingType(ResourceMappingType value) { SetMappingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the physical resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = PhysicalResourceId>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = PhysicalResourceId>
    ResourceMapping& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Resource Groups that this resource is mapped to when the
     * <code>mappingType</code> is <code>ResourceGroup</code>.</p>
     */
    inline const Aws::String& GetResourceGroupName() const { return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    template<typename ResourceGroupNameT = Aws::String>
    void SetResourceGroupName(ResourceGroupNameT&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::forward<ResourceGroupNameT>(value); }
    template<typename ResourceGroupNameT = Aws::String>
    ResourceMapping& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the resource that this resource is mapped to when the
     * <code>mappingType</code> is <code>Resource</code>.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    ResourceMapping& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Terraform source that this resource is mapped to when the
     * <code>mappingType</code> is <code>Terraform</code>.</p>
     */
    inline const Aws::String& GetTerraformSourceName() const { return m_terraformSourceName; }
    inline bool TerraformSourceNameHasBeenSet() const { return m_terraformSourceNameHasBeenSet; }
    template<typename TerraformSourceNameT = Aws::String>
    void SetTerraformSourceName(TerraformSourceNameT&& value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName = std::forward<TerraformSourceNameT>(value); }
    template<typename TerraformSourceNameT = Aws::String>
    ResourceMapping& WithTerraformSourceName(TerraformSourceNameT&& value) { SetTerraformSourceName(std::forward<TerraformSourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appRegistryAppName;
    bool m_appRegistryAppNameHasBeenSet = false;

    Aws::String m_eksSourceName;
    bool m_eksSourceNameHasBeenSet = false;

    Aws::String m_logicalStackName;
    bool m_logicalStackNameHasBeenSet = false;

    ResourceMappingType m_mappingType{ResourceMappingType::NOT_SET};
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
