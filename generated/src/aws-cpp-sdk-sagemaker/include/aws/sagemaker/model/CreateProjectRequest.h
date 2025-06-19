/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ServiceCatalogProvisioningDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/CreateTemplateProvider.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateProjectRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CreateProjectRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    template<typename ProjectDescriptionT = Aws::String>
    void SetProjectDescription(ProjectDescriptionT&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::forward<ProjectDescriptionT>(value); }
    template<typename ProjectDescriptionT = Aws::String>
    CreateProjectRequest& WithProjectDescription(ProjectDescriptionT&& value) { SetProjectDescription(std::forward<ProjectDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product ID and provisioning artifact ID to provision a service catalog.
     * The provisioning artifact ID will default to the latest provisioning artifact ID
     * of the product, if you don't provide the provisioning artifact ID. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>.</p>
     */
    inline const ServiceCatalogProvisioningDetails& GetServiceCatalogProvisioningDetails() const { return m_serviceCatalogProvisioningDetails; }
    inline bool ServiceCatalogProvisioningDetailsHasBeenSet() const { return m_serviceCatalogProvisioningDetailsHasBeenSet; }
    template<typename ServiceCatalogProvisioningDetailsT = ServiceCatalogProvisioningDetails>
    void SetServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetailsT&& value) { m_serviceCatalogProvisioningDetailsHasBeenSet = true; m_serviceCatalogProvisioningDetails = std::forward<ServiceCatalogProvisioningDetailsT>(value); }
    template<typename ServiceCatalogProvisioningDetailsT = ServiceCatalogProvisioningDetails>
    CreateProjectRequest& WithServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetailsT&& value) { SetServiceCatalogProvisioningDetails(std::forward<ServiceCatalogProvisioningDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs that you want to use to organize and track your
     * Amazon Web Services resource costs. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateProjectRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateProjectRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of template provider configurations for creating infrastructure
     * resources for the project. </p>
     */
    inline const Aws::Vector<CreateTemplateProvider>& GetTemplateProviders() const { return m_templateProviders; }
    inline bool TemplateProvidersHasBeenSet() const { return m_templateProvidersHasBeenSet; }
    template<typename TemplateProvidersT = Aws::Vector<CreateTemplateProvider>>
    void SetTemplateProviders(TemplateProvidersT&& value) { m_templateProvidersHasBeenSet = true; m_templateProviders = std::forward<TemplateProvidersT>(value); }
    template<typename TemplateProvidersT = Aws::Vector<CreateTemplateProvider>>
    CreateProjectRequest& WithTemplateProviders(TemplateProvidersT&& value) { SetTemplateProviders(std::forward<TemplateProvidersT>(value)); return *this;}
    template<typename TemplateProvidersT = CreateTemplateProvider>
    CreateProjectRequest& AddTemplateProviders(TemplateProvidersT&& value) { m_templateProvidersHasBeenSet = true; m_templateProviders.emplace_back(std::forward<TemplateProvidersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    ServiceCatalogProvisioningDetails m_serviceCatalogProvisioningDetails;
    bool m_serviceCatalogProvisioningDetailsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<CreateTemplateProvider> m_templateProviders;
    bool m_templateProvidersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
