/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ServiceCatalogProvisioningDetails.h>
#include <aws/sagemaker/model/ServiceCatalogProvisionedProductDetails.h>
#include <aws/sagemaker/model/ProjectStatus.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TemplateProviderDetail.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The properties of a project as returned by the Search API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Project">AWS
   * API Reference</a></p>
   */
  class Project
  {
  public:
    AWS_SAGEMAKER_API Project() = default;
    AWS_SAGEMAKER_API Project(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Project& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    Project& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    Project& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    Project& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    template<typename ProjectDescriptionT = Aws::String>
    void SetProjectDescription(ProjectDescriptionT&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::forward<ProjectDescriptionT>(value); }
    template<typename ProjectDescriptionT = Aws::String>
    Project& WithProjectDescription(ProjectDescriptionT&& value) { SetProjectDescription(std::forward<ProjectDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ServiceCatalogProvisioningDetails& GetServiceCatalogProvisioningDetails() const { return m_serviceCatalogProvisioningDetails; }
    inline bool ServiceCatalogProvisioningDetailsHasBeenSet() const { return m_serviceCatalogProvisioningDetailsHasBeenSet; }
    template<typename ServiceCatalogProvisioningDetailsT = ServiceCatalogProvisioningDetails>
    void SetServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetailsT&& value) { m_serviceCatalogProvisioningDetailsHasBeenSet = true; m_serviceCatalogProvisioningDetails = std::forward<ServiceCatalogProvisioningDetailsT>(value); }
    template<typename ServiceCatalogProvisioningDetailsT = ServiceCatalogProvisioningDetails>
    Project& WithServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetailsT&& value) { SetServiceCatalogProvisioningDetails(std::forward<ServiceCatalogProvisioningDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ServiceCatalogProvisionedProductDetails& GetServiceCatalogProvisionedProductDetails() const { return m_serviceCatalogProvisionedProductDetails; }
    inline bool ServiceCatalogProvisionedProductDetailsHasBeenSet() const { return m_serviceCatalogProvisionedProductDetailsHasBeenSet; }
    template<typename ServiceCatalogProvisionedProductDetailsT = ServiceCatalogProvisionedProductDetails>
    void SetServiceCatalogProvisionedProductDetails(ServiceCatalogProvisionedProductDetailsT&& value) { m_serviceCatalogProvisionedProductDetailsHasBeenSet = true; m_serviceCatalogProvisionedProductDetails = std::forward<ServiceCatalogProvisionedProductDetailsT>(value); }
    template<typename ServiceCatalogProvisionedProductDetailsT = ServiceCatalogProvisionedProductDetails>
    Project& WithServiceCatalogProvisionedProductDetails(ServiceCatalogProvisionedProductDetailsT&& value) { SetServiceCatalogProvisionedProductDetails(std::forward<ServiceCatalogProvisionedProductDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project.</p>
     */
    inline ProjectStatus GetProjectStatus() const { return m_projectStatus; }
    inline bool ProjectStatusHasBeenSet() const { return m_projectStatusHasBeenSet; }
    inline void SetProjectStatus(ProjectStatus value) { m_projectStatusHasBeenSet = true; m_projectStatus = value; }
    inline Project& WithProjectStatus(ProjectStatus value) { SetProjectStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the project.</p>
     */
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    Project& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp specifying when the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Project& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of template providers associated with the project. </p>
     */
    inline const Aws::Vector<TemplateProviderDetail>& GetTemplateProviderDetails() const { return m_templateProviderDetails; }
    inline bool TemplateProviderDetailsHasBeenSet() const { return m_templateProviderDetailsHasBeenSet; }
    template<typename TemplateProviderDetailsT = Aws::Vector<TemplateProviderDetail>>
    void SetTemplateProviderDetails(TemplateProviderDetailsT&& value) { m_templateProviderDetailsHasBeenSet = true; m_templateProviderDetails = std::forward<TemplateProviderDetailsT>(value); }
    template<typename TemplateProviderDetailsT = Aws::Vector<TemplateProviderDetail>>
    Project& WithTemplateProviderDetails(TemplateProviderDetailsT&& value) { SetTemplateProviderDetails(std::forward<TemplateProviderDetailsT>(value)); return *this;}
    template<typename TemplateProviderDetailsT = TemplateProviderDetail>
    Project& AddTemplateProviderDetails(TemplateProviderDetailsT&& value) { m_templateProviderDetailsHasBeenSet = true; m_templateProviderDetails.emplace_back(std::forward<TemplateProviderDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Project& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Project& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp container for when the project was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Project& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    Project& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    ServiceCatalogProvisioningDetails m_serviceCatalogProvisioningDetails;
    bool m_serviceCatalogProvisioningDetailsHasBeenSet = false;

    ServiceCatalogProvisionedProductDetails m_serviceCatalogProvisionedProductDetails;
    bool m_serviceCatalogProvisionedProductDetailsHasBeenSet = false;

    ProjectStatus m_projectStatus{ProjectStatus::NOT_SET};
    bool m_projectStatusHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<TemplateProviderDetail> m_templateProviderDetails;
    bool m_templateProviderDetailsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
