/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ServiceCatalogProvisioningUpdateDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/UpdateTemplateProvider.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateProjectRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

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
    UpdateProjectRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    template<typename ProjectDescriptionT = Aws::String>
    void SetProjectDescription(ProjectDescriptionT&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::forward<ProjectDescriptionT>(value); }
    template<typename ProjectDescriptionT = Aws::String>
    UpdateProjectRequest& WithProjectDescription(ProjectDescriptionT&& value) { SetProjectDescription(std::forward<ProjectDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product ID and provisioning artifact ID to provision a service catalog.
     * The provisioning artifact ID will default to the latest provisioning artifact ID
     * of the product, if you don't provide the provisioning artifact ID. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>. </p>
     */
    inline const ServiceCatalogProvisioningUpdateDetails& GetServiceCatalogProvisioningUpdateDetails() const { return m_serviceCatalogProvisioningUpdateDetails; }
    inline bool ServiceCatalogProvisioningUpdateDetailsHasBeenSet() const { return m_serviceCatalogProvisioningUpdateDetailsHasBeenSet; }
    template<typename ServiceCatalogProvisioningUpdateDetailsT = ServiceCatalogProvisioningUpdateDetails>
    void SetServiceCatalogProvisioningUpdateDetails(ServiceCatalogProvisioningUpdateDetailsT&& value) { m_serviceCatalogProvisioningUpdateDetailsHasBeenSet = true; m_serviceCatalogProvisioningUpdateDetails = std::forward<ServiceCatalogProvisioningUpdateDetailsT>(value); }
    template<typename ServiceCatalogProvisioningUpdateDetailsT = ServiceCatalogProvisioningUpdateDetails>
    UpdateProjectRequest& WithServiceCatalogProvisioningUpdateDetails(ServiceCatalogProvisioningUpdateDetailsT&& value) { SetServiceCatalogProvisioningUpdateDetails(std::forward<ServiceCatalogProvisioningUpdateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdateProjectRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdateProjectRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The template providers to update in the project. </p>
     */
    inline const Aws::Vector<UpdateTemplateProvider>& GetTemplateProvidersToUpdate() const { return m_templateProvidersToUpdate; }
    inline bool TemplateProvidersToUpdateHasBeenSet() const { return m_templateProvidersToUpdateHasBeenSet; }
    template<typename TemplateProvidersToUpdateT = Aws::Vector<UpdateTemplateProvider>>
    void SetTemplateProvidersToUpdate(TemplateProvidersToUpdateT&& value) { m_templateProvidersToUpdateHasBeenSet = true; m_templateProvidersToUpdate = std::forward<TemplateProvidersToUpdateT>(value); }
    template<typename TemplateProvidersToUpdateT = Aws::Vector<UpdateTemplateProvider>>
    UpdateProjectRequest& WithTemplateProvidersToUpdate(TemplateProvidersToUpdateT&& value) { SetTemplateProvidersToUpdate(std::forward<TemplateProvidersToUpdateT>(value)); return *this;}
    template<typename TemplateProvidersToUpdateT = UpdateTemplateProvider>
    UpdateProjectRequest& AddTemplateProvidersToUpdate(TemplateProvidersToUpdateT&& value) { m_templateProvidersToUpdateHasBeenSet = true; m_templateProvidersToUpdate.emplace_back(std::forward<TemplateProvidersToUpdateT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    ServiceCatalogProvisioningUpdateDetails m_serviceCatalogProvisioningUpdateDetails;
    bool m_serviceCatalogProvisioningUpdateDetailsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<UpdateTemplateProvider> m_templateProvidersToUpdate;
    bool m_templateProvidersToUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
