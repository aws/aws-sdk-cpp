/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Description of the source and destination queues between which the job has
   * moved, along with the timestamp of the move<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/QueueTransition">AWS
   * API Reference</a></p>
   */
  class QueueTransition
  {
  public:
    AWS_MEDIACONVERT_API QueueTransition() = default;
    AWS_MEDIACONVERT_API QueueTransition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API QueueTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The queue that the job was on after the transition.
     */
    inline const Aws::String& GetDestinationQueue() const { return m_destinationQueue; }
    inline bool DestinationQueueHasBeenSet() const { return m_destinationQueueHasBeenSet; }
    template<typename DestinationQueueT = Aws::String>
    void SetDestinationQueue(DestinationQueueT&& value) { m_destinationQueueHasBeenSet = true; m_destinationQueue = std::forward<DestinationQueueT>(value); }
    template<typename DestinationQueueT = Aws::String>
    QueueTransition& WithDestinationQueue(DestinationQueueT&& value) { SetDestinationQueue(std::forward<DestinationQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The queue that the job was on before the transition.
     */
    inline const Aws::String& GetSourceQueue() const { return m_sourceQueue; }
    inline bool SourceQueueHasBeenSet() const { return m_sourceQueueHasBeenSet; }
    template<typename SourceQueueT = Aws::String>
    void SetSourceQueue(SourceQueueT&& value) { m_sourceQueueHasBeenSet = true; m_sourceQueue = std::forward<SourceQueueT>(value); }
    template<typename SourceQueueT = Aws::String>
    QueueTransition& WithSourceQueue(SourceQueueT&& value) { SetSourceQueue(std::forward<SourceQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time, in Unix epoch format, that the job moved from the source queue to the
     * destination queue.
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    QueueTransition& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationQueue;
    bool m_destinationQueueHasBeenSet = false;

    Aws::String m_sourceQueue;
    bool m_sourceQueueHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
