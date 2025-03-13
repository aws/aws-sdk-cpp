/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class RemoveDraftAppVersionResourceMappingsRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API RemoveDraftAppVersionResourceMappingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveDraftAppVersionResourceMappings"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    RemoveDraftAppVersionResourceMappingsRequest& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the registered applications you want to remove from the resource
     * mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppRegistryAppNames() const { return m_appRegistryAppNames; }
    inline bool AppRegistryAppNamesHasBeenSet() const { return m_appRegistryAppNamesHasBeenSet; }
    template<typename AppRegistryAppNamesT = Aws::Vector<Aws::String>>
    void SetAppRegistryAppNames(AppRegistryAppNamesT&& value) { m_appRegistryAppNamesHasBeenSet = true; m_appRegistryAppNames = std::forward<AppRegistryAppNamesT>(value); }
    template<typename AppRegistryAppNamesT = Aws::Vector<Aws::String>>
    RemoveDraftAppVersionResourceMappingsRequest& WithAppRegistryAppNames(AppRegistryAppNamesT&& value) { SetAppRegistryAppNames(std::forward<AppRegistryAppNamesT>(value)); return *this;}
    template<typename AppRegistryAppNamesT = Aws::String>
    RemoveDraftAppVersionResourceMappingsRequest& AddAppRegistryAppNames(AppRegistryAppNamesT&& value) { m_appRegistryAppNamesHasBeenSet = true; m_appRegistryAppNames.emplace_back(std::forward<AppRegistryAppNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the Amazon Elastic Kubernetes Service clusters and namespaces
     * you want to remove from the resource mappings.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetEksSourceNames() const { return m_eksSourceNames; }
    inline bool EksSourceNamesHasBeenSet() const { return m_eksSourceNamesHasBeenSet; }
    template<typename EksSourceNamesT = Aws::Vector<Aws::String>>
    void SetEksSourceNames(EksSourceNamesT&& value) { m_eksSourceNamesHasBeenSet = true; m_eksSourceNames = std::forward<EksSourceNamesT>(value); }
    template<typename EksSourceNamesT = Aws::Vector<Aws::String>>
    RemoveDraftAppVersionResourceMappingsRequest& WithEksSourceNames(EksSourceNamesT&& value) { SetEksSourceNames(std::forward<EksSourceNamesT>(value)); return *this;}
    template<typename EksSourceNamesT = Aws::String>
    RemoveDraftAppVersionResourceMappingsRequest& AddEksSourceNames(EksSourceNamesT&& value) { m_eksSourceNamesHasBeenSet = true; m_eksSourceNames.emplace_back(std::forward<EksSourceNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the CloudFormation stacks you want to remove from the resource
     * mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogicalStackNames() const { return m_logicalStackNames; }
    inline bool LogicalStackNamesHasBeenSet() const { return m_logicalStackNamesHasBeenSet; }
    template<typename LogicalStackNamesT = Aws::Vector<Aws::String>>
    void SetLogicalStackNames(LogicalStackNamesT&& value) { m_logicalStackNamesHasBeenSet = true; m_logicalStackNames = std::forward<LogicalStackNamesT>(value); }
    template<typename LogicalStackNamesT = Aws::Vector<Aws::String>>
    RemoveDraftAppVersionResourceMappingsRequest& WithLogicalStackNames(LogicalStackNamesT&& value) { SetLogicalStackNames(std::forward<LogicalStackNamesT>(value)); return *this;}
    template<typename LogicalStackNamesT = Aws::String>
    RemoveDraftAppVersionResourceMappingsRequest& AddLogicalStackNames(LogicalStackNamesT&& value) { m_logicalStackNamesHasBeenSet = true; m_logicalStackNames.emplace_back(std::forward<LogicalStackNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the resource groups you want to remove from the resource
     * mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceGroupNames() const { return m_resourceGroupNames; }
    inline bool ResourceGroupNamesHasBeenSet() const { return m_resourceGroupNamesHasBeenSet; }
    template<typename ResourceGroupNamesT = Aws::Vector<Aws::String>>
    void SetResourceGroupNames(ResourceGroupNamesT&& value) { m_resourceGroupNamesHasBeenSet = true; m_resourceGroupNames = std::forward<ResourceGroupNamesT>(value); }
    template<typename ResourceGroupNamesT = Aws::Vector<Aws::String>>
    RemoveDraftAppVersionResourceMappingsRequest& WithResourceGroupNames(ResourceGroupNamesT&& value) { SetResourceGroupNames(std::forward<ResourceGroupNamesT>(value)); return *this;}
    template<typename ResourceGroupNamesT = Aws::String>
    RemoveDraftAppVersionResourceMappingsRequest& AddResourceGroupNames(ResourceGroupNamesT&& value) { m_resourceGroupNamesHasBeenSet = true; m_resourceGroupNames.emplace_back(std::forward<ResourceGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the resources you want to remove from the resource mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceNames() const { return m_resourceNames; }
    inline bool ResourceNamesHasBeenSet() const { return m_resourceNamesHasBeenSet; }
    template<typename ResourceNamesT = Aws::Vector<Aws::String>>
    void SetResourceNames(ResourceNamesT&& value) { m_resourceNamesHasBeenSet = true; m_resourceNames = std::forward<ResourceNamesT>(value); }
    template<typename ResourceNamesT = Aws::Vector<Aws::String>>
    RemoveDraftAppVersionResourceMappingsRequest& WithResourceNames(ResourceNamesT&& value) { SetResourceNames(std::forward<ResourceNamesT>(value)); return *this;}
    template<typename ResourceNamesT = Aws::String>
    RemoveDraftAppVersionResourceMappingsRequest& AddResourceNames(ResourceNamesT&& value) { m_resourceNamesHasBeenSet = true; m_resourceNames.emplace_back(std::forward<ResourceNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the Terraform sources you want to remove from the resource
     * mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerraformSourceNames() const { return m_terraformSourceNames; }
    inline bool TerraformSourceNamesHasBeenSet() const { return m_terraformSourceNamesHasBeenSet; }
    template<typename TerraformSourceNamesT = Aws::Vector<Aws::String>>
    void SetTerraformSourceNames(TerraformSourceNamesT&& value) { m_terraformSourceNamesHasBeenSet = true; m_terraformSourceNames = std::forward<TerraformSourceNamesT>(value); }
    template<typename TerraformSourceNamesT = Aws::Vector<Aws::String>>
    RemoveDraftAppVersionResourceMappingsRequest& WithTerraformSourceNames(TerraformSourceNamesT&& value) { SetTerraformSourceNames(std::forward<TerraformSourceNamesT>(value)); return *this;}
    template<typename TerraformSourceNamesT = Aws::String>
    RemoveDraftAppVersionResourceMappingsRequest& AddTerraformSourceNames(TerraformSourceNamesT&& value) { m_terraformSourceNamesHasBeenSet = true; m_terraformSourceNames.emplace_back(std::forward<TerraformSourceNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_appRegistryAppNames;
    bool m_appRegistryAppNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_eksSourceNames;
    bool m_eksSourceNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_logicalStackNames;
    bool m_logicalStackNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceGroupNames;
    bool m_resourceGroupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceNames;
    bool m_resourceNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_terraformSourceNames;
    bool m_terraformSourceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
