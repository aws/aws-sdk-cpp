/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using a Amazon SQS stream as a target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetSqsQueueParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetSqsQueueParameters
  {
  public:
    AWS_PIPES_API PipeTargetSqsQueueParameters() = default;
    AWS_PIPES_API PipeTargetSqsQueueParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetSqsQueueParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline const Aws::String& GetMessageGroupId() const { return m_messageGroupId; }
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }
    template<typename MessageGroupIdT = Aws::String>
    void SetMessageGroupId(MessageGroupIdT&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::forward<MessageGroupIdT>(value); }
    template<typename MessageGroupIdT = Aws::String>
    PipeTargetSqsQueueParameters& WithMessageGroupId(MessageGroupIdT&& value) { SetMessageGroupId(std::forward<MessageGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline const Aws::String& GetMessageDeduplicationId() const { return m_messageDeduplicationId; }
    inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }
    template<typename MessageDeduplicationIdT = Aws::String>
    void SetMessageDeduplicationId(MessageDeduplicationIdT&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = std::forward<MessageDeduplicationIdT>(value); }
    template<typename MessageDeduplicationIdT = Aws::String>
    PipeTargetSqsQueueParameters& WithMessageDeduplicationId(MessageDeduplicationIdT&& value) { SetMessageDeduplicationId(std::forward<MessageDeduplicationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageGroupId;
    bool m_messageGroupIdHasBeenSet = false;

    Aws::String m_messageDeduplicationId;
    bool m_messageDeduplicationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
