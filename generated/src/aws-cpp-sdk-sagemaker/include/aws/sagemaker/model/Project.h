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
    AWS_SAGEMAKER_API Project();
    AWS_SAGEMAKER_API Project(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Project& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline Project& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline Project& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline Project& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline Project& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline Project& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline Project& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline Project& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline Project& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline Project& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = value; }
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::move(value); }
    inline void SetProjectDescription(const char* value) { m_projectDescriptionHasBeenSet = true; m_projectDescription.assign(value); }
    inline Project& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}
    inline Project& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}
    inline Project& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const ServiceCatalogProvisioningDetails& GetServiceCatalogProvisioningDetails() const{ return m_serviceCatalogProvisioningDetails; }
    inline bool ServiceCatalogProvisioningDetailsHasBeenSet() const { return m_serviceCatalogProvisioningDetailsHasBeenSet; }
    inline void SetServiceCatalogProvisioningDetails(const ServiceCatalogProvisioningDetails& value) { m_serviceCatalogProvisioningDetailsHasBeenSet = true; m_serviceCatalogProvisioningDetails = value; }
    inline void SetServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetails&& value) { m_serviceCatalogProvisioningDetailsHasBeenSet = true; m_serviceCatalogProvisioningDetails = std::move(value); }
    inline Project& WithServiceCatalogProvisioningDetails(const ServiceCatalogProvisioningDetails& value) { SetServiceCatalogProvisioningDetails(value); return *this;}
    inline Project& WithServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetails&& value) { SetServiceCatalogProvisioningDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ServiceCatalogProvisionedProductDetails& GetServiceCatalogProvisionedProductDetails() const{ return m_serviceCatalogProvisionedProductDetails; }
    inline bool ServiceCatalogProvisionedProductDetailsHasBeenSet() const { return m_serviceCatalogProvisionedProductDetailsHasBeenSet; }
    inline void SetServiceCatalogProvisionedProductDetails(const ServiceCatalogProvisionedProductDetails& value) { m_serviceCatalogProvisionedProductDetailsHasBeenSet = true; m_serviceCatalogProvisionedProductDetails = value; }
    inline void SetServiceCatalogProvisionedProductDetails(ServiceCatalogProvisionedProductDetails&& value) { m_serviceCatalogProvisionedProductDetailsHasBeenSet = true; m_serviceCatalogProvisionedProductDetails = std::move(value); }
    inline Project& WithServiceCatalogProvisionedProductDetails(const ServiceCatalogProvisionedProductDetails& value) { SetServiceCatalogProvisionedProductDetails(value); return *this;}
    inline Project& WithServiceCatalogProvisionedProductDetails(ServiceCatalogProvisionedProductDetails&& value) { SetServiceCatalogProvisionedProductDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project.</p>
     */
    inline const ProjectStatus& GetProjectStatus() const{ return m_projectStatus; }
    inline bool ProjectStatusHasBeenSet() const { return m_projectStatusHasBeenSet; }
    inline void SetProjectStatus(const ProjectStatus& value) { m_projectStatusHasBeenSet = true; m_projectStatus = value; }
    inline void SetProjectStatus(ProjectStatus&& value) { m_projectStatusHasBeenSet = true; m_projectStatus = std::move(value); }
    inline Project& WithProjectStatus(const ProjectStatus& value) { SetProjectStatus(value); return *this;}
    inline Project& WithProjectStatus(ProjectStatus&& value) { SetProjectStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the project.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline Project& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline Project& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp specifying when the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Project& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Project& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Project& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Project& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Project& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Project& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp container for when the project was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Project& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Project& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline Project& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline Project& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
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

    ProjectStatus m_projectStatus;
    bool m_projectStatusHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
