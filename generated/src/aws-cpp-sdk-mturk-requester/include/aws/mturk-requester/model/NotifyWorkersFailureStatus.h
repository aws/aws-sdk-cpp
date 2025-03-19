/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/NotifyWorkersFailureCode.h>
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
   * <p> When MTurk encounters an issue with notifying the Workers you specified, it
   * returns back this object with failure details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/NotifyWorkersFailureStatus">AWS
   * API Reference</a></p>
   */
  class NotifyWorkersFailureStatus
  {
  public:
    AWS_MTURK_API NotifyWorkersFailureStatus() = default;
    AWS_MTURK_API NotifyWorkersFailureStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API NotifyWorkersFailureStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Encoded value for the failure type. </p>
     */
    inline NotifyWorkersFailureCode GetNotifyWorkersFailureCode() const { return m_notifyWorkersFailureCode; }
    inline bool NotifyWorkersFailureCodeHasBeenSet() const { return m_notifyWorkersFailureCodeHasBeenSet; }
    inline void SetNotifyWorkersFailureCode(NotifyWorkersFailureCode value) { m_notifyWorkersFailureCodeHasBeenSet = true; m_notifyWorkersFailureCode = value; }
    inline NotifyWorkersFailureStatus& WithNotifyWorkersFailureCode(NotifyWorkersFailureCode value) { SetNotifyWorkersFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline const Aws::String& GetNotifyWorkersFailureMessage() const { return m_notifyWorkersFailureMessage; }
    inline bool NotifyWorkersFailureMessageHasBeenSet() const { return m_notifyWorkersFailureMessageHasBeenSet; }
    template<typename NotifyWorkersFailureMessageT = Aws::String>
    void SetNotifyWorkersFailureMessage(NotifyWorkersFailureMessageT&& value) { m_notifyWorkersFailureMessageHasBeenSet = true; m_notifyWorkersFailureMessage = std::forward<NotifyWorkersFailureMessageT>(value); }
    template<typename NotifyWorkersFailureMessageT = Aws::String>
    NotifyWorkersFailureStatus& WithNotifyWorkersFailureMessage(NotifyWorkersFailureMessageT&& value) { SetNotifyWorkersFailureMessage(std::forward<NotifyWorkersFailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Worker.</p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    NotifyWorkersFailureStatus& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}
  private:

    NotifyWorkersFailureCode m_notifyWorkersFailureCode{NotifyWorkersFailureCode::NOT_SET};
    bool m_notifyWorkersFailureCodeHasBeenSet = false;

    Aws::String m_notifyWorkersFailureMessage;
    bool m_notifyWorkersFailureMessageHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
