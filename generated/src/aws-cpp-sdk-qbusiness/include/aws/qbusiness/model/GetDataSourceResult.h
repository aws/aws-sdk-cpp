/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/qbusiness/model/DataSourceVpcConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/DataSourceStatus.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/DocumentEnrichmentConfiguration.h>
#include <aws/qbusiness/model/MediaExtractionConfiguration.h>
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
namespace QBusiness
{
namespace Model
{
  class GetDataSourceResult
  {
  public:
    AWS_QBUSINESS_API GetDataSourceResult() = default;
    AWS_QBUSINESS_API GetDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetDataSourceResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index linked to the data source connector.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    GetDataSourceResult& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    GetDataSourceResult& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
    template<typename DataSourceArnT = Aws::String>
    void SetDataSourceArn(DataSourceArnT&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::forward<DataSourceArnT>(value); }
    template<typename DataSourceArnT = Aws::String>
    GetDataSourceResult& WithDataSourceArn(DataSourceArnT&& value) { SetDataSourceArn(std::forward<DataSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the data source connector.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetDataSourceResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source connector. For example, <code>S3</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    GetDataSourceResult& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of how the data source connector is configured.</p>
     */
    inline Aws::Utils::DocumentView GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = Aws::Utils::Document>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Utils::Document>
    GetDataSourceResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    GetDataSourceResult& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the data source connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetDataSourceResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the data source connector was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetDataSourceResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDataSourceResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the data source connector. When the <code>Status</code>
     * field value is <code>FAILED</code>, the <code>ErrorMessage</code> field contains
     * a description of the error that caused the data source connector to fail.</p>
     */
    inline DataSourceStatus GetStatus() const { return m_status; }
    inline void SetStatus(DataSourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDataSourceResult& WithStatus(DataSourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for Amazon Q Business to update the index.</p>
     */
    inline const Aws::String& GetSyncSchedule() const { return m_syncSchedule; }
    template<typename SyncScheduleT = Aws::String>
    void SetSyncSchedule(SyncScheduleT&& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = std::forward<SyncScheduleT>(value); }
    template<typename SyncScheduleT = Aws::String>
    GetDataSourceResult& WithSyncSchedule(SyncScheduleT&& value) { SetSyncSchedule(std::forward<SyncScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetDataSourceResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline const ErrorDetail& GetError() const { return m_error; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    GetDataSourceResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const { return m_documentEnrichmentConfiguration; }
    template<typename DocumentEnrichmentConfigurationT = DocumentEnrichmentConfiguration>
    void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfigurationT&& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = std::forward<DocumentEnrichmentConfigurationT>(value); }
    template<typename DocumentEnrichmentConfigurationT = DocumentEnrichmentConfiguration>
    GetDataSourceResult& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfigurationT&& value) { SetDocumentEnrichmentConfiguration(std::forward<DocumentEnrichmentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for extracting information from media in documents for the
     * data source. </p>
     */
    inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const { return m_mediaExtractionConfiguration; }
    template<typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
    void SetMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) { m_mediaExtractionConfigurationHasBeenSet = true; m_mediaExtractionConfiguration = std::forward<MediaExtractionConfigurationT>(value); }
    template<typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
    GetDataSourceResult& WithMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) { SetMediaExtractionConfiguration(std::forward<MediaExtractionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::Document m_configuration;
    bool m_configurationHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataSourceStatus m_status{DataSourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_syncSchedule;
    bool m_syncScheduleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    DocumentEnrichmentConfiguration m_documentEnrichmentConfiguration;
    bool m_documentEnrichmentConfigurationHasBeenSet = false;

    MediaExtractionConfiguration m_mediaExtractionConfiguration;
    bool m_mediaExtractionConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
