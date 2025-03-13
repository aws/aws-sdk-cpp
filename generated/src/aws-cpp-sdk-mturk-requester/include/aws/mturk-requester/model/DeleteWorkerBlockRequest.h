/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class DeleteWorkerBlockRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API DeleteWorkerBlockRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkerBlock"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    DeleteWorkerBlockRequest& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    DeleteWorkerBlockRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
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
