/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/SchedulerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/scheduler/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Scheduler
{
namespace Model
{

  /**
   */
  class CreateScheduleGroupRequest : public SchedulerRequest
  {
  public:
    AWS_SCHEDULER_API CreateScheduleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScheduleGroup"; }

    AWS_SCHEDULER_API Aws::String SerializePayload() const override;


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
    inline CreateScheduleGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline CreateScheduleGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline CreateScheduleGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the schedule group that you are creating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule group that you are creating.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schedule group that you are creating.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schedule group that you are creating.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schedule group that you are creating.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schedule group that you are creating.</p>
     */
    inline CreateScheduleGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule group that you are creating.</p>
     */
    inline CreateScheduleGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule group that you are creating.</p>
     */
    inline CreateScheduleGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The list of tags to associate with the schedule group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags to associate with the schedule group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags to associate with the schedule group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags to associate with the schedule group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags to associate with the schedule group.</p>
     */
    inline CreateScheduleGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags to associate with the schedule group.</p>
     */
    inline CreateScheduleGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags to associate with the schedule group.</p>
     */
    inline CreateScheduleGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags to associate with the schedule group.</p>
     */
    inline CreateScheduleGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
