/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/FilterCriteria.h>
#include <aws/pipes/model/UpdatePipeSourceKinesisStreamParameters.h>
#include <aws/pipes/model/UpdatePipeSourceDynamoDBStreamParameters.h>
#include <aws/pipes/model/UpdatePipeSourceSqsQueueParameters.h>
#include <aws/pipes/model/UpdatePipeSourceActiveMQBrokerParameters.h>
#include <aws/pipes/model/UpdatePipeSourceRabbitMQBrokerParameters.h>
#include <aws/pipes/model/UpdatePipeSourceManagedStreamingKafkaParameters.h>
#include <aws/pipes/model/UpdatePipeSourceSelfManagedKafkaParameters.h>
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
   * <p>The parameters required to set up a source for your pipe.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/UpdatePipeSourceParameters">AWS
   * API Reference</a></p>
   */
  class UpdatePipeSourceParameters
  {
  public:
    AWS_PIPES_API UpdatePipeSourceParameters() = default;
    AWS_PIPES_API UpdatePipeSourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API UpdatePipeSourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The collection of event patterns used to filter events.</p> <p>To remove a
     * filter, specify a <code>FilterCriteria</code> object with an empty array of
     * <code>Filter</code> objects.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = FilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = FilterCriteria>
    UpdatePipeSourceParameters& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline const UpdatePipeSourceKinesisStreamParameters& GetKinesisStreamParameters() const { return m_kinesisStreamParameters; }
    inline bool KinesisStreamParametersHasBeenSet() const { return m_kinesisStreamParametersHasBeenSet; }
    template<typename KinesisStreamParametersT = UpdatePipeSourceKinesisStreamParameters>
    void SetKinesisStreamParameters(KinesisStreamParametersT&& value) { m_kinesisStreamParametersHasBeenSet = true; m_kinesisStreamParameters = std::forward<KinesisStreamParametersT>(value); }
    template<typename KinesisStreamParametersT = UpdatePipeSourceKinesisStreamParameters>
    UpdatePipeSourceParameters& WithKinesisStreamParameters(KinesisStreamParametersT&& value) { SetKinesisStreamParameters(std::forward<KinesisStreamParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline const UpdatePipeSourceDynamoDBStreamParameters& GetDynamoDBStreamParameters() const { return m_dynamoDBStreamParameters; }
    inline bool DynamoDBStreamParametersHasBeenSet() const { return m_dynamoDBStreamParametersHasBeenSet; }
    template<typename DynamoDBStreamParametersT = UpdatePipeSourceDynamoDBStreamParameters>
    void SetDynamoDBStreamParameters(DynamoDBStreamParametersT&& value) { m_dynamoDBStreamParametersHasBeenSet = true; m_dynamoDBStreamParameters = std::forward<DynamoDBStreamParametersT>(value); }
    template<typename DynamoDBStreamParametersT = UpdatePipeSourceDynamoDBStreamParameters>
    UpdatePipeSourceParameters& WithDynamoDBStreamParameters(DynamoDBStreamParametersT&& value) { SetDynamoDBStreamParameters(std::forward<DynamoDBStreamParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline const UpdatePipeSourceSqsQueueParameters& GetSqsQueueParameters() const { return m_sqsQueueParameters; }
    inline bool SqsQueueParametersHasBeenSet() const { return m_sqsQueueParametersHasBeenSet; }
    template<typename SqsQueueParametersT = UpdatePipeSourceSqsQueueParameters>
    void SetSqsQueueParameters(SqsQueueParametersT&& value) { m_sqsQueueParametersHasBeenSet = true; m_sqsQueueParameters = std::forward<SqsQueueParametersT>(value); }
    template<typename SqsQueueParametersT = UpdatePipeSourceSqsQueueParameters>
    UpdatePipeSourceParameters& WithSqsQueueParameters(SqsQueueParametersT&& value) { SetSqsQueueParameters(std::forward<SqsQueueParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline const UpdatePipeSourceActiveMQBrokerParameters& GetActiveMQBrokerParameters() const { return m_activeMQBrokerParameters; }
    inline bool ActiveMQBrokerParametersHasBeenSet() const { return m_activeMQBrokerParametersHasBeenSet; }
    template<typename ActiveMQBrokerParametersT = UpdatePipeSourceActiveMQBrokerParameters>
    void SetActiveMQBrokerParameters(ActiveMQBrokerParametersT&& value) { m_activeMQBrokerParametersHasBeenSet = true; m_activeMQBrokerParameters = std::forward<ActiveMQBrokerParametersT>(value); }
    template<typename ActiveMQBrokerParametersT = UpdatePipeSourceActiveMQBrokerParameters>
    UpdatePipeSourceParameters& WithActiveMQBrokerParameters(ActiveMQBrokerParametersT&& value) { SetActiveMQBrokerParameters(std::forward<ActiveMQBrokerParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline const UpdatePipeSourceRabbitMQBrokerParameters& GetRabbitMQBrokerParameters() const { return m_rabbitMQBrokerParameters; }
    inline bool RabbitMQBrokerParametersHasBeenSet() const { return m_rabbitMQBrokerParametersHasBeenSet; }
    template<typename RabbitMQBrokerParametersT = UpdatePipeSourceRabbitMQBrokerParameters>
    void SetRabbitMQBrokerParameters(RabbitMQBrokerParametersT&& value) { m_rabbitMQBrokerParametersHasBeenSet = true; m_rabbitMQBrokerParameters = std::forward<RabbitMQBrokerParametersT>(value); }
    template<typename RabbitMQBrokerParametersT = UpdatePipeSourceRabbitMQBrokerParameters>
    UpdatePipeSourceParameters& WithRabbitMQBrokerParameters(RabbitMQBrokerParametersT&& value) { SetRabbitMQBrokerParameters(std::forward<RabbitMQBrokerParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline const UpdatePipeSourceManagedStreamingKafkaParameters& GetManagedStreamingKafkaParameters() const { return m_managedStreamingKafkaParameters; }
    inline bool ManagedStreamingKafkaParametersHasBeenSet() const { return m_managedStreamingKafkaParametersHasBeenSet; }
    template<typename ManagedStreamingKafkaParametersT = UpdatePipeSourceManagedStreamingKafkaParameters>
    void SetManagedStreamingKafkaParameters(ManagedStreamingKafkaParametersT&& value) { m_managedStreamingKafkaParametersHasBeenSet = true; m_managedStreamingKafkaParameters = std::forward<ManagedStreamingKafkaParametersT>(value); }
    template<typename ManagedStreamingKafkaParametersT = UpdatePipeSourceManagedStreamingKafkaParameters>
    UpdatePipeSourceParameters& WithManagedStreamingKafkaParameters(ManagedStreamingKafkaParametersT&& value) { SetManagedStreamingKafkaParameters(std::forward<ManagedStreamingKafkaParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     * <p>A <i>self managed</i> cluster refers to any Apache Kafka cluster not hosted
     * by Amazon Web Services. This includes both clusters you manage yourself, as well
     * as those hosted by a third-party provider, such as <a
     * href="https://www.confluent.io/">Confluent Cloud</a>, <a
     * href="https://www.cloudkarafka.com/">CloudKarafka</a>, or <a
     * href="https://redpanda.com/">Redpanda</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-kafka.html">Apache
     * Kafka streams as a source</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const UpdatePipeSourceSelfManagedKafkaParameters& GetSelfManagedKafkaParameters() const { return m_selfManagedKafkaParameters; }
    inline bool SelfManagedKafkaParametersHasBeenSet() const { return m_selfManagedKafkaParametersHasBeenSet; }
    template<typename SelfManagedKafkaParametersT = UpdatePipeSourceSelfManagedKafkaParameters>
    void SetSelfManagedKafkaParameters(SelfManagedKafkaParametersT&& value) { m_selfManagedKafkaParametersHasBeenSet = true; m_selfManagedKafkaParameters = std::forward<SelfManagedKafkaParametersT>(value); }
    template<typename SelfManagedKafkaParametersT = UpdatePipeSourceSelfManagedKafkaParameters>
    UpdatePipeSourceParameters& WithSelfManagedKafkaParameters(SelfManagedKafkaParametersT&& value) { SetSelfManagedKafkaParameters(std::forward<SelfManagedKafkaParametersT>(value)); return *this;}
    ///@}
  private:

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    UpdatePipeSourceKinesisStreamParameters m_kinesisStreamParameters;
    bool m_kinesisStreamParametersHasBeenSet = false;

    UpdatePipeSourceDynamoDBStreamParameters m_dynamoDBStreamParameters;
    bool m_dynamoDBStreamParametersHasBeenSet = false;

    UpdatePipeSourceSqsQueueParameters m_sqsQueueParameters;
    bool m_sqsQueueParametersHasBeenSet = false;

    UpdatePipeSourceActiveMQBrokerParameters m_activeMQBrokerParameters;
    bool m_activeMQBrokerParametersHasBeenSet = false;

    UpdatePipeSourceRabbitMQBrokerParameters m_rabbitMQBrokerParameters;
    bool m_rabbitMQBrokerParametersHasBeenSet = false;

    UpdatePipeSourceManagedStreamingKafkaParameters m_managedStreamingKafkaParameters;
    bool m_managedStreamingKafkaParametersHasBeenSet = false;

    UpdatePipeSourceSelfManagedKafkaParameters m_selfManagedKafkaParameters;
    bool m_selfManagedKafkaParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
