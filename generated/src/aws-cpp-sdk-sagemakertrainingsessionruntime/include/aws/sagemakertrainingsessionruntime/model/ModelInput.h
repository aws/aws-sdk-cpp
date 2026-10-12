/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/EncodedTextChunk.h>

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
 * <p>The tokenized model input composed of ordered encoded text
 * chunks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/ModelInput">AWS
 * API Reference</a></p>
 */
class ModelInput {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ModelInput() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ModelInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ModelInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ordered list of encoded text chunks forming the input sequence.</p>
   */
  inline const Aws::Vector<EncodedTextChunk>& GetChunks() const { return m_chunks; }
  inline bool ChunksHasBeenSet() const { return m_chunksHasBeenSet; }
  template <typename ChunksT = Aws::Vector<EncodedTextChunk>>
  void SetChunks(ChunksT&& value) {
    m_chunksHasBeenSet = true;
    m_chunks = std::forward<ChunksT>(value);
  }
  template <typename ChunksT = Aws::Vector<EncodedTextChunk>>
  ModelInput& WithChunks(ChunksT&& value) {
    SetChunks(std::forward<ChunksT>(value));
    return *this;
  }
  template <typename ChunksT = EncodedTextChunk>
  ModelInput& AddChunks(ChunksT&& value) {
    m_chunksHasBeenSet = true;
    m_chunks.emplace_back(std::forward<ChunksT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EncodedTextChunk> m_chunks;
  bool m_chunksHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
