/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PricingPlanManager {
namespace Model {

/**
 * <p>The request failed a business rule validation. For example, the specified
 * resource might already be associated with another subscription, or the
 * subscription might not be in the required state for this
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_PRICINGPLANMANAGER_API ValidationException() = default;
  AWS_PRICINGPLANMANAGER_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
  AWS_PRICINGPLANMANAGER_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PRICINGPLANMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the resource that failed validation.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ValidationException& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_resourceId;
  bool m_messageHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
