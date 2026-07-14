/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AIDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Additional details about a resource that are specific to its category. For
 * AI/ML resources and their host resources, this structure contains
 * <code>AIDetails</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceInfo">AWS
 * API Reference</a></p>
 */
class ResourceInfo {
 public:
  AWS_SECURITYHUB_API ResourceInfo() = default;
  AWS_SECURITYHUB_API ResourceInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details that are specific to self-hosted AI resources and their host
   * resources.</p>
   */
  inline const AIDetails& GetAIDetails() const { return m_aIDetails; }
  inline bool AIDetailsHasBeenSet() const { return m_aIDetailsHasBeenSet; }
  template <typename AIDetailsT = AIDetails>
  void SetAIDetails(AIDetailsT&& value) {
    m_aIDetailsHasBeenSet = true;
    m_aIDetails = std::forward<AIDetailsT>(value);
  }
  template <typename AIDetailsT = AIDetails>
  ResourceInfo& WithAIDetails(AIDetailsT&& value) {
    SetAIDetails(std::forward<AIDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  AIDetails m_aIDetails;
  bool m_aIDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
