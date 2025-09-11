/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RedshiftIAMParameters.h>
#include <aws/quicksight/model/IdentityCenterConfiguration.h>
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
   * <p>The parameters for Amazon Redshift. The <code>ClusterId</code> field can be
   * blank if <code>Host</code> and <code>Port</code> are both set. The
   * <code>Host</code> and <code>Port</code> fields can be blank if the
   * <code>ClusterId</code> field is set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RedshiftParameters">AWS
   * API Reference</a></p>
   */
  class RedshiftParameters
  {
  public:
    AWS_QUICKSIGHT_API RedshiftParameters() = default;
    AWS_QUICKSIGHT_API RedshiftParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RedshiftParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Host. This field can be blank if <code>ClusterId</code> is provided.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    RedshiftParameters& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Port. This field can be blank if the <code>ClusterId</code> is provided.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RedshiftParameters& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    RedshiftParameters& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cluster ID. This field can be blank if the <code>Host</code> and
     * <code>Port</code> are provided.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    RedshiftParameters& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that uses IAM authentication to grant QuickSight access
     * to your cluster. This parameter can be used instead of <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DataSourceCredentials.html">DataSourceCredentials</a>.</p>
     */
    inline const RedshiftIAMParameters& GetIAMParameters() const { return m_iAMParameters; }
    inline bool IAMParametersHasBeenSet() const { return m_iAMParametersHasBeenSet; }
    template<typename IAMParametersT = RedshiftIAMParameters>
    void SetIAMParameters(IAMParametersT&& value) { m_iAMParametersHasBeenSet = true; m_iAMParameters = std::forward<IAMParametersT>(value); }
    template<typename IAMParametersT = RedshiftIAMParameters>
    RedshiftParameters& WithIAMParameters(IAMParametersT&& value) { SetIAMParameters(std::forward<IAMParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that configures IAM Identity Center authentication to
     * grant QuickSight access to your cluster.</p> <p>This parameter can only be
     * specified if your QuickSight account is configured with IAM Identity Center.</p>
     */
    inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
    inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value); }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    RedshiftParameters& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    RedshiftIAMParameters m_iAMParameters;
    bool m_iAMParametersHasBeenSet = false;

    IdentityCenterConfiguration m_identityCenterConfiguration;
    bool m_identityCenterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
