/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/qbusiness/model/DataSourceVpcConfiguration.h>
#include <aws/qbusiness/model/DocumentEnrichmentConfiguration.h>
#include <aws/qbusiness/model/MediaExtractionConfiguration.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateDataSourceRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSource"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier of the Amazon Q Business application the data source is
     * attached to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateDataSourceRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateDataSourceRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline UpdateDataSourceRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline UpdateDataSourceRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline UpdateDataSourceRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline UpdateDataSourceRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name of the data source connector.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateDataSourceRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateDataSourceRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    
    inline Aws::Utils::DocumentView GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::Utils::Document& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::Utils::Document&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline UpdateDataSourceRequest& WithConfiguration(const Aws::Utils::Document& value) { SetConfiguration(value); return *this;}
    inline UpdateDataSourceRequest& WithConfiguration(Aws::Utils::Document&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline UpdateDataSourceRequest& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline UpdateDataSourceRequest& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline const Aws::String& GetSyncSchedule() const{ return m_syncSchedule; }
    inline bool SyncScheduleHasBeenSet() const { return m_syncScheduleHasBeenSet; }
    inline void SetSyncSchedule(const Aws::String& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = value; }
    inline void SetSyncSchedule(Aws::String&& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = std::move(value); }
    inline void SetSyncSchedule(const char* value) { m_syncScheduleHasBeenSet = true; m_syncSchedule.assign(value); }
    inline UpdateDataSourceRequest& WithSyncSchedule(const Aws::String& value) { SetSyncSchedule(value); return *this;}
    inline UpdateDataSourceRequest& WithSyncSchedule(Aws::String&& value) { SetSyncSchedule(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithSyncSchedule(const char* value) { SetSyncSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateDataSourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateDataSourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const{ return m_documentEnrichmentConfiguration; }
    inline bool DocumentEnrichmentConfigurationHasBeenSet() const { return m_documentEnrichmentConfigurationHasBeenSet; }
    inline void SetDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = value; }
    inline void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = std::move(value); }
    inline UpdateDataSourceRequest& WithDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { SetDocumentEnrichmentConfiguration(value); return *this;}
    inline UpdateDataSourceRequest& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { SetDocumentEnrichmentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for extracting information from media in documents for your
     * data source.</p>
     */
    inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const{ return m_mediaExtractionConfiguration; }
    inline bool MediaExtractionConfigurationHasBeenSet() const { return m_mediaExtractionConfigurationHasBeenSet; }
    inline void SetMediaExtractionConfiguration(const MediaExtractionConfiguration& value) { m_mediaExtractionConfigurationHasBeenSet = true; m_mediaExtractionConfiguration = value; }
    inline void SetMediaExtractionConfiguration(MediaExtractionConfiguration&& value) { m_mediaExtractionConfigurationHasBeenSet = true; m_mediaExtractionConfiguration = std::move(value); }
    inline UpdateDataSourceRequest& WithMediaExtractionConfiguration(const MediaExtractionConfiguration& value) { SetMediaExtractionConfiguration(value); return *this;}
    inline UpdateDataSourceRequest& WithMediaExtractionConfiguration(MediaExtractionConfiguration&& value) { SetMediaExtractionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Utils::Document m_configuration;
    bool m_configurationHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_syncSchedule;
    bool m_syncScheduleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DocumentEnrichmentConfiguration m_documentEnrichmentConfiguration;
    bool m_documentEnrichmentConfigurationHasBeenSet = false;

    MediaExtractionConfiguration m_mediaExtractionConfiguration;
    bool m_mediaExtractionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
