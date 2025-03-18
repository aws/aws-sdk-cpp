/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The settings for encrypting data in transit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails">AWS
   * API Reference</a></p>
   */
  class AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails
  {
  public:
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails() = default;
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> When set to <code>true</code>, it indicates that data communication among
     * the broker nodes of the cluster is encrypted. When set to <code>false</code>,
     * the communication happens in plain text. The default value is
     * <code>true</code>.</p>
     */
    inline bool GetInCluster() const { return m_inCluster; }
    inline bool InClusterHasBeenSet() const { return m_inClusterHasBeenSet; }
    inline void SetInCluster(bool value) { m_inClusterHasBeenSet = true; m_inCluster = value; }
    inline AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails& WithInCluster(bool value) { SetInCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the encryption setting for data in transit between clients and
     * brokers.</p>
     */
    inline const Aws::String& GetClientBroker() const { return m_clientBroker; }
    inline bool ClientBrokerHasBeenSet() const { return m_clientBrokerHasBeenSet; }
    template<typename ClientBrokerT = Aws::String>
    void SetClientBroker(ClientBrokerT&& value) { m_clientBrokerHasBeenSet = true; m_clientBroker = std::forward<ClientBrokerT>(value); }
    template<typename ClientBrokerT = Aws::String>
    AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails& WithClientBroker(ClientBrokerT&& value) { SetClientBroker(std::forward<ClientBrokerT>(value)); return *this;}
    ///@}
  private:

    bool m_inCluster{false};
    bool m_inClusterHasBeenSet = false;

    Aws::String m_clientBroker;
    bool m_clientBrokerHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
