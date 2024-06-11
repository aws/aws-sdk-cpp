/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class GetActivityTaskRequest : public SFNRequest
  {
  public:
    AWS_SFN_API GetActivityTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetActivityTask"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the activity to retrieve tasks from
     * (assigned when you create the task using <a>CreateActivity</a>.)</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }
    inline bool ActivityArnHasBeenSet() const { return m_activityArnHasBeenSet; }
    inline void SetActivityArn(const Aws::String& value) { m_activityArnHasBeenSet = true; m_activityArn = value; }
    inline void SetActivityArn(Aws::String&& value) { m_activityArnHasBeenSet = true; m_activityArn = std::move(value); }
    inline void SetActivityArn(const char* value) { m_activityArnHasBeenSet = true; m_activityArn.assign(value); }
    inline GetActivityTaskRequest& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}
    inline GetActivityTaskRequest& WithActivityArn(Aws::String&& value) { SetActivityArn(std::move(value)); return *this;}
    inline GetActivityTaskRequest& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can provide an arbitrary name in order to identify the worker that the
     * task is assigned to. This name is used when it is logged in the execution
     * history.</p>
     */
    inline const Aws::String& GetWorkerName() const{ return m_workerName; }
    inline bool WorkerNameHasBeenSet() const { return m_workerNameHasBeenSet; }
    inline void SetWorkerName(const Aws::String& value) { m_workerNameHasBeenSet = true; m_workerName = value; }
    inline void SetWorkerName(Aws::String&& value) { m_workerNameHasBeenSet = true; m_workerName = std::move(value); }
    inline void SetWorkerName(const char* value) { m_workerNameHasBeenSet = true; m_workerName.assign(value); }
    inline GetActivityTaskRequest& WithWorkerName(const Aws::String& value) { SetWorkerName(value); return *this;}
    inline GetActivityTaskRequest& WithWorkerName(Aws::String&& value) { SetWorkerName(std::move(value)); return *this;}
    inline GetActivityTaskRequest& WithWorkerName(const char* value) { SetWorkerName(value); return *this;}
    ///@}
  private:

    Aws::String m_activityArn;
    bool m_activityArnHasBeenSet = false;

    Aws::String m_workerName;
    bool m_workerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
