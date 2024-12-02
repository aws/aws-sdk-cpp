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
    AWS_QBUSINESS_API GetDataSourceResult();
    AWS_QBUSINESS_API GetDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetDataSourceResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetDataSourceResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index linked to the data source connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }
    inline GetDataSourceResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline GetDataSourceResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }
    inline GetDataSourceResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline GetDataSourceResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArn = value; }
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArn = std::move(value); }
    inline void SetDataSourceArn(const char* value) { m_dataSourceArn.assign(value); }
    inline GetDataSourceResult& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}
    inline GetDataSourceResult& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}
    inline GetDataSourceResult& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the data source connector.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetDataSourceResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetDataSourceResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetDataSourceResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source connector. For example, <code>S3</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline void SetType(const Aws::String& value) { m_type = value; }
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }
    inline void SetType(const char* value) { m_type.assign(value); }
    inline GetDataSourceResult& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline GetDataSourceResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline GetDataSourceResult& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of how the data source connector is configured.</p>
     */
    inline Aws::Utils::DocumentView GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const Aws::Utils::Document& value) { m_configuration = value; }
    inline void SetConfiguration(Aws::Utils::Document&& value) { m_configuration = std::move(value); }
    inline GetDataSourceResult& WithConfiguration(const Aws::Utils::Document& value) { SetConfiguration(value); return *this;}
    inline GetDataSourceResult& WithConfiguration(Aws::Utils::Document&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfiguration = std::move(value); }
    inline GetDataSourceResult& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline GetDataSourceResult& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the data source connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetDataSourceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetDataSourceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the data source connector was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetDataSourceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetDataSourceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDataSourceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDataSourceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDataSourceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the data source connector. When the <code>Status</code>
     * field value is <code>FAILED</code>, the <code>ErrorMessage</code> field contains
     * a description of the error that caused the data source connector to fail.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DataSourceStatus& value) { m_status = value; }
    inline void SetStatus(DataSourceStatus&& value) { m_status = std::move(value); }
    inline GetDataSourceResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}
    inline GetDataSourceResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for Amazon Q Business to update the index.</p>
     */
    inline const Aws::String& GetSyncSchedule() const{ return m_syncSchedule; }
    inline void SetSyncSchedule(const Aws::String& value) { m_syncSchedule = value; }
    inline void SetSyncSchedule(Aws::String&& value) { m_syncSchedule = std::move(value); }
    inline void SetSyncSchedule(const char* value) { m_syncSchedule.assign(value); }
    inline GetDataSourceResult& WithSyncSchedule(const Aws::String& value) { SetSyncSchedule(value); return *this;}
    inline GetDataSourceResult& WithSyncSchedule(Aws::String&& value) { SetSyncSchedule(std::move(value)); return *this;}
    inline GetDataSourceResult& WithSyncSchedule(const char* value) { SetSyncSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetDataSourceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetDataSourceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetDataSourceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source connector to fail.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline void SetError(const ErrorDetail& value) { m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_error = std::move(value); }
    inline GetDataSourceResult& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline GetDataSourceResult& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const{ return m_documentEnrichmentConfiguration; }
    inline void SetDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { m_documentEnrichmentConfiguration = value; }
    inline void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { m_documentEnrichmentConfiguration = std::move(value); }
    inline GetDataSourceResult& WithDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { SetDocumentEnrichmentConfiguration(value); return *this;}
    inline GetDataSourceResult& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { SetDocumentEnrichmentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for extracting information from media in documents for the
     * data source. </p>
     */
    inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const{ return m_mediaExtractionConfiguration; }
    inline void SetMediaExtractionConfiguration(const MediaExtractionConfiguration& value) { m_mediaExtractionConfiguration = value; }
    inline void SetMediaExtractionConfiguration(MediaExtractionConfiguration&& value) { m_mediaExtractionConfiguration = std::move(value); }
    inline GetDataSourceResult& WithMediaExtractionConfiguration(const MediaExtractionConfiguration& value) { SetMediaExtractionConfiguration(value); return *this;}
    inline GetDataSourceResult& WithMediaExtractionConfiguration(MediaExtractionConfiguration&& value) { SetMediaExtractionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_indexId;

    Aws::String m_dataSourceId;

    Aws::String m_dataSourceArn;

    Aws::String m_displayName;

    Aws::String m_type;

    Aws::Utils::Document m_configuration;

    DataSourceVpcConfiguration m_vpcConfiguration;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_description;

    DataSourceStatus m_status;

    Aws::String m_syncSchedule;

    Aws::String m_roleArn;

    ErrorDetail m_error;

    DocumentEnrichmentConfiguration m_documentEnrichmentConfiguration;

    MediaExtractionConfiguration m_mediaExtractionConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
