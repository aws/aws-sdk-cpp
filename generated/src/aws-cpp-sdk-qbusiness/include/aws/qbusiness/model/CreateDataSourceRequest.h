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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DocumentEnrichmentConfiguration.h>
#include <aws/qbusiness/model/MediaExtractionConfiguration.h>
#include <aws/qbusiness/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class CreateDataSourceRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSource"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier of the Amazon Q Business application the data source will be
     * attached to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CreateDataSourceRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateDataSourceRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline CreateDataSourceRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline CreateDataSourceRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the data source connector.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateDataSourceRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateDataSourceRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information to connect your data source repository to Amazon Q
     * Business. Use this parameter to provide a JSON schema with configuration
     * information specific to your data source connector.</p> <p>Each data source has
     * a JSON schema provided by Amazon Q Business that you must use. For example, the
     * Amazon S3 and Web Crawler connectors require the following JSON schemas:</p>
     * <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/s3-api.html">Amazon
     * S3 JSON schema</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/web-crawler-api.html">Web
     * Crawler JSON schema</a> </p> </li> </ul> <p>You can find configuration templates
     * for your specific data source using the following steps:</p> <ol> <li>
     * <p>Navigate to the <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connectors-list.html">Supported
     * connectors</a> page in the Amazon Q Business User Guide, and select the data
     * source of your choice.</p> </li> <li> <p>Then, from your specific data source
     * connector page, select <b>Using the API</b>. You will find the JSON schema for
     * your data source, including parameter descriptions, in this section.</p> </li>
     * </ol>
     */
    inline Aws::Utils::DocumentView GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::Utils::Document& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::Utils::Document&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateDataSourceRequest& WithConfiguration(const Aws::Utils::Document& value) { SetConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithConfiguration(Aws::Utils::Document&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connector-vpc.html">Using
     * Amazon VPC with Amazon Q Business connectors</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline CreateDataSourceRequest& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDataSourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDataSourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDataSourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDataSourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sets the frequency for Amazon Q Business to check the documents in your data
     * source repository and update your index. If you don't set a schedule, Amazon Q
     * Business won't periodically update the index.</p> <p>Specify a
     * <code>cron-</code> format schedule string or an empty string to indicate that
     * the index is updated on demand. You can't specify the <code>Schedule</code>
     * parameter when the <code>Type</code> parameter is set to <code>CUSTOM</code>. If
     * you do, you receive a <code>ValidationException</code> exception. </p>
     */
    inline const Aws::String& GetSyncSchedule() const{ return m_syncSchedule; }
    inline bool SyncScheduleHasBeenSet() const { return m_syncScheduleHasBeenSet; }
    inline void SetSyncSchedule(const Aws::String& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = value; }
    inline void SetSyncSchedule(Aws::String&& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = std::move(value); }
    inline void SetSyncSchedule(const char* value) { m_syncScheduleHasBeenSet = true; m_syncSchedule.assign(value); }
    inline CreateDataSourceRequest& WithSyncSchedule(const Aws::String& value) { SetSyncSchedule(value); return *this;}
    inline CreateDataSourceRequest& WithSyncSchedule(Aws::String&& value) { SetSyncSchedule(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithSyncSchedule(const char* value) { SetSyncSchedule(value); return *this;}
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
    inline CreateDataSourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateDataSourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDataSourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDataSourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const{ return m_documentEnrichmentConfiguration; }
    inline bool DocumentEnrichmentConfigurationHasBeenSet() const { return m_documentEnrichmentConfigurationHasBeenSet; }
    inline void SetDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = value; }
    inline void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = std::move(value); }
    inline CreateDataSourceRequest& WithDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { SetDocumentEnrichmentConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { SetDocumentEnrichmentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for extracting information from media in documents during
     * ingestion.</p>
     */
    inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const{ return m_mediaExtractionConfiguration; }
    inline bool MediaExtractionConfigurationHasBeenSet() const { return m_mediaExtractionConfigurationHasBeenSet; }
    inline void SetMediaExtractionConfiguration(const MediaExtractionConfiguration& value) { m_mediaExtractionConfigurationHasBeenSet = true; m_mediaExtractionConfiguration = value; }
    inline void SetMediaExtractionConfiguration(MediaExtractionConfiguration&& value) { m_mediaExtractionConfigurationHasBeenSet = true; m_mediaExtractionConfiguration = std::move(value); }
    inline CreateDataSourceRequest& WithMediaExtractionConfiguration(const MediaExtractionConfiguration& value) { SetMediaExtractionConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithMediaExtractionConfiguration(MediaExtractionConfiguration&& value) { SetMediaExtractionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Utils::Document m_configuration;
    bool m_configurationHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_syncSchedule;
    bool m_syncScheduleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DocumentEnrichmentConfiguration m_documentEnrichmentConfiguration;
    bool m_documentEnrichmentConfigurationHasBeenSet = false;

    MediaExtractionConfiguration m_mediaExtractionConfiguration;
    bool m_mediaExtractionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
