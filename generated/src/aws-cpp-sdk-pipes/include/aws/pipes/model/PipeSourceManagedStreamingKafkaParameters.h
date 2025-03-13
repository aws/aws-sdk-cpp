/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/MSKStartPosition.h>
#include <aws/pipes/model/MSKAccessCredentials.h>
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
   * <p>The parameters for using an MSK stream as a source.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeSourceManagedStreamingKafkaParameters">AWS
   * API Reference</a></p>
   */
  class PipeSourceManagedStreamingKafkaParameters
  {
  public:
    AWS_PIPES_API PipeSourceManagedStreamingKafkaParameters() = default;
    AWS_PIPES_API PipeSourceManagedStreamingKafkaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeSourceManagedStreamingKafkaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    PipeSourceManagedStreamingKafkaParameters& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position in a stream from which to start reading.</p>
     */
    inline MSKStartPosition GetStartingPosition() const { return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    inline void SetStartingPosition(MSKStartPosition value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }
    inline PipeSourceManagedStreamingKafkaParameters& WithStartingPosition(MSKStartPosition value) { SetStartingPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const { return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline PipeSourceManagedStreamingKafkaParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const { return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline PipeSourceManagedStreamingKafkaParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
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
    PipeSourceManagedStreamingKafkaParameters& WithConsumerGroupID(ConsumerGroupIDT&& value) { SetConsumerGroupID(std::forward<ConsumerGroupIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline const MSKAccessCredentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = MSKAccessCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = MSKAccessCredentials>
    PipeSourceManagedStreamingKafkaParameters& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    MSKStartPosition m_startingPosition{MSKStartPosition::NOT_SET};
    bool m_startingPositionHasBeenSet = false;

    int m_batchSize{0};
    bool m_batchSizeHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds{0};
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;

    Aws::String m_consumerGroupID;
    bool m_consumerGroupIDHasBeenSet = false;

    MSKAccessCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
