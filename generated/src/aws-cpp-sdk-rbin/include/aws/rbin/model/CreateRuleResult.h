/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/rbin/model/RuleStatus.h>
#include <aws/rbin/model/LockConfiguration.h>
#include <aws/rbin/model/LockState.h>
#include <aws/rbin/model/Tag.h>
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
  class CreateRuleResult
  {
  public:
    AWS_RECYCLEBIN_API CreateRuleResult() = default;
    AWS_RECYCLEBIN_API CreateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RECYCLEBIN_API CreateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    CreateRuleResult& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RetentionPeriod& GetRetentionPeriod() const { return m_retentionPeriod; }
    template<typename RetentionPeriodT = RetentionPeriod>
    void SetRetentionPeriod(RetentionPeriodT&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::forward<RetentionPeriodT>(value); }
    template<typename RetentionPeriodT = RetentionPeriod>
    CreateRuleResult& WithRetentionPeriod(RetentionPeriodT&& value) { SetRetentionPeriod(std::forward<RetentionPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention rule description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateRuleResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tags assigned to the retention rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateRuleResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateRuleResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type retained by the retention rule.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline CreateRuleResult& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Tag-level retention rules only] Information about the resource tags used to
     * identify resources that are retained by the retention rule.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    CreateRuleResult& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    CreateRuleResult& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the retention rule. Only retention rules that are in the
     * <code>available</code> state retain resources.</p>
     */
    inline RuleStatus GetStatus() const { return m_status; }
    inline void SetStatus(RuleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateRuleResult& WithStatus(RuleStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline const LockConfiguration& GetLockConfiguration() const { return m_lockConfiguration; }
    template<typename LockConfigurationT = LockConfiguration>
    void SetLockConfiguration(LockConfigurationT&& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = std::forward<LockConfigurationT>(value); }
    template<typename LockConfigurationT = LockConfiguration>
    CreateRuleResult& WithLockConfiguration(LockConfigurationT&& value) { SetLockConfiguration(std::forward<LockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Region-level retention rules only] The lock state for the retention
     * rule.</p> <ul> <li> <p> <code>locked</code> - The retention rule is locked and
     * can't be modified or deleted.</p> </li> <li> <p> <code>pending_unlock</code> -
     * The retention rule has been unlocked but it is still within the unlock delay
     * period. The retention rule can be modified or deleted only after the unlock
     * delay period has expired.</p> </li> <li> <p> <code>unlocked</code> - The
     * retention rule is unlocked and it can be modified or deleted by any user with
     * the required permissions.</p> </li> <li> <p> <code>null</code> - The retention
     * rule has never been locked. Once a retention rule has been locked, it can
     * transition between the <code>locked</code> and <code>unlocked</code> states
     * only; it can never transition back to <code>null</code>.</p> </li> </ul>
     */
    inline LockState GetLockState() const { return m_lockState; }
    inline void SetLockState(LockState value) { m_lockStateHasBeenSet = true; m_lockState = value; }
    inline CreateRuleResult& WithLockState(LockState value) { SetLockState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the retention rule.</p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    CreateRuleResult& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Region-level retention rules only] Information about the exclusion tags used
     * to identify resources that are to be excluded, or ignored, by the retention
     * rule.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetExcludeResourceTags() const { return m_excludeResourceTags; }
    template<typename ExcludeResourceTagsT = Aws::Vector<ResourceTag>>
    void SetExcludeResourceTags(ExcludeResourceTagsT&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = std::forward<ExcludeResourceTagsT>(value); }
    template<typename ExcludeResourceTagsT = Aws::Vector<ResourceTag>>
    CreateRuleResult& WithExcludeResourceTags(ExcludeResourceTagsT&& value) { SetExcludeResourceTags(std::forward<ExcludeResourceTagsT>(value)); return *this;}
    template<typename ExcludeResourceTagsT = ResourceTag>
    CreateRuleResult& AddExcludeResourceTags(ExcludeResourceTagsT&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags.emplace_back(std::forward<ExcludeResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    RuleStatus m_status{RuleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    LockConfiguration m_lockConfiguration;
    bool m_lockConfigurationHasBeenSet = false;

    LockState m_lockState{LockState::NOT_SET};
    bool m_lockStateHasBeenSet = false;

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    Aws::Vector<ResourceTag> m_excludeResourceTags;
    bool m_excludeResourceTagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
