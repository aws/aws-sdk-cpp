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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DataSourceVpcConfiguration.h>
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


    /**
     * <p> The identifier of the Amazon Q application the data source will be attached
     * to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p> The identifier of the Amazon Q application the data source will be attached
     * to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p> The identifier of the Amazon Q application the data source will be attached
     * to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p> The identifier of the Amazon Q application the data source will be attached
     * to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p> The identifier of the Amazon Q application the data source will be attached
     * to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p> The identifier of the Amazon Q application the data source will be attached
     * to.</p>
     */
    inline CreateDataSourceRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p> The identifier of the Amazon Q application the data source will be attached
     * to.</p>
     */
    inline CreateDataSourceRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the Amazon Q application the data source will be attached
     * to.</p>
     */
    inline CreateDataSourceRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline CreateDataSourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline CreateDataSourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token you provide to identify a request to create a data source connector.
     * Multiple calls to the <code>CreateDataSource</code> API with the same client
     * token will create only one data source connector. </p>
     */
    inline CreateDataSourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Configuration information to connect to your data source repository. For
     * configuration templates for your specific data source, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connectors-list.html.html">Supported
     * connectors</a>.</p>
     */
    inline Aws::Utils::DocumentView GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Configuration information to connect to your data source repository. For
     * configuration templates for your specific data source, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connectors-list.html.html">Supported
     * connectors</a>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Configuration information to connect to your data source repository. For
     * configuration templates for your specific data source, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connectors-list.html.html">Supported
     * connectors</a>.</p>
     */
    inline void SetConfiguration(const Aws::Utils::Document& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Configuration information to connect to your data source repository. For
     * configuration templates for your specific data source, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connectors-list.html.html">Supported
     * connectors</a>.</p>
     */
    inline void SetConfiguration(Aws::Utils::Document&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Configuration information to connect to your data source repository. For
     * configuration templates for your specific data source, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connectors-list.html.html">Supported
     * connectors</a>.</p>
     */
    inline CreateDataSourceRequest& WithConfiguration(const Aws::Utils::Document& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Configuration information to connect to your data source repository. For
     * configuration templates for your specific data source, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connectors-list.html.html">Supported
     * connectors</a>.</p>
     */
    inline CreateDataSourceRequest& WithConfiguration(Aws::Utils::Document&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description for the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the data source connector.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the data source connector.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the data source connector.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the data source connector.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the data source connector.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the data source connector.</p>
     */
    inline CreateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the data source connector.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name for the data source connector.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A name for the data source connector.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A name for the data source connector.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A name for the data source connector.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A name for the data source connector.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A name for the data source connector.</p>
     */
    inline CreateDataSourceRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A name for the data source connector.</p>
     */
    inline CreateDataSourceRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A name for the data source connector.</p>
     */
    inline CreateDataSourceRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    
    inline const DocumentEnrichmentConfiguration& GetDocumentEnrichmentConfiguration() const{ return m_documentEnrichmentConfiguration; }

    
    inline bool DocumentEnrichmentConfigurationHasBeenSet() const { return m_documentEnrichmentConfigurationHasBeenSet; }

    
    inline void SetDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = value; }

    
    inline void SetDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { m_documentEnrichmentConfigurationHasBeenSet = true; m_documentEnrichmentConfiguration = std::move(value); }

    
    inline CreateDataSourceRequest& WithDocumentEnrichmentConfiguration(const DocumentEnrichmentConfiguration& value) { SetDocumentEnrichmentConfiguration(value); return *this;}

    
    inline CreateDataSourceRequest& WithDocumentEnrichmentConfiguration(DocumentEnrichmentConfiguration&& value) { SetDocumentEnrichmentConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline CreateDataSourceRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline CreateDataSourceRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index that you want to use with the data source
     * connector.</p>
     */
    inline CreateDataSourceRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


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
    inline CreateDataSourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline CreateDataSourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources.</p>
     */
    inline CreateDataSourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Sets the frequency for Amazon Q to check the documents in your data source
     * repository and update your index. If you don't set a schedule, Amazon Q won't
     * periodically update the index.</p> <p>Specify a <code>cron-</code> format
     * schedule string or an empty string to indicate that the index is updated on
     * demand. You can't specify the <code>Schedule</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception. </p>
     */
    inline const Aws::String& GetSyncSchedule() const{ return m_syncSchedule; }

    /**
     * <p>Sets the frequency for Amazon Q to check the documents in your data source
     * repository and update your index. If you don't set a schedule, Amazon Q won't
     * periodically update the index.</p> <p>Specify a <code>cron-</code> format
     * schedule string or an empty string to indicate that the index is updated on
     * demand. You can't specify the <code>Schedule</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception. </p>
     */
    inline bool SyncScheduleHasBeenSet() const { return m_syncScheduleHasBeenSet; }

    /**
     * <p>Sets the frequency for Amazon Q to check the documents in your data source
     * repository and update your index. If you don't set a schedule, Amazon Q won't
     * periodically update the index.</p> <p>Specify a <code>cron-</code> format
     * schedule string or an empty string to indicate that the index is updated on
     * demand. You can't specify the <code>Schedule</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception. </p>
     */
    inline void SetSyncSchedule(const Aws::String& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = value; }

    /**
     * <p>Sets the frequency for Amazon Q to check the documents in your data source
     * repository and update your index. If you don't set a schedule, Amazon Q won't
     * periodically update the index.</p> <p>Specify a <code>cron-</code> format
     * schedule string or an empty string to indicate that the index is updated on
     * demand. You can't specify the <code>Schedule</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception. </p>
     */
    inline void SetSyncSchedule(Aws::String&& value) { m_syncScheduleHasBeenSet = true; m_syncSchedule = std::move(value); }

    /**
     * <p>Sets the frequency for Amazon Q to check the documents in your data source
     * repository and update your index. If you don't set a schedule, Amazon Q won't
     * periodically update the index.</p> <p>Specify a <code>cron-</code> format
     * schedule string or an empty string to indicate that the index is updated on
     * demand. You can't specify the <code>Schedule</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception. </p>
     */
    inline void SetSyncSchedule(const char* value) { m_syncScheduleHasBeenSet = true; m_syncSchedule.assign(value); }

    /**
     * <p>Sets the frequency for Amazon Q to check the documents in your data source
     * repository and update your index. If you don't set a schedule, Amazon Q won't
     * periodically update the index.</p> <p>Specify a <code>cron-</code> format
     * schedule string or an empty string to indicate that the index is updated on
     * demand. You can't specify the <code>Schedule</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception. </p>
     */
    inline CreateDataSourceRequest& WithSyncSchedule(const Aws::String& value) { SetSyncSchedule(value); return *this;}

    /**
     * <p>Sets the frequency for Amazon Q to check the documents in your data source
     * repository and update your index. If you don't set a schedule, Amazon Q won't
     * periodically update the index.</p> <p>Specify a <code>cron-</code> format
     * schedule string or an empty string to indicate that the index is updated on
     * demand. You can't specify the <code>Schedule</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception. </p>
     */
    inline CreateDataSourceRequest& WithSyncSchedule(Aws::String&& value) { SetSyncSchedule(std::move(value)); return *this;}

    /**
     * <p>Sets the frequency for Amazon Q to check the documents in your data source
     * repository and update your index. If you don't set a schedule, Amazon Q won't
     * periodically update the index.</p> <p>Specify a <code>cron-</code> format
     * schedule string or an empty string to indicate that the index is updated on
     * demand. You can't specify the <code>Schedule</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception. </p>
     */
    inline CreateDataSourceRequest& WithSyncSchedule(const char* value) { SetSyncSchedule(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateDataSourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateDataSourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateDataSourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateDataSourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connector-vpc.html">Using
     * Amazon VPC with Amazon Q connectors</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connector-vpc.html">Using
     * Amazon VPC with Amazon Q connectors</a>.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connector-vpc.html">Using
     * Amazon VPC with Amazon Q connectors</a>.</p>
     */
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connector-vpc.html">Using
     * Amazon VPC with Amazon Q connectors</a>.</p>
     */
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connector-vpc.html">Using
     * Amazon VPC with Amazon Q connectors</a>.</p>
     */
    inline CreateDataSourceRequest& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an Amazon VPC (Virtual Private Cloud) to
     * connect to your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/connector-vpc.html">Using
     * Amazon VPC with Amazon Q connectors</a>.</p>
     */
    inline CreateDataSourceRequest& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::Document m_configuration;
    bool m_configurationHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
