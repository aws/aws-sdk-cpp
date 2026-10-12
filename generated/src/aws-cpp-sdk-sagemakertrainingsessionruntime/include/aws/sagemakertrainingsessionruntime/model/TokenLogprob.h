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
 * <p>The log-probability for a single token.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/TokenLogprob">AWS
 * API Reference</a></p>
 */
class TokenLogprob {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TokenLogprob() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TokenLogprob(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TokenLogprob& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The vocabulary token ID.</p>
   */
  inline int GetTokenId() const { return m_tokenId; }
  inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
  inline void SetTokenId(int value) {
    m_tokenIdHasBeenSet = true;
    m_tokenId = value;
  }
  inline TokenLogprob& WithTokenId(int value) {
    SetTokenId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log-probability of the token.</p>
   */
  inline double GetLogprob() const { return m_logprob; }
  inline bool LogprobHasBeenSet() const { return m_logprobHasBeenSet; }
  inline void SetLogprob(double value) {
    m_logprobHasBeenSet = true;
    m_logprob = value;
  }
  inline TokenLogprob& WithLogprob(double value) {
    SetLogprob(value);
    return *this;
  }
  ///@}
 private:
  int m_tokenId{0};

  double m_logprob{0.0};
  bool m_tokenIdHasBeenSet = false;
  bool m_logprobHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
