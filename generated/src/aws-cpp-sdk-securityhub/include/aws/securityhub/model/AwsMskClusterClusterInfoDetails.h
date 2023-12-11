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
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoDetails();
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Includes encryption-related information, such as the KMS key used for
     * encrypting data at rest and whether you want Amazon MSK to encrypt your data in
     * transit.</p>
     */
    inline const AwsMskClusterClusterInfoEncryptionInfoDetails& GetEncryptionInfo() const{ return m_encryptionInfo; }

    /**
     * <p> Includes encryption-related information, such as the KMS key used for
     * encrypting data at rest and whether you want Amazon MSK to encrypt your data in
     * transit.</p>
     */
    inline bool EncryptionInfoHasBeenSet() const { return m_encryptionInfoHasBeenSet; }

    /**
     * <p> Includes encryption-related information, such as the KMS key used for
     * encrypting data at rest and whether you want Amazon MSK to encrypt your data in
     * transit.</p>
     */
    inline void SetEncryptionInfo(const AwsMskClusterClusterInfoEncryptionInfoDetails& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = value; }

    /**
     * <p> Includes encryption-related information, such as the KMS key used for
     * encrypting data at rest and whether you want Amazon MSK to encrypt your data in
     * transit.</p>
     */
    inline void SetEncryptionInfo(AwsMskClusterClusterInfoEncryptionInfoDetails&& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = std::move(value); }

    /**
     * <p> Includes encryption-related information, such as the KMS key used for
     * encrypting data at rest and whether you want Amazon MSK to encrypt your data in
     * transit.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithEncryptionInfo(const AwsMskClusterClusterInfoEncryptionInfoDetails& value) { SetEncryptionInfo(value); return *this;}

    /**
     * <p> Includes encryption-related information, such as the KMS key used for
     * encrypting data at rest and whether you want Amazon MSK to encrypt your data in
     * transit.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithEncryptionInfo(AwsMskClusterClusterInfoEncryptionInfoDetails&& value) { SetEncryptionInfo(std::move(value)); return *this;}


    /**
     * <p> The current version of the cluster.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p> The current version of the cluster.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p> The current version of the cluster.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p> The current version of the cluster.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p> The current version of the cluster.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p> The current version of the cluster.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p> The current version of the cluster.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p> The current version of the cluster.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p> The number of broker nodes in the cluster.</p>
     */
    inline int GetNumberOfBrokerNodes() const{ return m_numberOfBrokerNodes; }

    /**
     * <p> The number of broker nodes in the cluster.</p>
     */
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }

    /**
     * <p> The number of broker nodes in the cluster.</p>
     */
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }

    /**
     * <p> The number of broker nodes in the cluster.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}


    /**
     * <p> The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p> The name of the cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p> The name of the cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p> The name of the cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p> The name of the cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p> The name of the cluster.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p> The name of the cluster.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p> The name of the cluster.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p> Provides information for different modes of client authentication.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationDetails& GetClientAuthentication() const{ return m_clientAuthentication; }

    /**
     * <p> Provides information for different modes of client authentication.</p>
     */
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }

    /**
     * <p> Provides information for different modes of client authentication.</p>
     */
    inline void SetClientAuthentication(const AwsMskClusterClusterInfoClientAuthenticationDetails& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = value; }

    /**
     * <p> Provides information for different modes of client authentication.</p>
     */
    inline void SetClientAuthentication(AwsMskClusterClusterInfoClientAuthenticationDetails&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::move(value); }

    /**
     * <p> Provides information for different modes of client authentication.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithClientAuthentication(const AwsMskClusterClusterInfoClientAuthenticationDetails& value) { SetClientAuthentication(value); return *this;}

    /**
     * <p> Provides information for different modes of client authentication.</p>
     */
    inline AwsMskClusterClusterInfoDetails& WithClientAuthentication(AwsMskClusterClusterInfoClientAuthenticationDetails&& value) { SetClientAuthentication(std::move(value)); return *this;}


    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline const Aws::String& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }

    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }

    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline void SetEnhancedMonitoring(const Aws::String& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }

    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline void SetEnhancedMonitoring(Aws::String&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::move(value); }

    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline void SetEnhancedMonitoring(const char* value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring.assign(value); }

    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline AwsMskClusterClusterInfoDetails& WithEnhancedMonitoring(const Aws::String& value) { SetEnhancedMonitoring(value); return *this;}

    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline AwsMskClusterClusterInfoDetails& WithEnhancedMonitoring(Aws::String&& value) { SetEnhancedMonitoring(std::move(value)); return *this;}

    /**
     * <p> Specifies the level of monitoring for the cluster. </p>
     */
    inline AwsMskClusterClusterInfoDetails& WithEnhancedMonitoring(const char* value) { SetEnhancedMonitoring(value); return *this;}

  private:

    AwsMskClusterClusterInfoEncryptionInfoDetails m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    int m_numberOfBrokerNodes;
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
