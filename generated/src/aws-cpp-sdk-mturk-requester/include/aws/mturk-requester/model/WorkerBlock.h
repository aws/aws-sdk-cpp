/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> The WorkerBlock data structure represents a Worker who has been blocked. It
   * has two elements: the WorkerId and the Reason for the block. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/WorkerBlock">AWS
   * API Reference</a></p>
   */
  class WorkerBlock
  {
  public:
    AWS_MTURK_API WorkerBlock();
    AWS_MTURK_API WorkerBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API WorkerBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline WorkerBlock& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline WorkerBlock& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline WorkerBlock& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message explaining the reason the Worker was blocked. </p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline WorkerBlock& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline WorkerBlock& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline WorkerBlock& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
