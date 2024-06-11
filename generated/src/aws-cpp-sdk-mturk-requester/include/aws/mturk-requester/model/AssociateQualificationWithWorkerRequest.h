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
  class AssociateQualificationWithWorkerRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API AssociateQualificationWithWorkerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateQualificationWithWorker"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }
    inline AssociateQualificationWithWorkerRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}
    inline AssociateQualificationWithWorkerRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}
    inline AssociateQualificationWithWorkerRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline AssociateQualificationWithWorkerRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline AssociateQualificationWithWorkerRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline AssociateQualificationWithWorkerRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the Qualification to assign.</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline AssociateQualificationWithWorkerRequest& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether to send a notification email message to the Worker saying
     * that the qualification was assigned to the Worker. Note: this is true by
     * default. </p>
     */
    inline bool GetSendNotification() const{ return m_sendNotification; }
    inline bool SendNotificationHasBeenSet() const { return m_sendNotificationHasBeenSet; }
    inline void SetSendNotification(bool value) { m_sendNotificationHasBeenSet = true; m_sendNotification = value; }
    inline AssociateQualificationWithWorkerRequest& WithSendNotification(bool value) { SetSendNotification(value); return *this;}
    ///@}
  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    int m_integerValue;
    bool m_integerValueHasBeenSet = false;

    bool m_sendNotification;
    bool m_sendNotificationHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
