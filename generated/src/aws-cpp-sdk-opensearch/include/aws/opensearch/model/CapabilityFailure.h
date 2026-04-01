/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/CapabilityFailureReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Information about a capability failure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CapabilityFailure">AWS
 * API Reference</a></p>
 */
class CapabilityFailure {
 public:
  AWS_OPENSEARCHSERVICE_API CapabilityFailure() = default;
  AWS_OPENSEARCHSERVICE_API CapabilityFailure(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API CapabilityFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason for the capability failure. Possible values:
   * <code>KMS_KEY_INSUFFICIENT_PERMISSION</code>.</p>
   */
  inline CapabilityFailureReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(CapabilityFailureReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline CapabilityFailure& WithReason(CapabilityFailureReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional details about the capability failure.</p>
   */
  inline const Aws::String& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::String>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::String>
  CapabilityFailure& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}
 private:
  CapabilityFailureReason m_reason{CapabilityFailureReason::NOT_SET};

  Aws::String m_details;
  bool m_reasonHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
