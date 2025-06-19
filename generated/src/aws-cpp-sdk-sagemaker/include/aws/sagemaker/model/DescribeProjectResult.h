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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TemplateProviderDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeProjectResult
  {
  public:
    AWS_SAGEMAKER_API DescribeProjectResult() = default;
    AWS_SAGEMAKER_API DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    DescribeProjectResult& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    DescribeProjectResult& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    DescribeProjectResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
    template<typename ProjectDescriptionT = Aws::String>
    void SetProjectDescription(ProjectDescriptionT&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::forward<ProjectDescriptionT>(value); }
    template<typename ProjectDescriptionT = Aws::String>
    DescribeProjectResult& WithProjectDescription(ProjectDescriptionT&& value) { SetProjectDescription(std::forward<ProjectDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information used to provision a service catalog product. For information, see
     * <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>.</p>
     */
    inline const ServiceCatalogProvisioningDetails& GetServiceCatalogProvisioningDetails() const { return m_serviceCatalogProvisioningDetails; }
    template<typename ServiceCatalogProvisioningDetailsT = ServiceCatalogProvisioningDetails>
    void SetServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetailsT&& value) { m_serviceCatalogProvisioningDetailsHasBeenSet = true; m_serviceCatalogProvisioningDetails = std::forward<ServiceCatalogProvisioningDetailsT>(value); }
    template<typename ServiceCatalogProvisioningDetailsT = ServiceCatalogProvisioningDetails>
    DescribeProjectResult& WithServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetailsT&& value) { SetServiceCatalogProvisioningDetails(std::forward<ServiceCatalogProvisioningDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a provisioned service catalog product.</p>
     */
    inline const ServiceCatalogProvisionedProductDetails& GetServiceCatalogProvisionedProductDetails() const { return m_serviceCatalogProvisionedProductDetails; }
    template<typename ServiceCatalogProvisionedProductDetailsT = ServiceCatalogProvisionedProductDetails>
    void SetServiceCatalogProvisionedProductDetails(ServiceCatalogProvisionedProductDetailsT&& value) { m_serviceCatalogProvisionedProductDetailsHasBeenSet = true; m_serviceCatalogProvisionedProductDetails = std::forward<ServiceCatalogProvisionedProductDetailsT>(value); }
    template<typename ServiceCatalogProvisionedProductDetailsT = ServiceCatalogProvisionedProductDetails>
    DescribeProjectResult& WithServiceCatalogProvisionedProductDetails(ServiceCatalogProvisionedProductDetailsT&& value) { SetServiceCatalogProvisionedProductDetails(std::forward<ServiceCatalogProvisionedProductDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project.</p>
     */
    inline ProjectStatus GetProjectStatus() const { return m_projectStatus; }
    inline void SetProjectStatus(ProjectStatus value) { m_projectStatusHasBeenSet = true; m_projectStatus = value; }
    inline DescribeProjectResult& WithProjectStatus(ProjectStatus value) { SetProjectStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of template providers associated with the project. </p>
     */
    inline const Aws::Vector<TemplateProviderDetail>& GetTemplateProviderDetails() const { return m_templateProviderDetails; }
    template<typename TemplateProviderDetailsT = Aws::Vector<TemplateProviderDetail>>
    void SetTemplateProviderDetails(TemplateProviderDetailsT&& value) { m_templateProviderDetailsHasBeenSet = true; m_templateProviderDetails = std::forward<TemplateProviderDetailsT>(value); }
    template<typename TemplateProviderDetailsT = Aws::Vector<TemplateProviderDetail>>
    DescribeProjectResult& WithTemplateProviderDetails(TemplateProviderDetailsT&& value) { SetTemplateProviderDetails(std::forward<TemplateProviderDetailsT>(value)); return *this;}
    template<typename TemplateProviderDetailsT = TemplateProviderDetail>
    DescribeProjectResult& AddTemplateProviderDetails(TemplateProviderDetailsT&& value) { m_templateProviderDetailsHasBeenSet = true; m_templateProviderDetails.emplace_back(std::forward<TemplateProviderDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    DescribeProjectResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeProjectResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when project was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeProjectResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    DescribeProjectResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Vector<TemplateProviderDetail> m_templateProviderDetails;
    bool m_templateProviderDetailsHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
