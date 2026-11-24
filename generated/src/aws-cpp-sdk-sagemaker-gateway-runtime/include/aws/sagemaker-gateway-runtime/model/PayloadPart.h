/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {
/**
 * <p>A part of the streamed response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/PayloadPart">AWS
 * API Reference</a></p>
 */
class PayloadPart {
 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API PayloadPart() = default;
  AWS_SAGEMAKERGATEWAYRUNTIME_API PayloadPart(Aws::Vector<unsigned char>&& value) { m_bytes = std::move(value); }

  ///@{
  /**
   * <p>The bytes of this part: a chunk of the model server's server-sent event (SSE)
   * stream.</p>
   */
  inline const Aws::Vector<unsigned char>& GetBytes() const { return m_bytes; }
  inline Aws::Vector<unsigned char>&& GetBytesWithOwnership() { return std::move(m_bytes); }
  inline void SetBytes(const Aws::Vector<unsigned char>& value) {
    m_bytesHasBeenSet = true;
    m_bytes = value;
  }
  inline void SetBytes(Aws::Vector<unsigned char>&& value) {
    m_bytesHasBeenSet = true;
    m_bytes = std::move(value);
  }
  inline PayloadPart& WithBytes(const Aws::Vector<unsigned char>& value) {
    SetBytes(value);
    return *this;
  }
  inline PayloadPart& WithBytes(Aws::Vector<unsigned char>&& value) {
    SetBytes(std::move(value));
    return *this;
  }
  ///@}

 private:
  Aws::Vector<unsigned char> m_bytes;
  bool m_bytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
