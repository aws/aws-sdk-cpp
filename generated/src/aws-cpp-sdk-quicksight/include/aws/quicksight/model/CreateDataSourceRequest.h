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
    AWS_QUICKSIGHT_API CreateDataSourceRequest() = default;

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
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateDataSourceRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    CreateDataSourceRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDataSourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source. To return a list of all data sources, use
     * <code>ListDataSources</code>.</p> <p>Use <code>AMAZON_ELASTICSEARCH</code> for
     * Amazon OpenSearch Service.</p>
     */
    inline DataSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateDataSourceRequest& WithType(DataSourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that QuickSight uses to connect to your underlying source.</p>
     */
    inline const DataSourceParameters& GetDataSourceParameters() const { return m_dataSourceParameters; }
    inline bool DataSourceParametersHasBeenSet() const { return m_dataSourceParametersHasBeenSet; }
    template<typename DataSourceParametersT = DataSourceParameters>
    void SetDataSourceParameters(DataSourceParametersT&& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = std::forward<DataSourceParametersT>(value); }
    template<typename DataSourceParametersT = DataSourceParameters>
    CreateDataSourceRequest& WithDataSourceParameters(DataSourceParametersT&& value) { SetDataSourceParameters(std::forward<DataSourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials QuickSight that uses to connect to your underlying source.
     * Currently, only credentials based on user name and password are supported.</p>
     */
    inline const DataSourceCredentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = DataSourceCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = DataSourceCredentials>
    CreateDataSourceRequest& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource permissions on the data source.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    CreateDataSourceRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    CreateDataSourceRequest& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter only when you want QuickSight to use a VPC connection when
     * connecting to your underlying source.</p>
     */
    inline const VpcConnectionProperties& GetVpcConnectionProperties() const { return m_vpcConnectionProperties; }
    inline bool VpcConnectionPropertiesHasBeenSet() const { return m_vpcConnectionPropertiesHasBeenSet; }
    template<typename VpcConnectionPropertiesT = VpcConnectionProperties>
    void SetVpcConnectionProperties(VpcConnectionPropertiesT&& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = std::forward<VpcConnectionPropertiesT>(value); }
    template<typename VpcConnectionPropertiesT = VpcConnectionProperties>
    CreateDataSourceRequest& WithVpcConnectionProperties(VpcConnectionPropertiesT&& value) { SetVpcConnectionProperties(std::forward<VpcConnectionPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secure Socket Layer (SSL) properties that apply when QuickSight connects to
     * your underlying source.</p>
     */
    inline const SslProperties& GetSslProperties() const { return m_sslProperties; }
    inline bool SslPropertiesHasBeenSet() const { return m_sslPropertiesHasBeenSet; }
    template<typename SslPropertiesT = SslProperties>
    void SetSslProperties(SslPropertiesT&& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = std::forward<SslPropertiesT>(value); }
    template<typename SslPropertiesT = SslProperties>
    CreateDataSourceRequest& WithSslProperties(SslPropertiesT&& value) { SetSslProperties(std::forward<SslPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the data source.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDataSourceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataSourceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you create the data source, QuickSight adds the data source to these
     * folders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderArns() const { return m_folderArns; }
    inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    void SetFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns = std::forward<FolderArnsT>(value); }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    CreateDataSourceRequest& WithFolderArns(FolderArnsT&& value) { SetFolderArns(std::forward<FolderArnsT>(value)); return *this;}
    template<typename FolderArnsT = Aws::String>
    CreateDataSourceRequest& AddFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns.emplace_back(std::forward<FolderArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSourceType m_type{DataSourceType::NOT_SET};
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
