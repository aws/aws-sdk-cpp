/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ProvisioningArtifactType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a provisioning artifact (also known as a version) for a
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactProperties">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactProperties
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactProperties() = default;
    AWS_SERVICECATALOG_API ProvisioningArtifactProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProvisioningArtifactProperties& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ProvisioningArtifactProperties& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInfo() const { return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    template<typename InfoT = Aws::Map<Aws::String, Aws::String>>
    void SetInfo(InfoT&& value) { m_infoHasBeenSet = true; m_info = std::forward<InfoT>(value); }
    template<typename InfoT = Aws::Map<Aws::String, Aws::String>>
    ProvisioningArtifactProperties& WithInfo(InfoT&& value) { SetInfo(std::forward<InfoT>(value)); return *this;}
    template<typename InfoKeyT = Aws::String, typename InfoValueT = Aws::String>
    ProvisioningArtifactProperties& AddInfo(InfoKeyT&& key, InfoValueT&& value) {
      m_infoHasBeenSet = true; m_info.emplace(std::forward<InfoKeyT>(key), std::forward<InfoValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - CloudFormation template</p> </li> <li>
     * <p> <code>TERRAFORM_OPEN_SOURCE</code> - Terraform Open Source configuration
     * file</p> </li> <li> <p> <code>TERRAFORM_CLOUD</code> - Terraform Cloud
     * configuration file</p> </li> <li> <p> <code>EXTERNAL</code> - External
     * configuration file</p> </li> </ul>
     */
    inline ProvisioningArtifactType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ProvisioningArtifactType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProvisioningArtifactProperties& WithType(ProvisioningArtifactType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, Service Catalog stops validating the specified provisioning
     * artifact even if it is invalid. </p> <p>Service Catalog does not support
     * template validation for the <code>TERRAFORM_OS</code> product type. </p>
     */
    inline bool GetDisableTemplateValidation() const { return m_disableTemplateValidation; }
    inline bool DisableTemplateValidationHasBeenSet() const { return m_disableTemplateValidationHasBeenSet; }
    inline void SetDisableTemplateValidation(bool value) { m_disableTemplateValidationHasBeenSet = true; m_disableTemplateValidation = value; }
    inline ProvisioningArtifactProperties& WithDisableTemplateValidation(bool value) { SetDisableTemplateValidation(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_info;
    bool m_infoHasBeenSet = false;

    ProvisioningArtifactType m_type{ProvisioningArtifactType::NOT_SET};
    bool m_typeHasBeenSet = false;

    bool m_disableTemplateValidation{false};
    bool m_disableTemplateValidationHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
