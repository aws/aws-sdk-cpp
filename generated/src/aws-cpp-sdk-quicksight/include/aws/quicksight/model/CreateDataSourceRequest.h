/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSourceType.h>
#include <aws/quicksight/model/DataSourceParameters.h>
#include <aws/quicksight/model/DataSourceCredentials.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>
#include <aws/quicksight/model/SslProperties.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateDataSourceRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSource"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateDataSourceRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateDataSourceRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline CreateDataSourceRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline CreateDataSourceRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source. To return a list of all data sources, use
     * <code>ListDataSources</code>.</p> <p>Use <code>AMAZON_ELASTICSEARCH</code> for
     * Amazon OpenSearch Service.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateDataSourceRequest& WithType(const DataSourceType& value) { SetType(value); return *this;}
    inline CreateDataSourceRequest& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that Amazon QuickSight uses to connect to your underlying
     * source.</p>
     */
    inline const DataSourceParameters& GetDataSourceParameters() const{ return m_dataSourceParameters; }
    inline bool DataSourceParametersHasBeenSet() const { return m_dataSourceParametersHasBeenSet; }
    inline void SetDataSourceParameters(const DataSourceParameters& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = value; }
    inline void SetDataSourceParameters(DataSourceParameters&& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = std::move(value); }
    inline CreateDataSourceRequest& WithDataSourceParameters(const DataSourceParameters& value) { SetDataSourceParameters(value); return *this;}
    inline CreateDataSourceRequest& WithDataSourceParameters(DataSourceParameters&& value) { SetDataSourceParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials Amazon QuickSight that uses to connect to your underlying
     * source. Currently, only credentials based on user name and password are
     * supported.</p>
     */
    inline const DataSourceCredentials& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const DataSourceCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(DataSourceCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline CreateDataSourceRequest& WithCredentials(const DataSourceCredentials& value) { SetCredentials(value); return *this;}
    inline CreateDataSourceRequest& WithCredentials(DataSourceCredentials&& value) { SetCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline CreateDataSourceRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}
    inline CreateDataSourceRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline CreateDataSourceRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    inline CreateDataSourceRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter only when you want Amazon QuickSight to use a VPC
     * connection when connecting to your underlying source.</p>
     */
    inline const VpcConnectionProperties& GetVpcConnectionProperties() const{ return m_vpcConnectionProperties; }
    inline bool VpcConnectionPropertiesHasBeenSet() const { return m_vpcConnectionPropertiesHasBeenSet; }
    inline void SetVpcConnectionProperties(const VpcConnectionProperties& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = value; }
    inline void SetVpcConnectionProperties(VpcConnectionProperties&& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = std::move(value); }
    inline CreateDataSourceRequest& WithVpcConnectionProperties(const VpcConnectionProperties& value) { SetVpcConnectionProperties(value); return *this;}
    inline CreateDataSourceRequest& WithVpcConnectionProperties(VpcConnectionProperties&& value) { SetVpcConnectionProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secure Socket Layer (SSL) properties that apply when Amazon QuickSight
     * connects to your underlying source.</p>
     */
    inline const SslProperties& GetSslProperties() const{ return m_sslProperties; }
    inline bool SslPropertiesHasBeenSet() const { return m_sslPropertiesHasBeenSet; }
    inline void SetSslProperties(const SslProperties& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = value; }
    inline void SetSslProperties(SslProperties&& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = std::move(value); }
    inline CreateDataSourceRequest& WithSslProperties(const SslProperties& value) { SetSslProperties(value); return *this;}
    inline CreateDataSourceRequest& WithSslProperties(SslProperties&& value) { SetSslProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the data source.</p>
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
     * <p>When you create the data source, Amazon QuickSight adds the data source to
     * these folders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderArns() const{ return m_folderArns; }
    inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
    inline void SetFolderArns(const Aws::Vector<Aws::String>& value) { m_folderArnsHasBeenSet = true; m_folderArns = value; }
    inline void SetFolderArns(Aws::Vector<Aws::String>&& value) { m_folderArnsHasBeenSet = true; m_folderArns = std::move(value); }
    inline CreateDataSourceRequest& WithFolderArns(const Aws::Vector<Aws::String>& value) { SetFolderArns(value); return *this;}
    inline CreateDataSourceRequest& WithFolderArns(Aws::Vector<Aws::String>&& value) { SetFolderArns(std::move(value)); return *this;}
    inline CreateDataSourceRequest& AddFolderArns(const Aws::String& value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(value); return *this; }
    inline CreateDataSourceRequest& AddFolderArns(Aws::String&& value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(std::move(value)); return *this; }
    inline CreateDataSourceRequest& AddFolderArns(const char* value) { m_folderArnsHasBeenSet = true; m_folderArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSourceType m_type;
    bool m_typeHasBeenSet = false;

    DataSourceParameters m_dataSourceParameters;
    bool m_dataSourceParametersHasBeenSet = false;

    DataSourceCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    VpcConnectionProperties m_vpcConnectionProperties;
    bool m_vpcConnectionPropertiesHasBeenSet = false;

    SslProperties m_sslProperties;
    bool m_sslPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_folderArns;
    bool m_folderArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
