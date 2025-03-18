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
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideParameters() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the data source to apply overrides to.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    AssetBundleImportJobDataSourceOverrideParameters& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetBundleImportJobDataSourceOverrideParameters& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataSourceParameters& GetDataSourceParameters() const { return m_dataSourceParameters; }
    inline bool DataSourceParametersHasBeenSet() const { return m_dataSourceParametersHasBeenSet; }
    template<typename DataSourceParametersT = DataSourceParameters>
    void SetDataSourceParameters(DataSourceParametersT&& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = std::forward<DataSourceParametersT>(value); }
    template<typename DataSourceParametersT = DataSourceParameters>
    AssetBundleImportJobDataSourceOverrideParameters& WithDataSourceParameters(DataSourceParametersT&& value) { SetDataSourceParameters(std::forward<DataSourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConnectionProperties& GetVpcConnectionProperties() const { return m_vpcConnectionProperties; }
    inline bool VpcConnectionPropertiesHasBeenSet() const { return m_vpcConnectionPropertiesHasBeenSet; }
    template<typename VpcConnectionPropertiesT = VpcConnectionProperties>
    void SetVpcConnectionProperties(VpcConnectionPropertiesT&& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = std::forward<VpcConnectionPropertiesT>(value); }
    template<typename VpcConnectionPropertiesT = VpcConnectionProperties>
    AssetBundleImportJobDataSourceOverrideParameters& WithVpcConnectionProperties(VpcConnectionPropertiesT&& value) { SetVpcConnectionProperties(std::forward<VpcConnectionPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SslProperties& GetSslProperties() const { return m_sslProperties; }
    inline bool SslPropertiesHasBeenSet() const { return m_sslPropertiesHasBeenSet; }
    template<typename SslPropertiesT = SslProperties>
    void SetSslProperties(SslPropertiesT&& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = std::forward<SslPropertiesT>(value); }
    template<typename SslPropertiesT = SslProperties>
    AssetBundleImportJobDataSourceOverrideParameters& WithSslProperties(SslPropertiesT&& value) { SetSslProperties(std::forward<SslPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional structure that provides the credentials to be used to create the
     * imported data source.</p>
     */
    inline const AssetBundleImportJobDataSourceCredentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = AssetBundleImportJobDataSourceCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = AssetBundleImportJobDataSourceCredentials>
    AssetBundleImportJobDataSourceOverrideParameters& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}
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
