/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSourceParameters.h>
#include <aws/quicksight/model/DataSourceCredentials.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>
#include <aws/quicksight/model/SslProperties.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateDataSourceRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateDataSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSource"; }

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
    UpdateDataSourceRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    UpdateDataSourceRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
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
    UpdateDataSourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    UpdateDataSourceRequest& WithDataSourceParameters(DataSourceParametersT&& value) { SetDataSourceParameters(std::forward<DataSourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials that QuickSight that uses to connect to your underlying
     * source. Currently, only credentials based on user name and password are
     * supported.</p>
     */
    inline const DataSourceCredentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = DataSourceCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = DataSourceCredentials>
    UpdateDataSourceRequest& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
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
    UpdateDataSourceRequest& WithVpcConnectionProperties(VpcConnectionPropertiesT&& value) { SetVpcConnectionProperties(std::forward<VpcConnectionPropertiesT>(value)); return *this;}
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
    UpdateDataSourceRequest& WithSslProperties(SslPropertiesT&& value) { SetSslProperties(std::forward<SslPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSourceParameters m_dataSourceParameters;
    bool m_dataSourceParametersHasBeenSet = false;

    DataSourceCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    VpcConnectionProperties m_vpcConnectionProperties;
    bool m_vpcConnectionPropertiesHasBeenSet = false;

    SslProperties m_sslProperties;
    bool m_sslPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
