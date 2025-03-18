/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines a logical resource identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/LogicalResourceId">AWS
   * API Reference</a></p>
   */
  class LogicalResourceId
  {
  public:
    AWS_RESILIENCEHUB_API LogicalResourceId() = default;
    AWS_RESILIENCEHUB_API LogicalResourceId(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API LogicalResourceId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Amazon Elastic Kubernetes Service cluster and namespace this
     * resource belongs to.</p>  <p>This parameter accepts values in
     * "eks-cluster/namespace" format.</p> 
     */
    inline const Aws::String& GetEksSourceName() const { return m_eksSourceName; }
    inline bool EksSourceNameHasBeenSet() const { return m_eksSourceNameHasBeenSet; }
    template<typename EksSourceNameT = Aws::String>
    void SetEksSourceName(EksSourceNameT&& value) { m_eksSourceNameHasBeenSet = true; m_eksSourceName = std::forward<EksSourceNameT>(value); }
    template<typename EksSourceNameT = Aws::String>
    LogicalResourceId& WithEksSourceName(EksSourceNameT&& value) { SetEksSourceName(std::forward<EksSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the resource.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    LogicalResourceId& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline const Aws::String& GetLogicalStackName() const { return m_logicalStackName; }
    inline bool LogicalStackNameHasBeenSet() const { return m_logicalStackNameHasBeenSet; }
    template<typename LogicalStackNameT = Aws::String>
    void SetLogicalStackName(LogicalStackNameT&& value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName = std::forward<LogicalStackNameT>(value); }
    template<typename LogicalStackNameT = Aws::String>
    LogicalResourceId& WithLogicalStackName(LogicalStackNameT&& value) { SetLogicalStackName(std::forward<LogicalStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline const Aws::String& GetResourceGroupName() const { return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    template<typename ResourceGroupNameT = Aws::String>
    void SetResourceGroupName(ResourceGroupNameT&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::forward<ResourceGroupNameT>(value); }
    template<typename ResourceGroupNameT = Aws::String>
    LogicalResourceId& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline const Aws::String& GetTerraformSourceName() const { return m_terraformSourceName; }
    inline bool TerraformSourceNameHasBeenSet() const { return m_terraformSourceNameHasBeenSet; }
    template<typename TerraformSourceNameT = Aws::String>
    void SetTerraformSourceName(TerraformSourceNameT&& value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName = std::forward<TerraformSourceNameT>(value); }
    template<typename TerraformSourceNameT = Aws::String>
    LogicalResourceId& WithTerraformSourceName(TerraformSourceNameT&& value) { SetTerraformSourceName(std::forward<TerraformSourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eksSourceName;
    bool m_eksSourceNameHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_logicalStackName;
    bool m_logicalStackNameHasBeenSet = false;

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_terraformSourceName;
    bool m_terraformSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
