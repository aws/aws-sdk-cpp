/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoEncryptionInfoDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provide details about an Amazon Managed Streaming for Apache Kafka (Amazon
   * MSK) cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMskClusterClusterInfoDetails">AWS
   * API Reference</a></p>
   */
  class AwsMskClusterClusterInfoDetails
  {
  public:
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoDetails() = default;
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Includes encryption-related information, such as the KMS key used for
     * encrypting data at rest and whether you want Amazon MSK to encrypt your data in
     * transit.</p>
     */
    inline const AwsMskClusterClusterInfoEncryptionInfoDetails& GetEncryptionInfo() const { return m_encryptionInfo; }
    inline bool EncryptionInfoHasBeenSet() const { return m_encryptionInfoHasBeenSet; }
    template<typename EncryptionInfoT = AwsMskClusterClusterInfoEncryptionInfoDetails>
    void SetEncryptionInfo(EncryptionInfoT&& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = std::forward<EncryptionInfoT>(value); }
    template<typename EncryptionInfoT = AwsMskClusterClusterInfoEncryptionInfoDetails>
    AwsMskClusterClusterInfoDetails& WithEncryptionInfo(EncryptionInfoT&& value) { SetEncryptionInfo(std::forward<EncryptionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current version of the cluster.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    AwsMskClusterClusterInfoDetails& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of broker nodes in the cluster.</p>
     */
    inline int GetNumberOfBrokerNodes() const { return m_numberOfBrokerNodes; }
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }
    inline AwsMskClusterClusterInfoDetails& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    AwsMskClusterClusterInfoDetails& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information for different modes of client authentication.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationDetails& GetClientAuthentication() const { return m_clientAuthentication; }
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }
    template<typename ClientAuthenticationT = AwsMskClusterClusterInfoClientAuthenticationDetails>
    void SetClientAuthentication(ClientAuthenticationT&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::forward<ClientAuthenticationT>(value); }
    template<typename ClientAuthenticationT = AwsMskClusterClusterInfoClientAuthenticationDetails>
    AwsMskClusterClusterInfoDetails& WithClientAuthentication(ClientAuthenticationT&& value) { SetClientAuthentication(std::forward<ClientAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline const Aws::String& GetEnhancedMonitoring() const { return m_enhancedMonitoring; }
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
    template<typename EnhancedMonitoringT = Aws::String>
    void SetEnhancedMonitoring(EnhancedMonitoringT&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::forward<EnhancedMonitoringT>(value); }
    template<typename EnhancedMonitoringT = Aws::String>
    AwsMskClusterClusterInfoDetails& WithEnhancedMonitoring(EnhancedMonitoringT&& value) { SetEnhancedMonitoring(std::forward<EnhancedMonitoringT>(value)); return *this;}
    ///@}
  private:

    AwsMskClusterClusterInfoEncryptionInfoDetails m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    int m_numberOfBrokerNodes{0};
    bool m_numberOfBrokerNodesHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    AwsMskClusterClusterInfoClientAuthenticationDetails m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;

    Aws::String m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
