/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementContextType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>An object that contains an <code>Engagement</code>'s subset of fields.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementSummary">AWS
 * API Reference</a></p>
 */
class EngagementSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API EngagementSummary() = default;
  AWS_PARTNERCENTRALSELLING_API EngagementSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API EngagementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created Engagement.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  EngagementSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the Engagement.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  EngagementSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the Engagement.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  EngagementSummary& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Engagement was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  EngagementSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Account ID of the Engagement creator.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  EngagementSummary& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of members in the Engagement.</p>
   */
  inline int GetMemberCount() const { return m_memberCount; }
  inline bool MemberCountHasBeenSet() const { return m_memberCountHasBeenSet; }
  inline void SetMemberCount(int value) {
    m_memberCountHasBeenSet = true;
    m_memberCount = value;
  }
  inline EngagementSummary& WithMemberCount(int value) {
    SetMemberCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the engagement was last modified, in ISO 8601
   * format (UTC). Example: "2023-05-01T20:37:46Z".</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  EngagementSummary& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the user who last modified the engagement. This field
   * helps track who made the most recent changes to the engagement.</p>
   */
  inline const Aws::String& GetModifiedBy() const { return m_modifiedBy; }
  inline bool ModifiedByHasBeenSet() const { return m_modifiedByHasBeenSet; }
  template <typename ModifiedByT = Aws::String>
  void SetModifiedBy(ModifiedByT&& value) {
    m_modifiedByHasBeenSet = true;
    m_modifiedBy = std::forward<ModifiedByT>(value);
  }
  template <typename ModifiedByT = Aws::String>
  EngagementSummary& WithModifiedBy(ModifiedByT&& value) {
    SetModifiedBy(std::forward<ModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of context types associated with the engagement, such as
   * "CustomerProject" or "Lead". This provides a quick overview of the types of
   * contexts included in the engagement.</p>
   */
  inline const Aws::Vector<EngagementContextType>& GetContextTypes() const { return m_contextTypes; }
  inline bool ContextTypesHasBeenSet() const { return m_contextTypesHasBeenSet; }
  template <typename ContextTypesT = Aws::Vector<EngagementContextType>>
  void SetContextTypes(ContextTypesT&& value) {
    m_contextTypesHasBeenSet = true;
    m_contextTypes = std::forward<ContextTypesT>(value);
  }
  template <typename ContextTypesT = Aws::Vector<EngagementContextType>>
  EngagementSummary& WithContextTypes(ContextTypesT&& value) {
    SetContextTypes(std::forward<ContextTypesT>(value));
    return *this;
  }
  inline EngagementSummary& AddContextTypes(EngagementContextType value) {
    m_contextTypesHasBeenSet = true;
    m_contextTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_title;
  bool m_titleHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::String m_createdBy;
  bool m_createdByHasBeenSet = false;

  int m_memberCount{0};
  bool m_memberCountHasBeenSet = false;

  Aws::Utils::DateTime m_modifiedAt{};
  bool m_modifiedAtHasBeenSet = false;

  Aws::String m_modifiedBy;
  bool m_modifiedByHasBeenSet = false;

  Aws::Vector<EngagementContextType> m_contextTypes;
  bool m_contextTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
