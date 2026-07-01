/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {

/**
 * <p>A summary of a support action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/ActionSummary">AWS
 * API Reference</a></p>
 */
class ActionSummary {
 public:
  AWS_SUPPORTAUTHZ_API ActionSummary() = default;
  AWS_SUPPORTAUTHZ_API ActionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the support action.</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  ActionSummary& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS service associated with the support action.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  ActionSummary& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of what the support action does.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ActionSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_action;

  Aws::String m_service;

  Aws::String m_description;
  bool m_actionHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
