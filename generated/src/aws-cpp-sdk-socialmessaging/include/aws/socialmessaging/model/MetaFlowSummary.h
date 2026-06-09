/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/MetaFlowCategory.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>Contains summary information about a WhatsApp Flow, including its ID, name,
 * status, and categories.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaFlowSummary">AWS
 * API Reference</a></p>
 */
class MetaFlowSummary {
 public:
  AWS_SOCIALMESSAGING_API MetaFlowSummary() = default;
  AWS_SOCIALMESSAGING_API MetaFlowSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API MetaFlowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Flow assigned by Meta.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  MetaFlowSummary& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Flow.</p>
   */
  inline const Aws::String& GetFlowName() const { return m_flowName; }
  inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
  template <typename FlowNameT = Aws::String>
  void SetFlowName(FlowNameT&& value) {
    m_flowNameHasBeenSet = true;
    m_flowName = std::forward<FlowNameT>(value);
  }
  template <typename FlowNameT = Aws::String>
  MetaFlowSummary& WithFlowName(FlowNameT&& value) {
    SetFlowName(std::forward<FlowNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the Flow (DRAFT, PUBLISHED, DEPRECATED, BLOCKED, or
   * THROTTLED).</p>
   */
  inline const Aws::String& GetFlowStatus() const { return m_flowStatus; }
  inline bool FlowStatusHasBeenSet() const { return m_flowStatusHasBeenSet; }
  template <typename FlowStatusT = Aws::String>
  void SetFlowStatus(FlowStatusT&& value) {
    m_flowStatusHasBeenSet = true;
    m_flowStatus = std::forward<FlowStatusT>(value);
  }
  template <typename FlowStatusT = Aws::String>
  MetaFlowSummary& WithFlowStatus(FlowStatusT&& value) {
    SetFlowStatus(std::forward<FlowStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The categories that classify the business purpose of the Flow.</p>
   */
  inline const Aws::Vector<MetaFlowCategory>& GetFlowCategories() const { return m_flowCategories; }
  inline bool FlowCategoriesHasBeenSet() const { return m_flowCategoriesHasBeenSet; }
  template <typename FlowCategoriesT = Aws::Vector<MetaFlowCategory>>
  void SetFlowCategories(FlowCategoriesT&& value) {
    m_flowCategoriesHasBeenSet = true;
    m_flowCategories = std::forward<FlowCategoriesT>(value);
  }
  template <typename FlowCategoriesT = Aws::Vector<MetaFlowCategory>>
  MetaFlowSummary& WithFlowCategories(FlowCategoriesT&& value) {
    SetFlowCategories(std::forward<FlowCategoriesT>(value));
    return *this;
  }
  inline MetaFlowSummary& AddFlowCategories(MetaFlowCategory value) {
    m_flowCategoriesHasBeenSet = true;
    m_flowCategories.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of validation errors from Meta, if any.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValidationErrors() const { return m_validationErrors; }
  inline bool ValidationErrorsHasBeenSet() const { return m_validationErrorsHasBeenSet; }
  template <typename ValidationErrorsT = Aws::Vector<Aws::String>>
  void SetValidationErrors(ValidationErrorsT&& value) {
    m_validationErrorsHasBeenSet = true;
    m_validationErrors = std::forward<ValidationErrorsT>(value);
  }
  template <typename ValidationErrorsT = Aws::Vector<Aws::String>>
  MetaFlowSummary& WithValidationErrors(ValidationErrorsT&& value) {
    SetValidationErrors(std::forward<ValidationErrorsT>(value));
    return *this;
  }
  template <typename ValidationErrorsT = Aws::String>
  MetaFlowSummary& AddValidationErrors(ValidationErrorsT&& value) {
    m_validationErrorsHasBeenSet = true;
    m_validationErrors.emplace_back(std::forward<ValidationErrorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_flowId;

  Aws::String m_flowName;

  Aws::String m_flowStatus;

  Aws::Vector<MetaFlowCategory> m_flowCategories;

  Aws::Vector<Aws::String> m_validationErrors;
  bool m_flowIdHasBeenSet = false;
  bool m_flowNameHasBeenSet = false;
  bool m_flowStatusHasBeenSet = false;
  bool m_flowCategoriesHasBeenSet = false;
  bool m_validationErrorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
