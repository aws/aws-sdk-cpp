/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ValidationExceptionReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>The input fails to satisfy the constraints specified by the service. Check
 * the <code>reason</code> field for the constraint that failed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_MARKETPLACEDISCOVERY_API ValidationException() = default;
  AWS_MARKETPLACEDISCOVERY_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

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
   * <p>The reason that the input fails to satisfy the constraints that the Discovery
   * API specifies. This field has one of the following values:</p> <dl>
   * <dt>INVALID_PAGINATION_TOKEN</dt> <dd> <p>The <code>nextToken</code> value is
   * malformed, expired, or belongs to a different request. Start the pagination
   * again from the first page.</p> </dd> <dt>MALFORMED_REQUEST_PARAMETERS</dt> <dd>
   * <p>One or more request parameters have an invalid value. Correct the parameters
   * that you specified, and then resubmit your request.</p> </dd>
   * <dt>PAGINATION_LIMIT_EXCEEDED</dt> <dd> <p>The request asks for results beyond
   * the deepest page that the operation returns. Narrow your request with filters or
   * a more specific search.</p> </dd> </dl>
   */
  inline ValidationExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ValidationExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ValidationException& WithReason(ValidationExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
