/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSourceType.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/DataSourceParameters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>
#include <aws/quicksight/model/SslProperties.h>
#include <aws/quicksight/model/DataSourceErrorInfo.h>
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
   * <p>The structure of a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_QUICKSIGHT_API DataSource() = default;
    AWS_QUICKSIGHT_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DataSource& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source. This ID is unique per Amazon Web Services Region
     * for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    DataSource& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
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
    DataSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source. This type indicates which database engine the
     * data source connects to.</p>
     */
    inline DataSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataSource& WithType(DataSourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataSource& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DataSource& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this data source was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DataSource& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that Amazon QuickSight uses to connect to your underlying
     * source. This is a variant type structure. For this structure to be valid, only
     * one of the attributes can be non-null.</p>
     */
    inline const DataSourceParameters& GetDataSourceParameters() const { return m_dataSourceParameters; }
    inline bool DataSourceParametersHasBeenSet() const { return m_dataSourceParametersHasBeenSet; }
    template<typename DataSourceParametersT = DataSourceParameters>
    void SetDataSourceParameters(DataSourceParametersT&& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = std::forward<DataSourceParametersT>(value); }
    template<typename DataSourceParametersT = DataSourceParameters>
    DataSource& WithDataSourceParameters(DataSourceParametersT&& value) { SetDataSourceParameters(std::forward<DataSourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of alternate data source parameters that you want to share for the
     * credentials stored with this data source. The credentials are applied in tandem
     * with the data source parameters when you copy a data source by using a create or
     * update request. The API operation compares the <code>DataSourceParameters</code>
     * structure that's in the request with the structures in the
     * <code>AlternateDataSourceParameters</code> allow list. If the structures are an
     * exact match, the request is allowed to use the credentials from this existing
     * data source. If the <code>AlternateDataSourceParameters</code> list is null, the
     * <code>Credentials</code> originally used with this
     * <code>DataSourceParameters</code> are automatically allowed.</p>
     */
    inline const Aws::Vector<DataSourceParameters>& GetAlternateDataSourceParameters() const { return m_alternateDataSourceParameters; }
    inline bool AlternateDataSourceParametersHasBeenSet() const { return m_alternateDataSourceParametersHasBeenSet; }
    template<typename AlternateDataSourceParametersT = Aws::Vector<DataSourceParameters>>
    void SetAlternateDataSourceParameters(AlternateDataSourceParametersT&& value) { m_alternateDataSourceParametersHasBeenSet = true; m_alternateDataSourceParameters = std::forward<AlternateDataSourceParametersT>(value); }
    template<typename AlternateDataSourceParametersT = Aws::Vector<DataSourceParameters>>
    DataSource& WithAlternateDataSourceParameters(AlternateDataSourceParametersT&& value) { SetAlternateDataSourceParameters(std::forward<AlternateDataSourceParametersT>(value)); return *this;}
    template<typename AlternateDataSourceParametersT = DataSourceParameters>
    DataSource& AddAlternateDataSourceParameters(AlternateDataSourceParametersT&& value) { m_alternateDataSourceParametersHasBeenSet = true; m_alternateDataSourceParameters.emplace_back(std::forward<AlternateDataSourceParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The VPC connection information. You need to use this parameter only when you
     * want QuickSight to use a VPC connection when connecting to your underlying
     * source.</p>
     */
    inline const VpcConnectionProperties& GetVpcConnectionProperties() const { return m_vpcConnectionProperties; }
    inline bool VpcConnectionPropertiesHasBeenSet() const { return m_vpcConnectionPropertiesHasBeenSet; }
    template<typename VpcConnectionPropertiesT = VpcConnectionProperties>
    void SetVpcConnectionProperties(VpcConnectionPropertiesT&& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = std::forward<VpcConnectionPropertiesT>(value); }
    template<typename VpcConnectionPropertiesT = VpcConnectionProperties>
    DataSource& WithVpcConnectionProperties(VpcConnectionPropertiesT&& value) { SetVpcConnectionProperties(std::forward<VpcConnectionPropertiesT>(value)); return *this;}
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
    DataSource& WithSslProperties(SslPropertiesT&& value) { SetSslProperties(std::forward<SslPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error information from the last update or the creation of the data
     * source.</p>
     */
    inline const DataSourceErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = DataSourceErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = DataSourceErrorInfo>
    DataSource& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    DataSource& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSourceType m_type{DataSourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    DataSourceParameters m_dataSourceParameters;
    bool m_dataSourceParametersHasBeenSet = false;

    Aws::Vector<DataSourceParameters> m_alternateDataSourceParameters;
    bool m_alternateDataSourceParametersHasBeenSet = false;

    VpcConnectionProperties m_vpcConnectionProperties;
    bool m_vpcConnectionPropertiesHasBeenSet = false;

    SslProperties m_sslProperties;
    bool m_sslPropertiesHasBeenSet = false;

    DataSourceErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
