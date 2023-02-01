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
   * <p>The parameters for using a Amazon SQS stream as a source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetSqsQueueParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetSqsQueueParameters
  {
  public:
    AWS_PIPES_API PipeTargetSqsQueueParameters();
    AWS_PIPES_API PipeTargetSqsQueueParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetSqsQueueParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline const Aws::String& GetMessageDeduplicationId() const{ return m_messageDeduplicationId; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline void SetMessageDeduplicationId(const Aws::String& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = value; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline void SetMessageDeduplicationId(Aws::String&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = std::move(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline void SetMessageDeduplicationId(const char* value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId.assign(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline PipeTargetSqsQueueParameters& WithMessageDeduplicationId(const Aws::String& value) { SetMessageDeduplicationId(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline PipeTargetSqsQueueParameters& WithMessageDeduplicationId(Aws::String&& value) { SetMessageDeduplicationId(std::move(value)); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages.</p>
     */
    inline PipeTargetSqsQueueParameters& WithMessageDeduplicationId(const char* value) { SetMessageDeduplicationId(value); return *this;}


    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline const Aws::String& GetMessageGroupId() const{ return m_messageGroupId; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(const Aws::String& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = value; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(Aws::String&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::move(value); }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(const char* value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId.assign(value); }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline PipeTargetSqsQueueParameters& WithMessageGroupId(const Aws::String& value) { SetMessageGroupId(value); return *this;}

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline PipeTargetSqsQueueParameters& WithMessageGroupId(Aws::String&& value) { SetMessageGroupId(std::move(value)); return *this;}

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline PipeTargetSqsQueueParameters& WithMessageGroupId(const char* value) { SetMessageGroupId(value); return *this;}

  private:

    Aws::String m_messageDeduplicationId;
    bool m_messageDeduplicationIdHasBeenSet = false;

    Aws::String m_messageGroupId;
    bool m_messageGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
