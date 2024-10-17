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
    AWS_PIPES_API PipeSourceSelfManagedKafkaParameters();
    AWS_PIPES_API PipeSourceSelfManagedKafkaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeSourceSelfManagedKafkaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }
    inline PipeSourceSelfManagedKafkaParameters& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithTopicName(const char* value) { SetTopicName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position in a stream from which to start reading.</p>
     */
    inline const SelfManagedKafkaStartPosition& GetStartingPosition() const{ return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    inline void SetStartingPosition(const SelfManagedKafkaStartPosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }
    inline void SetStartingPosition(SelfManagedKafkaStartPosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }
    inline PipeSourceSelfManagedKafkaParameters& WithStartingPosition(const SelfManagedKafkaStartPosition& value) { SetStartingPosition(value); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithStartingPosition(SelfManagedKafkaStartPosition&& value) { SetStartingPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of server URLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalBootstrapServers() const{ return m_additionalBootstrapServers; }
    inline bool AdditionalBootstrapServersHasBeenSet() const { return m_additionalBootstrapServersHasBeenSet; }
    inline void SetAdditionalBootstrapServers(const Aws::Vector<Aws::String>& value) { m_additionalBootstrapServersHasBeenSet = true; m_additionalBootstrapServers = value; }
    inline void SetAdditionalBootstrapServers(Aws::Vector<Aws::String>&& value) { m_additionalBootstrapServersHasBeenSet = true; m_additionalBootstrapServers = std::move(value); }
    inline PipeSourceSelfManagedKafkaParameters& WithAdditionalBootstrapServers(const Aws::Vector<Aws::String>& value) { SetAdditionalBootstrapServers(value); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithAdditionalBootstrapServers(Aws::Vector<Aws::String>&& value) { SetAdditionalBootstrapServers(std::move(value)); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& AddAdditionalBootstrapServers(const Aws::String& value) { m_additionalBootstrapServersHasBeenSet = true; m_additionalBootstrapServers.push_back(value); return *this; }
    inline PipeSourceSelfManagedKafkaParameters& AddAdditionalBootstrapServers(Aws::String&& value) { m_additionalBootstrapServersHasBeenSet = true; m_additionalBootstrapServers.push_back(std::move(value)); return *this; }
    inline PipeSourceSelfManagedKafkaParameters& AddAdditionalBootstrapServers(const char* value) { m_additionalBootstrapServersHasBeenSet = true; m_additionalBootstrapServers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline PipeSourceSelfManagedKafkaParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline PipeSourceSelfManagedKafkaParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline const Aws::String& GetConsumerGroupID() const{ return m_consumerGroupID; }
    inline bool ConsumerGroupIDHasBeenSet() const { return m_consumerGroupIDHasBeenSet; }
    inline void SetConsumerGroupID(const Aws::String& value) { m_consumerGroupIDHasBeenSet = true; m_consumerGroupID = value; }
    inline void SetConsumerGroupID(Aws::String&& value) { m_consumerGroupIDHasBeenSet = true; m_consumerGroupID = std::move(value); }
    inline void SetConsumerGroupID(const char* value) { m_consumerGroupIDHasBeenSet = true; m_consumerGroupID.assign(value); }
    inline PipeSourceSelfManagedKafkaParameters& WithConsumerGroupID(const Aws::String& value) { SetConsumerGroupID(value); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithConsumerGroupID(Aws::String&& value) { SetConsumerGroupID(std::move(value)); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithConsumerGroupID(const char* value) { SetConsumerGroupID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline const SelfManagedKafkaAccessConfigurationCredentials& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const SelfManagedKafkaAccessConfigurationCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(SelfManagedKafkaAccessConfigurationCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline PipeSourceSelfManagedKafkaParameters& WithCredentials(const SelfManagedKafkaAccessConfigurationCredentials& value) { SetCredentials(value); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithCredentials(SelfManagedKafkaAccessConfigurationCredentials&& value) { SetCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline const Aws::String& GetServerRootCaCertificate() const{ return m_serverRootCaCertificate; }
    inline bool ServerRootCaCertificateHasBeenSet() const { return m_serverRootCaCertificateHasBeenSet; }
    inline void SetServerRootCaCertificate(const Aws::String& value) { m_serverRootCaCertificateHasBeenSet = true; m_serverRootCaCertificate = value; }
    inline void SetServerRootCaCertificate(Aws::String&& value) { m_serverRootCaCertificateHasBeenSet = true; m_serverRootCaCertificate = std::move(value); }
    inline void SetServerRootCaCertificate(const char* value) { m_serverRootCaCertificateHasBeenSet = true; m_serverRootCaCertificate.assign(value); }
    inline PipeSourceSelfManagedKafkaParameters& WithServerRootCaCertificate(const Aws::String& value) { SetServerRootCaCertificate(value); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithServerRootCaCertificate(Aws::String&& value) { SetServerRootCaCertificate(std::move(value)); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithServerRootCaCertificate(const char* value) { SetServerRootCaCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure specifies the VPC subnets and security groups for the stream,
     * and whether a public IP address is to be used.</p>
     */
    inline const SelfManagedKafkaAccessConfigurationVpc& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const SelfManagedKafkaAccessConfigurationVpc& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(SelfManagedKafkaAccessConfigurationVpc&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline PipeSourceSelfManagedKafkaParameters& WithVpc(const SelfManagedKafkaAccessConfigurationVpc& value) { SetVpc(value); return *this;}
    inline PipeSourceSelfManagedKafkaParameters& WithVpc(SelfManagedKafkaAccessConfigurationVpc&& value) { SetVpc(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    SelfManagedKafkaStartPosition m_startingPosition;
    bool m_startingPositionHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalBootstrapServers;
    bool m_additionalBootstrapServersHasBeenSet = false;

    int m_batchSize;
    bool m_batchSizeHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds;
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
