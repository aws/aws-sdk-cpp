/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/CriticalitySourceType.h>

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
 * <p>Details the source and reason of a criticality.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CriticalitySource">AWS
 * API Reference</a></p>
 */
class CriticalitySource {
 public:
  AWS_SECURITYHUB_API CriticalitySource() = default;
  AWS_SECURITYHUB_API CriticalitySource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API CriticalitySource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source of the criticality.</p>
   */
  inline CriticalitySourceType GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(CriticalitySourceType value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline CriticalitySource& WithSource(CriticalitySourceType value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the criticality was assigned.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  CriticalitySource& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  CriticalitySourceType m_source{CriticalitySourceType::NOT_SET};

  Aws::String m_reason;
  bool m_sourceHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
