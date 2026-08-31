/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/Support_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Support {
namespace Model {

/**
 * <p>Information about why a request was throttled.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/ThrottlingReason">AWS
 * API Reference</a></p>
 */
class ThrottlingReason {
 public:
  AWS_SUPPORT_API ThrottlingReason() = default;
  AWS_SUPPORT_API ThrottlingReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API ThrottlingReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason that the request was throttled.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  ThrottlingReason& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource that caused the request to be throttled.</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  ThrottlingReason& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reason;

  Aws::String m_resource;
  bool m_reasonHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
