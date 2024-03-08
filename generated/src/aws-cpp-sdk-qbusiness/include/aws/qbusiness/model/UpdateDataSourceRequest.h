/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/qbusiness/model/DocumentEnrichmentConfiguration.h>
#include <aws/qbusiness/model/DataSourceVpcConfiguration.h>
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


    /**
     * <p> The identifier of the Amazon Q application the data source is attached
     * to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p> The identifier of the Amazon Q application the data source is attached
     * to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p> The identifier of the Amazon Q application the data source is attached
     * to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p> The identifier of the Amazon Q application the data source is attached
     * to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p> The identifier of the Amazon Q application the data source is attached
     * to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p> The identifier of the Amazon Q application the data source is attached
     * to.</p>
     */
    inline UpdateDataSourceRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p> The identifier of the Amazon Q application the data source is attached
     * to.</p>
     */
    inline UpdateDataSourceRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the Amazon Q application the data source is attached
     * to.</p>
     */
    inline UpdateDataSourceRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline Aws::Utils::DocumentView GetConfiguration() const{ return m_configuration; }

    
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    
    inline void SetConfiguration(const Aws::Utils::Document& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    
    inline void SetConfiguration(Aws::Utils::Document&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    
    inline UpdateDataSourceRequest& WithConfiguration(const Aws::Utils::Document& value) { SetConfiguration(value); return *this;}

    
    inline UpdateDataSourceRequest& WithConfiguration(Aws::Utils::Document&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The description of the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the data source connector.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the data source connector.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the data source connector.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the data source connector.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name of the data source connector.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A name of the data source connector.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A name of the data source connector.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A name of the data source connector.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A name of the data source connector.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A name of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A name of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A name of the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const{ return m_documentEnrichmentConfiguration; }

    
    inline bool DocumentEnrichmentConfigurationHasBeenSet() const { return m_documentEnrichmentConfigurationHasBeenSet; }

    
    inline void SetDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = value; }

    
    inline void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = std::move(value); }

    
    inline UpdateDataSourceRequest& WithDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { SetDocumentEnrichmentConfiguration(value); return *this;}

    
    inline UpdateDataSourceRequest& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { SetDocumentEnrichmentConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index attached to the data source connector.</p>
     */
    inline UpdateDataSourceRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline UpdateDataSourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline UpdateDataSourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline UpdateDataSourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline const Aws::String& GetSyncSchedule() const{ return m_syncSchedule; }

    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline bool SyncScheduleHasBeenSet() const { return m_syncScheduleHasBeenSet; }

    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline void SetSyncSchedule(const Aws::String& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = value; }

    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline void SetSyncSchedule(Aws::String&& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = std::move(value); }

    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline void SetSyncSchedule(const char* value) { m_syncScheduleHasBeenSet = true; m_syncSchedule.assign(value); }

    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline UpdateDataSourceRequest& WithSyncSchedule(const Aws::String& value) { SetSyncSchedule(value); return *this;}

    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline UpdateDataSourceRequest& WithSyncSchedule(Aws::String&& value) { SetSyncSchedule(std::move(value)); return *this;}

    /**
     * <p>The chosen update frequency for your data source.</p>
     */
    inline UpdateDataSourceRequest& WithSyncSchedule(const char* value) { SetSyncSchedule(value); return *this;}


    
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    
    inline UpdateDataSourceRequest& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    
    inline UpdateDataSourceRequest& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Utils::Document m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    DocumentEnrichmentConfiguration m_documentEnrichmentConfiguration;
    bool m_documentEnrichmentConfigurationHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_syncSchedule;
    bool m_syncScheduleHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
