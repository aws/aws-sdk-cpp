/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/EncodedTextChunkType.h>

#include <utility>

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
 * <p>A chunk of pre-tokenized text represented as a list of token
 * IDs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/EncodedTextChunk">AWS
 * API Reference</a></p>
 */
class EncodedTextChunk {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API EncodedTextChunk() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API EncodedTextChunk(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API EncodedTextChunk& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The token IDs representing the encoded text.</p>
   */
  inline const Aws::Vector<int>& GetTokens() const { return m_tokens; }
  inline bool TokensHasBeenSet() const { return m_tokensHasBeenSet; }
  template <typename TokensT = Aws::Vector<int>>
  void SetTokens(TokensT&& value) {
    m_tokensHasBeenSet = true;
    m_tokens = std::forward<TokensT>(value);
  }
  template <typename TokensT = Aws::Vector<int>>
  EncodedTextChunk& WithTokens(TokensT&& value) {
    SetTokens(std::forward<TokensT>(value));
    return *this;
  }
  inline EncodedTextChunk& AddTokens(int value) {
    m_tokensHasBeenSet = true;
    m_tokens.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the chunk encoding.</p>
   */
  inline EncodedTextChunkType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EncodedTextChunkType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EncodedTextChunk& WithType(EncodedTextChunkType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<int> m_tokens;

  EncodedTextChunkType m_type{EncodedTextChunkType::NOT_SET};
  bool m_tokensHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
