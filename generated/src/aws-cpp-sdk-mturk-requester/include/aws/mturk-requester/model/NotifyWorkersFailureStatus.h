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
    AWS_MTURK_API NotifyWorkersFailureStatus();
    AWS_MTURK_API NotifyWorkersFailureStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API NotifyWorkersFailureStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Encoded value for the failure type. </p>
     */
    inline const NotifyWorkersFailureCode& GetNotifyWorkersFailureCode() const{ return m_notifyWorkersFailureCode; }

    /**
     * <p> Encoded value for the failure type. </p>
     */
    inline bool NotifyWorkersFailureCodeHasBeenSet() const { return m_notifyWorkersFailureCodeHasBeenSet; }

    /**
     * <p> Encoded value for the failure type. </p>
     */
    inline void SetNotifyWorkersFailureCode(const NotifyWorkersFailureCode& value) { m_notifyWorkersFailureCodeHasBeenSet = true; m_notifyWorkersFailureCode = value; }

    /**
     * <p> Encoded value for the failure type. </p>
     */
    inline void SetNotifyWorkersFailureCode(NotifyWorkersFailureCode&& value) { m_notifyWorkersFailureCodeHasBeenSet = true; m_notifyWorkersFailureCode = std::move(value); }

    /**
     * <p> Encoded value for the failure type. </p>
     */
    inline NotifyWorkersFailureStatus& WithNotifyWorkersFailureCode(const NotifyWorkersFailureCode& value) { SetNotifyWorkersFailureCode(value); return *this;}

    /**
     * <p> Encoded value for the failure type. </p>
     */
    inline NotifyWorkersFailureStatus& WithNotifyWorkersFailureCode(NotifyWorkersFailureCode&& value) { SetNotifyWorkersFailureCode(std::move(value)); return *this;}


    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline const Aws::String& GetNotifyWorkersFailureMessage() const{ return m_notifyWorkersFailureMessage; }

    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline bool NotifyWorkersFailureMessageHasBeenSet() const { return m_notifyWorkersFailureMessageHasBeenSet; }

    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline void SetNotifyWorkersFailureMessage(const Aws::String& value) { m_notifyWorkersFailureMessageHasBeenSet = true; m_notifyWorkersFailureMessage = value; }

    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline void SetNotifyWorkersFailureMessage(Aws::String&& value) { m_notifyWorkersFailureMessageHasBeenSet = true; m_notifyWorkersFailureMessage = std::move(value); }

    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline void SetNotifyWorkersFailureMessage(const char* value) { m_notifyWorkersFailureMessageHasBeenSet = true; m_notifyWorkersFailureMessage.assign(value); }

    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline NotifyWorkersFailureStatus& WithNotifyWorkersFailureMessage(const Aws::String& value) { SetNotifyWorkersFailureMessage(value); return *this;}

    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline NotifyWorkersFailureStatus& WithNotifyWorkersFailureMessage(Aws::String&& value) { SetNotifyWorkersFailureMessage(std::move(value)); return *this;}

    /**
     * <p> A message detailing the reason the Worker could not be notified. </p>
     */
    inline NotifyWorkersFailureStatus& WithNotifyWorkersFailureMessage(const char* value) { SetNotifyWorkersFailureMessage(value); return *this;}


    /**
     * <p> The ID of the Worker.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p> The ID of the Worker.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p> The ID of the Worker.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p> The ID of the Worker.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p> The ID of the Worker.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p> The ID of the Worker.</p>
     */
    inline NotifyWorkersFailureStatus& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p> The ID of the Worker.</p>
     */
    inline NotifyWorkersFailureStatus& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Worker.</p>
     */
    inline NotifyWorkersFailureStatus& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}

  private:

    NotifyWorkersFailureCode m_notifyWorkersFailureCode;
    bool m_notifyWorkersFailureCodeHasBeenSet = false;

    Aws::String m_notifyWorkersFailureMessage;
    bool m_notifyWorkersFailureMessageHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
