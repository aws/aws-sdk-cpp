/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/MuteTargets.h>
#include <aws/monitoring/model/Rule.h>
#include <aws/monitoring/model/Tag.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 */
class PutAlarmMuteRuleRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API PutAlarmMuteRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAlarmMuteRule"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the alarm mute rule. This name must be unique within your Amazon
   * Web Services account and region.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PutAlarmMuteRuleRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the alarm mute rule that helps you identify its purpose.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PutAlarmMuteRuleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines when and how long alarms should be muted.</p>
   */
  inline const Rule& GetRule() const { return m_rule; }
  inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
  template <typename RuleT = Rule>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = Rule>
  PutAlarmMuteRuleRequest& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which alarms this rule applies to.</p>
   */
  inline const MuteTargets& GetMuteTargets() const { return m_muteTargets; }
  inline bool MuteTargetsHasBeenSet() const { return m_muteTargetsHasBeenSet; }
  template <typename MuteTargetsT = MuteTargets>
  void SetMuteTargets(MuteTargetsT&& value) {
    m_muteTargetsHasBeenSet = true;
    m_muteTargets = std::forward<MuteTargetsT>(value);
  }
  template <typename MuteTargetsT = MuteTargets>
  PutAlarmMuteRuleRequest& WithMuteTargets(MuteTargetsT&& value) {
    SetMuteTargets(std::forward<MuteTargetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to associate with the alarm mute rule. You can use
   * tags to categorize and manage your mute rules.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  PutAlarmMuteRuleRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  PutAlarmMuteRuleRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time after which the mute rule takes effect. If not specified,
   * the mute rule takes effect immediately upon creation and the mutes are applied
   * as per the schedule expression. This date and time is interpreted according to
   * the schedule timezone, or UTC if no timezone is specified.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  PutAlarmMuteRuleRequest& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the mute rule expires and is no longer evaluated.
   * After this time, the rule status becomes EXPIRED and will no longer mute the
   * targeted alarms. This date and time is interpreted according to the schedule
   * timezone, or UTC if no timezone is specified.</p>
   */
  inline const Aws::Utils::DateTime& GetExpireDate() const { return m_expireDate; }
  inline bool ExpireDateHasBeenSet() const { return m_expireDateHasBeenSet; }
  template <typename ExpireDateT = Aws::Utils::DateTime>
  void SetExpireDate(ExpireDateT&& value) {
    m_expireDateHasBeenSet = true;
    m_expireDate = std::forward<ExpireDateT>(value);
  }
  template <typename ExpireDateT = Aws::Utils::DateTime>
  PutAlarmMuteRuleRequest& WithExpireDate(ExpireDateT&& value) {
    SetExpireDate(std::forward<ExpireDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Rule m_rule;

  MuteTargets m_muteTargets;

  Aws::Vector<Tag> m_tags;

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_expireDate{};
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ruleHasBeenSet = false;
  bool m_muteTargetsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_expireDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
