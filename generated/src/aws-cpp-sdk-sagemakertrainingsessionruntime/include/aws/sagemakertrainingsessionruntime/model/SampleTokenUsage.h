/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 * <p>The token usage statistics for a sample generation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SampleTokenUsage">AWS
 * API Reference</a></p>
 */
class SampleTokenUsage {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleTokenUsage() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleTokenUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleTokenUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of tokens in the input prompt (prefill phase).</p>
   */
  inline int GetPrefill() const { return m_prefill; }
  inline bool PrefillHasBeenSet() const { return m_prefillHasBeenSet; }
  inline void SetPrefill(int value) {
    m_prefillHasBeenSet = true;
    m_prefill = value;
  }
  inline SampleTokenUsage& WithPrefill(int value) {
    SetPrefill(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of tokens generated (decode phase).</p>
   */
  inline int GetDecode() const { return m_decode; }
  inline bool DecodeHasBeenSet() const { return m_decodeHasBeenSet; }
  inline void SetDecode(int value) {
    m_decodeHasBeenSet = true;
    m_decode = value;
  }
  inline SampleTokenUsage& WithDecode(int value) {
    SetDecode(value);
    return *this;
  }
  ///@}
 private:
  int m_prefill{0};

  int m_decode{0};
  bool m_prefillHasBeenSet = false;
  bool m_decodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
