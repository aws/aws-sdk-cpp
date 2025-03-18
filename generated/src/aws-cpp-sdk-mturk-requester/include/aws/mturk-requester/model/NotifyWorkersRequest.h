/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class NotifyWorkersRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API NotifyWorkersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyWorkers"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    NotifyWorkersRequest& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline const Aws::String& GetMessageText() const { return m_messageText; }
    inline bool MessageTextHasBeenSet() const { return m_messageTextHasBeenSet; }
    template<typename MessageTextT = Aws::String>
    void SetMessageText(MessageTextT&& value) { m_messageTextHasBeenSet = true; m_messageText = std::forward<MessageTextT>(value); }
    template<typename MessageTextT = Aws::String>
    NotifyWorkersRequest& WithMessageText(MessageTextT&& value) { SetMessageText(std::forward<MessageTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkerIds() const { return m_workerIds; }
    inline bool WorkerIdsHasBeenSet() const { return m_workerIdsHasBeenSet; }
    template<typename WorkerIdsT = Aws::Vector<Aws::String>>
    void SetWorkerIds(WorkerIdsT&& value) { m_workerIdsHasBeenSet = true; m_workerIds = std::forward<WorkerIdsT>(value); }
    template<typename WorkerIdsT = Aws::Vector<Aws::String>>
    NotifyWorkersRequest& WithWorkerIds(WorkerIdsT&& value) { SetWorkerIds(std::forward<WorkerIdsT>(value)); return *this;}
    template<typename WorkerIdsT = Aws::String>
    NotifyWorkersRequest& AddWorkerIds(WorkerIdsT&& value) { m_workerIdsHasBeenSet = true; m_workerIds.emplace_back(std::forward<WorkerIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_messageText;
    bool m_messageTextHasBeenSet = false;

    Aws::Vector<Aws::String> m_workerIds;
    bool m_workerIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
