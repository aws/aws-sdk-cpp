/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The workload specification for benchmark tool configuration. Provide an
 * inline YAML or JSON string.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/WorkloadSpec">AWS
 * API Reference</a></p>
 */
class WorkloadSpec {
 public:
  AWS_SAGEMAKER_API WorkloadSpec() = default;
  AWS_SAGEMAKER_API WorkloadSpec(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API WorkloadSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An inline YAML or JSON string that defines benchmark parameters.</p>
   */
  inline const Aws::String& GetInline() const { return m_inline; }
  inline bool InlineHasBeenSet() const { return m_inlineHasBeenSet; }
  template <typename InlineT = Aws::String>
  void SetInline(InlineT&& value) {
    m_inlineHasBeenSet = true;
    m_inline = std::forward<InlineT>(value);
  }
  template <typename InlineT = Aws::String>
  WorkloadSpec& WithInline(InlineT&& value) {
    SetInline(std::forward<InlineT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inline;
  bool m_inlineHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
