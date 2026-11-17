/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>An operation that updates the properties of a segment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SegmentUpdateOperation">AWS
 * API Reference</a></p>
 */
class SegmentUpdateOperation {
 public:
  AWS_MGN_API SegmentUpdateOperation() = default;
  AWS_MGN_API SegmentUpdateOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SegmentUpdateOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated name for the segment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SegmentUpdateOperation& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description for the segment.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SegmentUpdateOperation& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated target AWS account for the segment.</p>
   */
  inline const Aws::String& GetTargetAccount() const { return m_targetAccount; }
  inline bool TargetAccountHasBeenSet() const { return m_targetAccountHasBeenSet; }
  template <typename TargetAccountT = Aws::String>
  void SetTargetAccount(TargetAccountT&& value) {
    m_targetAccountHasBeenSet = true;
    m_targetAccount = std::forward<TargetAccountT>(value);
  }
  template <typename TargetAccountT = Aws::String>
  SegmentUpdateOperation& WithTargetAccount(TargetAccountT&& value) {
    SetTargetAccount(std::forward<TargetAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated scope tags for the segment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetScopeTags() const { return m_scopeTags; }
  inline bool ScopeTagsHasBeenSet() const { return m_scopeTagsHasBeenSet; }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetScopeTags(ScopeTagsT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags = std::forward<ScopeTagsT>(value);
  }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  SegmentUpdateOperation& WithScopeTags(ScopeTagsT&& value) {
    SetScopeTags(std::forward<ScopeTagsT>(value));
    return *this;
  }
  template <typename ScopeTagsKeyT = Aws::String, typename ScopeTagsValueT = Aws::String>
  SegmentUpdateOperation& AddScopeTags(ScopeTagsKeyT&& key, ScopeTagsValueT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags.emplace(std::forward<ScopeTagsKeyT>(key), std::forward<ScopeTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_targetAccount;

  Aws::Map<Aws::String, Aws::String> m_scopeTags;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_targetAccountHasBeenSet = false;
  bool m_scopeTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
