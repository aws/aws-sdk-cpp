/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/SelfManagedKafkaStartPosition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/SelfManagedKafkaAccessConfigurationCredentials.h>
#include <aws/pipes/model/SelfManagedKafkaAccessConfigurationVpc.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
   * <p>A <i>self managed</i> cluster refers to any Apache Kafka cluster not hosted
   * by Amazon Web Services. This includes both clusters you manage yourself, as well
   * as those hosted by a third-party provider, such as <a
   * href="https://www.confluent.io/">Confluent Cloud</a>, <a
   * href="https://www.cloudkarafka.com/">CloudKarafka</a>, or <a
   * href="https://redpanda.com/">Redpanda</a>. For more information, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-kafka.html">Apache
   * Kafka streams as a source</a> in the <i>Amazon EventBridge User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeSourceSelfManagedKafkaParameters">AWS
   * API Reference</a></p>
   */
  class PipeSourceSelfManagedKafkaParameters
  {
  public:
    AWS_PIPES_API PipeSourceSelfManagedKafkaParameters() = default;
    AWS_PIPES_API PipeSourceSelfManagedKafkaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeSourceSelfManagedKafkaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline const Aws::String& GetTopicName() const { return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    template<typename TopicNameT = Aws::String>
    void SetTopicName(TopicNameT&& value) { m_topicNameHasBeenSet = true; m_topicName = std::forward<TopicNameT>(value); }
    template<typename TopicNameT = Aws::String>
    PipeSourceSelfManagedKafkaParameters& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position in a stream from which to start reading.</p>
     */
    inline SelfManagedKafkaStartPosition GetStartingPosition() const { return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    inline void SetStartingPosition(SelfManagedKafkaStartPosition value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }
    inline PipeSourceSelfManagedKafkaParameters& WithStartingPosition(SelfManagedKafkaStartPosition value) { SetStartingPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of server URLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalBootstrapServers() const { return m_additionalBootstrapServers; }
    inline bool AdditionalBootstrapServersHasBeenSet() const { return m_additionalBootstrapServersHasBeenSet; }
    template<typename AdditionalBootstrapServersT = Aws::Vector<Aws::String>>
    void SetAdditionalBootstrapServers(AdditionalBootstrapServersT&& value) { m_additionalBootstrapServersHasBeenSet = true; m_additionalBootstrapServers = std::forward<AdditionalBootstrapServersT>(value); }
    template<typename AdditionalBootstrapServersT = Aws::Vector<Aws::String>>
    PipeSourceSelfManagedKafkaParameters& WithAdditionalBootstrapServers(AdditionalBootstrapServersT&& value) { SetAdditionalBootstrapServers(std::forward<AdditionalBootstrapServersT>(value)); return *this;}
    template<typename AdditionalBootstrapServersT = Aws::String>
    PipeSourceSelfManagedKafkaParameters& AddAdditionalBootstrapServers(AdditionalBootstrapServersT&& value) { m_additionalBootstrapServersHasBeenSet = true; m_additionalBootstrapServers.emplace_back(std::forward<AdditionalBootstrapServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const { return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline PipeSourceSelfManagedKafkaParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const { return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline PipeSourceSelfManagedKafkaParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline const Aws::String& GetConsumerGroupID() const { return m_consumerGroupID; }
    inline bool ConsumerGroupIDHasBeenSet() const { return m_consumerGroupIDHasBeenSet; }
    template<typename ConsumerGroupIDT = Aws::String>
    void SetConsumerGroupID(ConsumerGroupIDT&& value) { m_consumerGroupIDHasBeenSet = true; m_consumerGroupID = std::forward<ConsumerGroupIDT>(value); }
    template<typename ConsumerGroupIDT = Aws::String>
    PipeSourceSelfManagedKafkaParameters& WithConsumerGroupID(ConsumerGroupIDT&& value) { SetConsumerGroupID(std::forward<ConsumerGroupIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline const SelfManagedKafkaAccessConfigurationCredentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = SelfManagedKafkaAccessConfigurationCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = SelfManagedKafkaAccessConfigurationCredentials>
    PipeSourceSelfManagedKafkaParameters& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline const Aws::String& GetServerRootCaCertificate() const { return m_serverRootCaCertificate; }
    inline bool ServerRootCaCertificateHasBeenSet() const { return m_serverRootCaCertificateHasBeenSet; }
    template<typename ServerRootCaCertificateT = Aws::String>
    void SetServerRootCaCertificate(ServerRootCaCertificateT&& value) { m_serverRootCaCertificateHasBeenSet = true; m_serverRootCaCertificate = std::forward<ServerRootCaCertificateT>(value); }
    template<typename ServerRootCaCertificateT = Aws::String>
    PipeSourceSelfManagedKafkaParameters& WithServerRootCaCertificate(ServerRootCaCertificateT&& value) { SetServerRootCaCertificate(std::forward<ServerRootCaCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure specifies the VPC subnets and security groups for the stream,
     * and whether a public IP address is to be used.</p>
     */
    inline const SelfManagedKafkaAccessConfigurationVpc& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = SelfManagedKafkaAccessConfigurationVpc>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = SelfManagedKafkaAccessConfigurationVpc>
    PipeSourceSelfManagedKafkaParameters& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    SelfManagedKafkaStartPosition m_startingPosition{SelfManagedKafkaStartPosition::NOT_SET};
    bool m_startingPositionHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalBootstrapServers;
    bool m_additionalBootstrapServersHasBeenSet = false;

    int m_batchSize{0};
    bool m_batchSizeHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds{0};
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;

    Aws::String m_consumerGroupID;
    bool m_consumerGroupIDHasBeenSet = false;

    SelfManagedKafkaAccessConfigurationCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_serverRootCaCertificate;
    bool m_serverRootCaCertificateHasBeenSet = false;

    SelfManagedKafkaAccessConfigurationVpc m_vpc;
    bool m_vpcHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
