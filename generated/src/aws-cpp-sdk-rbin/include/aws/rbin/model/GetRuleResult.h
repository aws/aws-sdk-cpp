﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rbin/model/RuleStatus.h>
#include <aws/rbin/model/LockConfiguration.h>
#include <aws/rbin/model/LockState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rbin/model/ResourceTag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RecycleBin
{
namespace Model
{
  class GetRuleResult
  {
  public:
    AWS_RECYCLEBIN_API GetRuleResult();
    AWS_RECYCLEBIN_API GetRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RECYCLEBIN_API GetRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline void SetIdentifier(const Aws::String& value) { m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifier.assign(value); }
    inline GetRuleResult& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline GetRuleResult& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline GetRuleResult& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetRuleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetRuleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetRuleResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type retained by the retention rule.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }
    inline GetRuleResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline GetRuleResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriod = value; }
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriod = std::move(value); }
    inline GetRuleResult& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}
    inline GetRuleResult& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource tags used to identify resources that are
     * retained by the retention rule.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTags = std::move(value); }
    inline GetRuleResult& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}
    inline GetRuleResult& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline GetRuleResult& AddResourceTags(const ResourceTag& value) { m_resourceTags.push_back(value); return *this; }
    inline GetRuleResult& AddResourceTags(ResourceTag&& value) { m_resourceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the retention rule. Only retention rules that are in the
     * <code>available</code> state retain resources.</p>
     */
    inline const RuleStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RuleStatus& value) { m_status = value; }
    inline void SetStatus(RuleStatus&& value) { m_status = std::move(value); }
    inline GetRuleResult& WithStatus(const RuleStatus& value) { SetStatus(value); return *this;}
    inline GetRuleResult& WithStatus(RuleStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline const LockConfiguration& GetLockConfiguration() const{ return m_lockConfiguration; }
    inline void SetLockConfiguration(const LockConfiguration& value) { m_lockConfiguration = value; }
    inline void SetLockConfiguration(LockConfiguration&& value) { m_lockConfiguration = std::move(value); }
    inline GetRuleResult& WithLockConfiguration(const LockConfiguration& value) { SetLockConfiguration(value); return *this;}
    inline GetRuleResult& WithLockConfiguration(LockConfiguration&& value) { SetLockConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lock state for the retention rule.</p> <ul> <li> <p> <code>locked</code>
     * - The retention rule is locked and can't be modified or deleted.</p> </li> <li>
     * <p> <code>pending_unlock</code> - The retention rule has been unlocked but it is
     * still within the unlock delay period. The retention rule can be modified or
     * deleted only after the unlock delay period has expired.</p> </li> <li> <p>
     * <code>unlocked</code> - The retention rule is unlocked and it can be modified or
     * deleted by any user with the required permissions.</p> </li> <li> <p>
     * <code>null</code> - The retention rule has never been locked. Once a retention
     * rule has been locked, it can transition between the <code>locked</code> and
     * <code>unlocked</code> states only; it can never transition back to
     * <code>null</code>.</p> </li> </ul>
     */
    inline const LockState& GetLockState() const{ return m_lockState; }
    inline void SetLockState(const LockState& value) { m_lockState = value; }
    inline void SetLockState(LockState&& value) { m_lockState = std::move(value); }
    inline GetRuleResult& WithLockState(const LockState& value) { SetLockState(value); return *this;}
    inline GetRuleResult& WithLockState(LockState&& value) { SetLockState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the unlock delay is set to expire. Only returned
     * for retention rules that have been unlocked and that are still within the unlock
     * delay period.</p>
     */
    inline const Aws::Utils::DateTime& GetLockEndTime() const{ return m_lockEndTime; }
    inline void SetLockEndTime(const Aws::Utils::DateTime& value) { m_lockEndTime = value; }
    inline void SetLockEndTime(Aws::Utils::DateTime&& value) { m_lockEndTime = std::move(value); }
    inline GetRuleResult& WithLockEndTime(const Aws::Utils::DateTime& value) { SetLockEndTime(value); return *this;}
    inline GetRuleResult& WithLockEndTime(Aws::Utils::DateTime&& value) { SetLockEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the retention rule.</p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }
    inline void SetRuleArn(const Aws::String& value) { m_ruleArn = value; }
    inline void SetRuleArn(Aws::String&& value) { m_ruleArn = std::move(value); }
    inline void SetRuleArn(const char* value) { m_ruleArn.assign(value); }
    inline GetRuleResult& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}
    inline GetRuleResult& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}
    inline GetRuleResult& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;

    Aws::String m_description;

    ResourceType m_resourceType;

    RetentionPeriod m_retentionPeriod;

    Aws::Vector<ResourceTag> m_resourceTags;

    RuleStatus m_status;

    LockConfiguration m_lockConfiguration;

    LockState m_lockState;

    Aws::Utils::DateTime m_lockEndTime;

    Aws::String m_ruleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
