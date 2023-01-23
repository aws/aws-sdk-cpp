/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/UpdatePipeSourceActiveMQBrokerParameters.h>
#include <aws/pipes/model/UpdatePipeSourceDynamoDBStreamParameters.h>
#include <aws/pipes/model/FilterCriteria.h>
#include <aws/pipes/model/UpdatePipeSourceKinesisStreamParameters.h>
#include <aws/pipes/model/UpdatePipeSourceManagedStreamingKafkaParameters.h>
#include <aws/pipes/model/UpdatePipeSourceRabbitMQBrokerParameters.h>
#include <aws/pipes/model/UpdatePipeSourceSelfManagedKafkaParameters.h>
#include <aws/pipes/model/UpdatePipeSourceSqsQueueParameters.h>
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
    AWS_PIPES_API UpdatePipeSourceParameters();
    AWS_PIPES_API UpdatePipeSourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API UpdatePipeSourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline const UpdatePipeSourceActiveMQBrokerParameters& GetActiveMQBrokerParameters() const{ return m_activeMQBrokerParameters; }

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline bool ActiveMQBrokerParametersHasBeenSet() const { return m_activeMQBrokerParametersHasBeenSet; }

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline void SetActiveMQBrokerParameters(const UpdatePipeSourceActiveMQBrokerParameters& value) { m_activeMQBrokerParametersHasBeenSet = true; m_activeMQBrokerParameters = value; }

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline void SetActiveMQBrokerParameters(UpdatePipeSourceActiveMQBrokerParameters&& value) { m_activeMQBrokerParametersHasBeenSet = true; m_activeMQBrokerParameters = std::move(value); }

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithActiveMQBrokerParameters(const UpdatePipeSourceActiveMQBrokerParameters& value) { SetActiveMQBrokerParameters(value); return *this;}

    /**
     * <p>The parameters for using an Active MQ broker as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithActiveMQBrokerParameters(UpdatePipeSourceActiveMQBrokerParameters&& value) { SetActiveMQBrokerParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline const UpdatePipeSourceDynamoDBStreamParameters& GetDynamoDBStreamParameters() const{ return m_dynamoDBStreamParameters; }

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline bool DynamoDBStreamParametersHasBeenSet() const { return m_dynamoDBStreamParametersHasBeenSet; }

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline void SetDynamoDBStreamParameters(const UpdatePipeSourceDynamoDBStreamParameters& value) { m_dynamoDBStreamParametersHasBeenSet = true; m_dynamoDBStreamParameters = value; }

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline void SetDynamoDBStreamParameters(UpdatePipeSourceDynamoDBStreamParameters&& value) { m_dynamoDBStreamParametersHasBeenSet = true; m_dynamoDBStreamParameters = std::move(value); }

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithDynamoDBStreamParameters(const UpdatePipeSourceDynamoDBStreamParameters& value) { SetDynamoDBStreamParameters(value); return *this;}

    /**
     * <p>The parameters for using a DynamoDB stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithDynamoDBStreamParameters(UpdatePipeSourceDynamoDBStreamParameters&& value) { SetDynamoDBStreamParameters(std::move(value)); return *this;}


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
    inline UpdatePipeSourceParameters& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>The collection of event patterns used to filter events. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
     * and Event Patterns</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline UpdatePipeSourceParameters& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline const UpdatePipeSourceKinesisStreamParameters& GetKinesisStreamParameters() const{ return m_kinesisStreamParameters; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline bool KinesisStreamParametersHasBeenSet() const { return m_kinesisStreamParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline void SetKinesisStreamParameters(const UpdatePipeSourceKinesisStreamParameters& value) { m_kinesisStreamParametersHasBeenSet = true; m_kinesisStreamParameters = value; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline void SetKinesisStreamParameters(UpdatePipeSourceKinesisStreamParameters&& value) { m_kinesisStreamParametersHasBeenSet = true; m_kinesisStreamParameters = std::move(value); }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithKinesisStreamParameters(const UpdatePipeSourceKinesisStreamParameters& value) { SetKinesisStreamParameters(value); return *this;}

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithKinesisStreamParameters(UpdatePipeSourceKinesisStreamParameters&& value) { SetKinesisStreamParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline const UpdatePipeSourceManagedStreamingKafkaParameters& GetManagedStreamingKafkaParameters() const{ return m_managedStreamingKafkaParameters; }

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline bool ManagedStreamingKafkaParametersHasBeenSet() const { return m_managedStreamingKafkaParametersHasBeenSet; }

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline void SetManagedStreamingKafkaParameters(const UpdatePipeSourceManagedStreamingKafkaParameters& value) { m_managedStreamingKafkaParametersHasBeenSet = true; m_managedStreamingKafkaParameters = value; }

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline void SetManagedStreamingKafkaParameters(UpdatePipeSourceManagedStreamingKafkaParameters&& value) { m_managedStreamingKafkaParametersHasBeenSet = true; m_managedStreamingKafkaParameters = std::move(value); }

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithManagedStreamingKafkaParameters(const UpdatePipeSourceManagedStreamingKafkaParameters& value) { SetManagedStreamingKafkaParameters(value); return *this;}

    /**
     * <p>The parameters for using an MSK stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithManagedStreamingKafkaParameters(UpdatePipeSourceManagedStreamingKafkaParameters&& value) { SetManagedStreamingKafkaParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline const UpdatePipeSourceRabbitMQBrokerParameters& GetRabbitMQBrokerParameters() const{ return m_rabbitMQBrokerParameters; }

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline bool RabbitMQBrokerParametersHasBeenSet() const { return m_rabbitMQBrokerParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline void SetRabbitMQBrokerParameters(const UpdatePipeSourceRabbitMQBrokerParameters& value) { m_rabbitMQBrokerParametersHasBeenSet = true; m_rabbitMQBrokerParameters = value; }

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline void SetRabbitMQBrokerParameters(UpdatePipeSourceRabbitMQBrokerParameters&& value) { m_rabbitMQBrokerParametersHasBeenSet = true; m_rabbitMQBrokerParameters = std::move(value); }

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithRabbitMQBrokerParameters(const UpdatePipeSourceRabbitMQBrokerParameters& value) { SetRabbitMQBrokerParameters(value); return *this;}

    /**
     * <p>The parameters for using a Rabbit MQ broker as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithRabbitMQBrokerParameters(UpdatePipeSourceRabbitMQBrokerParameters&& value) { SetRabbitMQBrokerParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline const UpdatePipeSourceSelfManagedKafkaParameters& GetSelfManagedKafkaParameters() const{ return m_selfManagedKafkaParameters; }

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline bool SelfManagedKafkaParametersHasBeenSet() const { return m_selfManagedKafkaParametersHasBeenSet; }

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline void SetSelfManagedKafkaParameters(const UpdatePipeSourceSelfManagedKafkaParameters& value) { m_selfManagedKafkaParametersHasBeenSet = true; m_selfManagedKafkaParameters = value; }

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline void SetSelfManagedKafkaParameters(UpdatePipeSourceSelfManagedKafkaParameters&& value) { m_selfManagedKafkaParametersHasBeenSet = true; m_selfManagedKafkaParameters = std::move(value); }

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithSelfManagedKafkaParameters(const UpdatePipeSourceSelfManagedKafkaParameters& value) { SetSelfManagedKafkaParameters(value); return *this;}

    /**
     * <p>The parameters for using a self-managed Apache Kafka stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithSelfManagedKafkaParameters(UpdatePipeSourceSelfManagedKafkaParameters&& value) { SetSelfManagedKafkaParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline const UpdatePipeSourceSqsQueueParameters& GetSqsQueueParameters() const{ return m_sqsQueueParameters; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline bool SqsQueueParametersHasBeenSet() const { return m_sqsQueueParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline void SetSqsQueueParameters(const UpdatePipeSourceSqsQueueParameters& value) { m_sqsQueueParametersHasBeenSet = true; m_sqsQueueParameters = value; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline void SetSqsQueueParameters(UpdatePipeSourceSqsQueueParameters&& value) { m_sqsQueueParametersHasBeenSet = true; m_sqsQueueParameters = std::move(value); }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithSqsQueueParameters(const UpdatePipeSourceSqsQueueParameters& value) { SetSqsQueueParameters(value); return *this;}

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline UpdatePipeSourceParameters& WithSqsQueueParameters(UpdatePipeSourceSqsQueueParameters&& value) { SetSqsQueueParameters(std::move(value)); return *this;}

  private:

    UpdatePipeSourceActiveMQBrokerParameters m_activeMQBrokerParameters;
    bool m_activeMQBrokerParametersHasBeenSet = false;

    UpdatePipeSourceDynamoDBStreamParameters m_dynamoDBStreamParameters;
    bool m_dynamoDBStreamParametersHasBeenSet = false;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    UpdatePipeSourceKinesisStreamParameters m_kinesisStreamParameters;
    bool m_kinesisStreamParametersHasBeenSet = false;

    UpdatePipeSourceManagedStreamingKafkaParameters m_managedStreamingKafkaParameters;
    bool m_managedStreamingKafkaParametersHasBeenSet = false;

    UpdatePipeSourceRabbitMQBrokerParameters m_rabbitMQBrokerParameters;
    bool m_rabbitMQBrokerParametersHasBeenSet = false;

    UpdatePipeSourceSelfManagedKafkaParameters m_selfManagedKafkaParameters;
    bool m_selfManagedKafkaParametersHasBeenSet = false;

    UpdatePipeSourceSqsQueueParameters m_sqsQueueParameters;
    bool m_sqsQueueParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
