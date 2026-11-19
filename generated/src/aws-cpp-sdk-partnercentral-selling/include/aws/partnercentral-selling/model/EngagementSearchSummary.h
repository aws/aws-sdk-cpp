/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementContextDetails.h>

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
 * <p>A summary of an engagement returned by <code>SearchEngagements</code>. It
 * contains the same engagement fields as the <code>GetEngagement</code>
 * response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementSearchSummary">AWS
 * API Reference</a></p>
 */
class EngagementSearchSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API EngagementSearchSummary() = default;
  AWS_PARTNERCENTRALSELLING_API EngagementSearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API EngagementSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique resource identifier of the engagement.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  EngagementSearchSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the engagement.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  EngagementSearchSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the engagement.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  EngagementSearchSummary& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the engagement.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  EngagementSearchSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the engagement was created, in ISO 8601 format, in
   * Coordinated Universal Time (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  EngagementSearchSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the user who created the engagement.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  EngagementSearchSummary& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of members in the engagement.</p>
   */
  inline int GetMemberCount() const { return m_memberCount; }
  inline bool MemberCountHasBeenSet() const { return m_memberCountHasBeenSet; }
  inline void SetMemberCount(int value) {
    m_memberCountHasBeenSet = true;
    m_memberCount = value;
  }
  inline EngagementSearchSummary& WithMemberCount(int value) {
    SetMemberCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the engagement was last modified, in ISO 8601 format,
   * in Coordinated Universal Time (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  EngagementSearchSummary& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the user who last modified the engagement.</p>
   */
  inline const Aws::String& GetModifiedBy() const { return m_modifiedBy; }
  inline bool ModifiedByHasBeenSet() const { return m_modifiedByHasBeenSet; }
  template <typename ModifiedByT = Aws::String>
  void SetModifiedBy(ModifiedByT&& value) {
    m_modifiedByHasBeenSet = true;
    m_modifiedBy = std::forward<ModifiedByT>(value);
  }
  template <typename ModifiedByT = Aws::String>
  EngagementSearchSummary& WithModifiedBy(ModifiedByT&& value) {
    SetModifiedBy(std::forward<ModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contexts associated with the engagement, such as prospecting results,
   * lead details, and customer project details.</p>
   */
  inline const Aws::Vector<EngagementContextDetails>& GetContexts() const { return m_contexts; }
  inline bool ContextsHasBeenSet() const { return m_contextsHasBeenSet; }
  template <typename ContextsT = Aws::Vector<EngagementContextDetails>>
  void SetContexts(ContextsT&& value) {
    m_contextsHasBeenSet = true;
    m_contexts = std::forward<ContextsT>(value);
  }
  template <typename ContextsT = Aws::Vector<EngagementContextDetails>>
  EngagementSearchSummary& WithContexts(ContextsT&& value) {
    SetContexts(std::forward<ContextsT>(value));
    return *this;
  }
  template <typename ContextsT = EngagementContextDetails>
  EngagementSearchSummary& AddContexts(ContextsT&& value) {
    m_contextsHasBeenSet = true;
    m_contexts.emplace_back(std::forward<ContextsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_title;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  int m_memberCount{0};

  Aws::Utils::DateTime m_modifiedAt{};

  Aws::String m_modifiedBy;

  Aws::Vector<EngagementContextDetails> m_contexts;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_memberCountHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_modifiedByHasBeenSet = false;
  bool m_contextsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
