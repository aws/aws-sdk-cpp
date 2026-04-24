/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Model {
/**
 * <p>Request payload part structure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-runtime-http2-2025-10-01/RequestPayloadPart">AWS
 * API Reference</a></p>
 */
class RequestPayloadPart {
 public:
  AWS_SAGEMAKERRUNTIMEHTTP2_API RequestPayloadPart() = default;
  AWS_SAGEMAKERRUNTIMEHTTP2_API RequestPayloadPart(Aws::Vector<unsigned char>&& value) { m_bytes = std::move(value); }

  ///@{
  /**
   * <p>The payload bytes.</p>
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
  inline RequestPayloadPart& WithBytes(const Aws::Vector<unsigned char>& value) {
    SetBytes(value);
    return *this;
  }
  inline RequestPayloadPart& WithBytes(Aws::Vector<unsigned char>&& value) {
    SetBytes(std::move(value));
    return *this;
  }
  ///@}

  inline const Aws::String GetString() const { return m_string; }
  inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
  template <typename T = Aws::String>
  void SetString(T&& value) {
    m_stringHasBeenSet = true;
    m_string = std::forward<T>(value);
  }
  template <typename T = Aws::String>
  RequestPayloadPart& WithString(T&& value) {
    SetString(value);
    return *this;
  }

  inline const Aws::String GetRequestPayloadPartDataTypeString() const { return m_requestPayloadPartDataTypeString; }
  inline bool RequestPayloadPartDataTypeStringHasBeenSet() const { return m_requestPayloadPartDataTypeStringHasBeenSet; }
  template <typename T = Aws::String>
  void SetRequestPayloadPartDataTypeString(T&& value) {
    m_requestPayloadPartDataTypeStringHasBeenSet = true;
    m_requestPayloadPartDataTypeString = std::forward<T>(value);
  }
  template <typename T = Aws::String>
  RequestPayloadPart& WithRequestPayloadPartDataTypeString(T&& value) {
    SetRequestPayloadPartDataTypeString(value);
    return *this;
  }

  inline const Aws::String GetRequestPayloadPartCompletionStateString() const { return m_requestPayloadPartCompletionStateString; }
  inline bool RequestPayloadPartCompletionStateStringHasBeenSet() const { return m_requestPayloadPartCompletionStateStringHasBeenSet; }
  template <typename T = Aws::String>
  void SetRequestPayloadPartCompletionStateString(T&& value) {
    m_requestPayloadPartCompletionStateStringHasBeenSet = true;
    m_requestPayloadPartCompletionStateString = std::forward<T>(value);
  }
  template <typename T = Aws::String>
  RequestPayloadPart& WithRequestPayloadPartCompletionStateString(T&& value) {
    SetRequestPayloadPartCompletionStateString(value);
    return *this;
  }

 private:
  Aws::Vector<unsigned char> m_bytes;
  bool m_bytesHasBeenSet = false;
  Aws::String m_string;
  bool m_stringHasBeenSet;
  Aws::String m_requestPayloadPartDataTypeString;
  bool m_requestPayloadPartDataTypeStringHasBeenSet;
  Aws::String m_requestPayloadPartCompletionStateString;
  bool m_requestPayloadPartCompletionStateStringHasBeenSet;
};

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
