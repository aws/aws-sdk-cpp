/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/PipeSourceActiveMQBrokerParameters.h>
#include <aws/pipes/model/PipeSourceDynamoDBStreamParameters.h>
#include <aws/pipes/model/FilterCriteria.h>
#include <aws/pipes/model/PipeSourceKinesisStreamParameters.h>
#include <aws/pipes/model/PipeSourceManagedStreamingKafkaParameters.h>
#include <aws/pipes/model/PipeSourceRabbitMQBrokerParameters.h>
#include <aws/pipes/model/PipeSourceSelfManagedKafkaParameters.h>
#include <aws/pipes/model/PipeSourceSqsQueueParameters.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeSourceParameters">AWS
   * API Reference</a></p>
   */
  class PipeSourceParameters
  {
  public:
    AWS_PIPES_API PipeSourceParameters();
    AWS_PIPES_API PipeSourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeSourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline const PipeSourceActiveMQBrokerParameters& GetActiveMQBrokerParameters() const{ return m_activeMQBrokerParameters; }

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline bool ActiveMQBrokerParametersHasBeenSet() const { return m_activeMQBrokerParametersHasBeenSet; }

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline void SetActiveMQBrokerParameters(const PipeSourceActiveMQBrokerParameters& value) { m_activeMQBrokerParametersHasBeenSet = true; m_activeMQBrokerParameters = value; }

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline void SetActiveMQBrokerParameters(PipeSourceActiveMQBrokerParameters&& value) { m_activeMQBrokerParametersHasBeenSet = true; m_activeMQBrokerParameters = std::move(value); }

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline PipeSourceParameters& WithActiveMQBrokerParameters(const PipeSourceActiveMQBrokerParameters& value) { SetActiveMQBrokerParameters(value); return *this;}

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline PipeSourceParameters& WithActiveMQBrokerParameters(PipeSourceActiveMQBrokerParameters&& value) { SetActiveMQBrokerParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline const PipeSourceDynamoDBStreamParameters& GetDynamoDBStreamParameters() const{ return m_dynamoDBStreamParameters; }

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline bool DynamoDBStreamParametersHasBeenSet() const { return m_dynamoDBStreamParametersHasBeenSet; }

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline void SetDynamoDBStreamParameters(const PipeSourceDynamoDBStreamParameters& value) { m_dynamoDBStreamParametersHasBeenSet = true; m_dynamoDBStreamParameters = value; }

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline void SetDynamoDBStreamParameters(PipeSourceDynamoDBStreamParameters&& value) { m_dynamoDBStreamParametersHasBeenSet = true; m_dynamoDBStreamParameters = std::move(value); }

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline PipeSourceParameters& WithDynamoDBStreamParameters(const PipeSourceDynamoDBStreamParameters& value) { SetDynamoDBStreamParameters(value); return *this;}

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline PipeSourceParameters& WithDynamoDBStreamParameters(PipeSourceDynamoDBStreamParameters&& value) { SetDynamoDBStreamParameters(std::move(value)); return *this;}


    /**
     * <p>The collection of event patterns used to filter events. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>The collection of event patterns used to filter events. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>The collection of event patterns used to filter events. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetFilterCriteria(const FilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>The collection of event patterns used to filter events. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetFilterCriteria(FilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>The collection of event patterns used to filter events. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PipeSourceParameters& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>The collection of event patterns used to filter events. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PipeSourceParameters& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline const PipeSourceKinesisStreamParameters& GetKinesisStreamParameters() const{ return m_kinesisStreamParameters; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline bool KinesisStreamParametersHasBeenSet() const { return m_kinesisStreamParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline void SetKinesisStreamParameters(const PipeSourceKinesisStreamParameters& value) { m_kinesisStreamParametersHasBeenSet = true; m_kinesisStreamParameters = value; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline void SetKinesisStreamParameters(PipeSourceKinesisStreamParameters&& value) { m_kinesisStreamParametersHasBeenSet = true; m_kinesisStreamParameters = std::move(value); }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline PipeSourceParameters& WithKinesisStreamParameters(const PipeSourceKinesisStreamParameters& value) { SetKinesisStreamParameters(value); return *this;}

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline PipeSourceParameters& WithKinesisStreamParameters(PipeSourceKinesisStreamParameters&& value) { SetKinesisStreamParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline const PipeSourceManagedStreamingKafkaParameters& GetManagedStreamingKafkaParameters() const{ return m_managedStreamingKafkaParameters; }

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline bool ManagedStreamingKafkaParametersHasBeenSet() const { return m_managedStreamingKafkaParametersHasBeenSet; }

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline void SetManagedStreamingKafkaParameters(const PipeSourceManagedStreamingKafkaParameters& value) { m_managedStreamingKafkaParametersHasBeenSet = true; m_managedStreamingKafkaParameters = value; }

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline void SetManagedStreamingKafkaParameters(PipeSourceManagedStreamingKafkaParameters&& value) { m_managedStreamingKafkaParametersHasBeenSet = true; m_managedStreamingKafkaParameters = std::move(value); }

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline PipeSourceParameters& WithManagedStreamingKafkaParameters(const PipeSourceManagedStreamingKafkaParameters& value) { SetManagedStreamingKafkaParameters(value); return *this;}

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline PipeSourceParameters& WithManagedStreamingKafkaParameters(PipeSourceManagedStreamingKafkaParameters&& value) { SetManagedStreamingKafkaParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline const PipeSourceRabbitMQBrokerParameters& GetRabbitMQBrokerParameters() const{ return m_rabbitMQBrokerParameters; }

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline bool RabbitMQBrokerParametersHasBeenSet() const { return m_rabbitMQBrokerParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline void SetRabbitMQBrokerParameters(const PipeSourceRabbitMQBrokerParameters& value) { m_rabbitMQBrokerParametersHasBeenSet = true; m_rabbitMQBrokerParameters = value; }

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline void SetRabbitMQBrokerParameters(PipeSourceRabbitMQBrokerParameters&& value) { m_rabbitMQBrokerParametersHasBeenSet = true; m_rabbitMQBrokerParameters = std::move(value); }

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline PipeSourceParameters& WithRabbitMQBrokerParameters(const PipeSourceRabbitMQBrokerParameters& value) { SetRabbitMQBrokerParameters(value); return *this;}

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline PipeSourceParameters& WithRabbitMQBrokerParameters(PipeSourceRabbitMQBrokerParameters&& value) { SetRabbitMQBrokerParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline const PipeSourceSelfManagedKafkaParameters& GetSelfManagedKafkaParameters() const{ return m_selfManagedKafkaParameters; }

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline bool SelfManagedKafkaParametersHasBeenSet() const { return m_selfManagedKafkaParametersHasBeenSet; }

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline void SetSelfManagedKafkaParameters(const PipeSourceSelfManagedKafkaParameters& value) { m_selfManagedKafkaParametersHasBeenSet = true; m_selfManagedKafkaParameters = value; }

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline void SetSelfManagedKafkaParameters(PipeSourceSelfManagedKafkaParameters&& value) { m_selfManagedKafkaParametersHasBeenSet = true; m_selfManagedKafkaParameters = std::move(value); }

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline PipeSourceParameters& WithSelfManagedKafkaParameters(const PipeSourceSelfManagedKafkaParameters& value) { SetSelfManagedKafkaParameters(value); return *this;}

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline PipeSourceParameters& WithSelfManagedKafkaParameters(PipeSourceSelfManagedKafkaParameters&& value) { SetSelfManagedKafkaParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline const PipeSourceSqsQueueParameters& GetSqsQueueParameters() const{ return m_sqsQueueParameters; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline bool SqsQueueParametersHasBeenSet() const { return m_sqsQueueParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline void SetSqsQueueParameters(const PipeSourceSqsQueueParameters& value) { m_sqsQueueParametersHasBeenSet = true; m_sqsQueueParameters = value; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline void SetSqsQueueParameters(PipeSourceSqsQueueParameters&& value) { m_sqsQueueParametersHasBeenSet = true; m_sqsQueueParameters = std::move(value); }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline PipeSourceParameters& WithSqsQueueParameters(const PipeSourceSqsQueueParameters& value) { SetSqsQueueParameters(value); return *this;}

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline PipeSourceParameters& WithSqsQueueParameters(PipeSourceSqsQueueParameters&& value) { SetSqsQueueParameters(std::move(value)); return *this;}

  private:

    PipeSourceActiveMQBrokerParameters m_activeMQBrokerParameters;
    bool m_activeMQBrokerParametersHasBeenSet = false;

    PipeSourceDynamoDBStreamParameters m_dynamoDBStreamParameters;
    bool m_dynamoDBStreamParametersHasBeenSet = false;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    PipeSourceKinesisStreamParameters m_kinesisStreamParameters;
    bool m_kinesisStreamParametersHasBeenSet = false;

    PipeSourceManagedStreamingKafkaParameters m_managedStreamingKafkaParameters;
    bool m_managedStreamingKafkaParametersHasBeenSet = false;

    PipeSourceRabbitMQBrokerParameters m_rabbitMQBrokerParameters;
    bool m_rabbitMQBrokerParametersHasBeenSet = false;

    PipeSourceSelfManagedKafkaParameters m_selfManagedKafkaParameters;
    bool m_selfManagedKafkaParametersHasBeenSet = false;

    PipeSourceSqsQueueParameters m_sqsQueueParameters;
    bool m_sqsQueueParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
