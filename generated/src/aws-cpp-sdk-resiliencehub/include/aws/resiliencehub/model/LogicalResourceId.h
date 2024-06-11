﻿/**
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
    AWS_RESILIENCEHUB_API LogicalResourceId();
    AWS_RESILIENCEHUB_API LogicalResourceId(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API LogicalResourceId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Amazon Elastic Kubernetes Service cluster and namespace this
     * resource belongs to.</p>  <p>This parameter accepts values in
     * "eks-cluster/namespace" format.</p> 
     */
    inline const Aws::String& GetEksSourceName() const{ return m_eksSourceName; }
    inline bool EksSourceNameHasBeenSet() const { return m_eksSourceNameHasBeenSet; }
    inline void SetEksSourceName(const Aws::String& value) { m_eksSourceNameHasBeenSet = true; m_eksSourceName = value; }
    inline void SetEksSourceName(Aws::String&& value) { m_eksSourceNameHasBeenSet = true; m_eksSourceName = std::move(value); }
    inline void SetEksSourceName(const char* value) { m_eksSourceNameHasBeenSet = true; m_eksSourceName.assign(value); }
    inline LogicalResourceId& WithEksSourceName(const Aws::String& value) { SetEksSourceName(value); return *this;}
    inline LogicalResourceId& WithEksSourceName(Aws::String&& value) { SetEksSourceName(std::move(value)); return *this;}
    inline LogicalResourceId& WithEksSourceName(const char* value) { SetEksSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the resource.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline LogicalResourceId& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline LogicalResourceId& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline LogicalResourceId& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline const Aws::String& GetLogicalStackName() const{ return m_logicalStackName; }
    inline bool LogicalStackNameHasBeenSet() const { return m_logicalStackNameHasBeenSet; }
    inline void SetLogicalStackName(const Aws::String& value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName = value; }
    inline void SetLogicalStackName(Aws::String&& value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName = std::move(value); }
    inline void SetLogicalStackName(const char* value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName.assign(value); }
    inline LogicalResourceId& WithLogicalStackName(const Aws::String& value) { SetLogicalStackName(value); return *this;}
    inline LogicalResourceId& WithLogicalStackName(Aws::String&& value) { SetLogicalStackName(std::move(value)); return *this;}
    inline LogicalResourceId& WithLogicalStackName(const char* value) { SetLogicalStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }
    inline LogicalResourceId& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline LogicalResourceId& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline LogicalResourceId& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline const Aws::String& GetTerraformSourceName() const{ return m_terraformSourceName; }
    inline bool TerraformSourceNameHasBeenSet() const { return m_terraformSourceNameHasBeenSet; }
    inline void SetTerraformSourceName(const Aws::String& value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName = value; }
    inline void SetTerraformSourceName(Aws::String&& value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName = std::move(value); }
    inline void SetTerraformSourceName(const char* value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName.assign(value); }
    inline LogicalResourceId& WithTerraformSourceName(const Aws::String& value) { SetTerraformSourceName(value); return *this;}
    inline LogicalResourceId& WithTerraformSourceName(Aws::String&& value) { SetTerraformSourceName(std::move(value)); return *this;}
    inline LogicalResourceId& WithTerraformSourceName(const char* value) { SetTerraformSourceName(value); return *this;}
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
