/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSourceParameters.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>
#include <aws/quicksight/model/SslProperties.h>
#include <aws/quicksight/model/AssetBundleImportJobDataSourceCredentials.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The override parameters for a single data source that is being
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDataSourceOverrideParameters">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDataSourceOverrideParameters
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideParameters();
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideParameters& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideParameters& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideParameters& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>A new name for the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A new name for the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A new name for the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A new name for the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A new name for the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A new name for the data source.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideParameters& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A new name for the data source.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideParameters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A new name for the data source.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideParameters& WithName(const char* value) { SetName(value); return *this;}


    
    inline const DataSourceParameters& GetDataSourceParameters() const{ return m_dataSourceParameters; }

    
    inline bool DataSourceParametersHasBeenSet() const { return m_dataSourceParametersHasBeenSet; }

    
    inline void SetDataSourceParameters(const DataSourceParameters& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = value; }

    
    inline void SetDataSourceParameters(DataSourceParameters&& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = std::move(value); }

    
    inline AssetBundleImportJobDataSourceOverrideParameters& WithDataSourceParameters(const DataSourceParameters& value) { SetDataSourceParameters(value); return *this;}

    
    inline AssetBundleImportJobDataSourceOverrideParameters& WithDataSourceParameters(DataSourceParameters&& value) { SetDataSourceParameters(std::move(value)); return *this;}


    
    inline const VpcConnectionProperties& GetVpcConnectionProperties() const{ return m_vpcConnectionProperties; }

    
    inline bool VpcConnectionPropertiesHasBeenSet() const { return m_vpcConnectionPropertiesHasBeenSet; }

    
    inline void SetVpcConnectionProperties(const VpcConnectionProperties& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = value; }

    
    inline void SetVpcConnectionProperties(VpcConnectionProperties&& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = std::move(value); }

    
    inline AssetBundleImportJobDataSourceOverrideParameters& WithVpcConnectionProperties(const VpcConnectionProperties& value) { SetVpcConnectionProperties(value); return *this;}

    
    inline AssetBundleImportJobDataSourceOverrideParameters& WithVpcConnectionProperties(VpcConnectionProperties&& value) { SetVpcConnectionProperties(std::move(value)); return *this;}


    
    inline const SslProperties& GetSslProperties() const{ return m_sslProperties; }

    
    inline bool SslPropertiesHasBeenSet() const { return m_sslPropertiesHasBeenSet; }

    
    inline void SetSslProperties(const SslProperties& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = value; }

    
    inline void SetSslProperties(SslProperties&& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = std::move(value); }

    
    inline AssetBundleImportJobDataSourceOverrideParameters& WithSslProperties(const SslProperties& value) { SetSslProperties(value); return *this;}

    
    inline AssetBundleImportJobDataSourceOverrideParameters& WithSslProperties(SslProperties&& value) { SetSslProperties(std::move(value)); return *this;}


    /**
     * <p>An optional structure that provides the credentials to be used to create the
     * imported data source.</p>
     */
    inline const AssetBundleImportJobDataSourceCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>An optional structure that provides the credentials to be used to create the
     * imported data source.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>An optional structure that provides the credentials to be used to create the
     * imported data source.</p>
     */
    inline void SetCredentials(const AssetBundleImportJobDataSourceCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>An optional structure that provides the credentials to be used to create the
     * imported data source.</p>
     */
    inline void SetCredentials(AssetBundleImportJobDataSourceCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>An optional structure that provides the credentials to be used to create the
     * imported data source.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideParameters& WithCredentials(const AssetBundleImportJobDataSourceCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>An optional structure that provides the credentials to be used to create the
     * imported data source.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideParameters& WithCredentials(AssetBundleImportJobDataSourceCredentials&& value) { SetCredentials(std::move(value)); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSourceParameters m_dataSourceParameters;
    bool m_dataSourceParametersHasBeenSet = false;

    VpcConnectionProperties m_vpcConnectionProperties;
    bool m_vpcConnectionPropertiesHasBeenSet = false;

    SslProperties m_sslProperties;
    bool m_sslPropertiesHasBeenSet = false;

    AssetBundleImportJobDataSourceCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
