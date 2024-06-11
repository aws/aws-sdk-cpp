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
    AWS_QUICKSIGHT_API UpdateDataSourceRequest();

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
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateDataSourceRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateDataSourceRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
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
     * <p>A display name for the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline UpdateDataSourceRequest& WithDataSourceParameters(const DataSourceParameters& value) { SetDataSourceParameters(value); return *this;}
    inline UpdateDataSourceRequest& WithDataSourceParameters(DataSourceParameters&& value) { SetDataSourceParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials that Amazon QuickSight that uses to connect to your
     * underlying source. Currently, only credentials based on user name and password
     * are supported.</p>
     */
    inline const DataSourceCredentials& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const DataSourceCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(DataSourceCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline UpdateDataSourceRequest& WithCredentials(const DataSourceCredentials& value) { SetCredentials(value); return *this;}
    inline UpdateDataSourceRequest& WithCredentials(DataSourceCredentials&& value) { SetCredentials(std::move(value)); return *this;}
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
    inline UpdateDataSourceRequest& WithVpcConnectionProperties(const VpcConnectionProperties& value) { SetVpcConnectionProperties(value); return *this;}
    inline UpdateDataSourceRequest& WithVpcConnectionProperties(VpcConnectionProperties&& value) { SetVpcConnectionProperties(std::move(value)); return *this;}
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
    inline UpdateDataSourceRequest& WithSslProperties(const SslProperties& value) { SetSslProperties(value); return *this;}
    inline UpdateDataSourceRequest& WithSslProperties(SslProperties&& value) { SetSslProperties(std::move(value)); return *this;}
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
