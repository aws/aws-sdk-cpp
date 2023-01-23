/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/SchedulerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Scheduler
{
namespace Model
{

  /**
   */
  class DeleteScheduleRequest : public SchedulerRequest
  {
  public:
    AWS_SCHEDULER_API DeleteScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSchedule"; }

    AWS_SCHEDULER_API Aws::String SerializePayload() const override;

    AWS_SCHEDULER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline DeleteScheduleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline DeleteScheduleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline DeleteScheduleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline DeleteScheduleRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline DeleteScheduleRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule group associated with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline DeleteScheduleRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The name of the schedule to delete.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule to delete.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schedule to delete.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schedule to delete.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schedule to delete.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schedule to delete.</p>
     */
    inline DeleteScheduleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule to delete.</p>
     */
    inline DeleteScheduleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule to delete.</p>
     */
    inline DeleteScheduleRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
