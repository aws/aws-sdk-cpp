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


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UpdateDataSourceRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UpdateDataSourceRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline UpdateDataSourceRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline UpdateDataSourceRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline UpdateDataSourceRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account. </p>
     */
    inline UpdateDataSourceRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>A display name for the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the data source.</p>
     */
    inline UpdateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the data source.</p>
     */
    inline UpdateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the data source.</p>
     */
    inline UpdateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The parameters that Amazon QuickSight uses to connect to your underlying
     * source.</p>
     */
    inline const DataSourceParameters& GetDataSourceParameters() const{ return m_dataSourceParameters; }

    /**
     * <p>The parameters that Amazon QuickSight uses to connect to your underlying
     * source.</p>
     */
    inline bool DataSourceParametersHasBeenSet() const { return m_dataSourceParametersHasBeenSet; }

    /**
     * <p>The parameters that Amazon QuickSight uses to connect to your underlying
     * source.</p>
     */
    inline void SetDataSourceParameters(const DataSourceParameters& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = value; }

    /**
     * <p>The parameters that Amazon QuickSight uses to connect to your underlying
     * source.</p>
     */
    inline void SetDataSourceParameters(DataSourceParameters&& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = std::move(value); }

    /**
     * <p>The parameters that Amazon QuickSight uses to connect to your underlying
     * source.</p>
     */
    inline UpdateDataSourceRequest& WithDataSourceParameters(const DataSourceParameters& value) { SetDataSourceParameters(value); return *this;}

    /**
     * <p>The parameters that Amazon QuickSight uses to connect to your underlying
     * source.</p>
     */
    inline UpdateDataSourceRequest& WithDataSourceParameters(DataSourceParameters&& value) { SetDataSourceParameters(std::move(value)); return *this;}


    /**
     * <p>The credentials that Amazon QuickSight that uses to connect to your
     * underlying source. Currently, only credentials based on user name and password
     * are supported.</p>
     */
    inline const DataSourceCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The credentials that Amazon QuickSight that uses to connect to your
     * underlying source. Currently, only credentials based on user name and password
     * are supported.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>The credentials that Amazon QuickSight that uses to connect to your
     * underlying source. Currently, only credentials based on user name and password
     * are supported.</p>
     */
    inline void SetCredentials(const DataSourceCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>The credentials that Amazon QuickSight that uses to connect to your
     * underlying source. Currently, only credentials based on user name and password
     * are supported.</p>
     */
    inline void SetCredentials(DataSourceCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>The credentials that Amazon QuickSight that uses to connect to your
     * underlying source. Currently, only credentials based on user name and password
     * are supported.</p>
     */
    inline UpdateDataSourceRequest& WithCredentials(const DataSourceCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The credentials that Amazon QuickSight that uses to connect to your
     * underlying source. Currently, only credentials based on user name and password
     * are supported.</p>
     */
    inline UpdateDataSourceRequest& WithCredentials(DataSourceCredentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>Use this parameter only when you want Amazon QuickSight to use a VPC
     * connection when connecting to your underlying source.</p>
     */
    inline const VpcConnectionProperties& GetVpcConnectionProperties() const{ return m_vpcConnectionProperties; }

    /**
     * <p>Use this parameter only when you want Amazon QuickSight to use a VPC
     * connection when connecting to your underlying source.</p>
     */
    inline bool VpcConnectionPropertiesHasBeenSet() const { return m_vpcConnectionPropertiesHasBeenSet; }

    /**
     * <p>Use this parameter only when you want Amazon QuickSight to use a VPC
     * connection when connecting to your underlying source.</p>
     */
    inline void SetVpcConnectionProperties(const VpcConnectionProperties& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = value; }

    /**
     * <p>Use this parameter only when you want Amazon QuickSight to use a VPC
     * connection when connecting to your underlying source.</p>
     */
    inline void SetVpcConnectionProperties(VpcConnectionProperties&& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = std::move(value); }

    /**
     * <p>Use this parameter only when you want Amazon QuickSight to use a VPC
     * connection when connecting to your underlying source.</p>
     */
    inline UpdateDataSourceRequest& WithVpcConnectionProperties(const VpcConnectionProperties& value) { SetVpcConnectionProperties(value); return *this;}

    /**
     * <p>Use this parameter only when you want Amazon QuickSight to use a VPC
     * connection when connecting to your underlying source.</p>
     */
    inline UpdateDataSourceRequest& WithVpcConnectionProperties(VpcConnectionProperties&& value) { SetVpcConnectionProperties(std::move(value)); return *this;}


    /**
     * <p>Secure Socket Layer (SSL) properties that apply when Amazon QuickSight
     * connects to your underlying source.</p>
     */
    inline const SslProperties& GetSslProperties() const{ return m_sslProperties; }

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when Amazon QuickSight
     * connects to your underlying source.</p>
     */
    inline bool SslPropertiesHasBeenSet() const { return m_sslPropertiesHasBeenSet; }

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when Amazon QuickSight
     * connects to your underlying source.</p>
     */
    inline void SetSslProperties(const SslProperties& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = value; }

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when Amazon QuickSight
     * connects to your underlying source.</p>
     */
    inline void SetSslProperties(SslProperties&& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = std::move(value); }

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when Amazon QuickSight
     * connects to your underlying source.</p>
     */
    inline UpdateDataSourceRequest& WithSslProperties(const SslProperties& value) { SetSslProperties(value); return *this;}

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when Amazon QuickSight
     * connects to your underlying source.</p>
     */
    inline UpdateDataSourceRequest& WithSslProperties(SslProperties&& value) { SetSslProperties(std::move(value)); return *this;}

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
