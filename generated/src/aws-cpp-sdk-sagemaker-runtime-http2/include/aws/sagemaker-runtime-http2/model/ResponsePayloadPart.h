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
 * <p>Response payload part structure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-runtime-http2-2025-10-01/ResponsePayloadPart">AWS
 * API Reference</a></p>
 */
class ResponsePayloadPart {
 public:
  AWS_SAGEMAKERRUNTIMEHTTP2_API ResponsePayloadPart() = default;
  AWS_SAGEMAKERRUNTIMEHTTP2_API ResponsePayloadPart(Aws::Vector<unsigned char>&& value) { m_bytes = std::move(value); }

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
  inline ResponsePayloadPart& WithBytes(const Aws::Vector<unsigned char>& value) {
    SetBytes(value);
    return *this;
  }
  inline ResponsePayloadPart& WithBytes(Aws::Vector<unsigned char>&& value) {
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
  ResponsePayloadPart& WithString(T&& value) {
    SetString(value);
    return *this;
  }

  inline const Aws::String GetResponsePayloadPartDataTypeString() const { return m_responsePayloadPartDataTypeString; }
  inline bool ResponsePayloadPartDataTypeStringHasBeenSet() const { return m_responsePayloadPartDataTypeStringHasBeenSet; }
  template <typename T = Aws::String>
  void SetResponsePayloadPartDataTypeString(T&& value) {
    m_responsePayloadPartDataTypeStringHasBeenSet = true;
    m_responsePayloadPartDataTypeString = std::forward<T>(value);
  }
  template <typename T = Aws::String>
  ResponsePayloadPart& WithResponsePayloadPartDataTypeString(T&& value) {
    SetResponsePayloadPartDataTypeString(value);
    return *this;
  }

  inline const Aws::String GetResponsePayloadPartCompletionStateString() const { return m_responsePayloadPartCompletionStateString; }
  inline bool ResponsePayloadPartCompletionStateStringHasBeenSet() const { return m_responsePayloadPartCompletionStateStringHasBeenSet; }
  template <typename T = Aws::String>
  void SetResponsePayloadPartCompletionStateString(T&& value) {
    m_responsePayloadPartCompletionStateStringHasBeenSet = true;
    m_responsePayloadPartCompletionStateString = std::forward<T>(value);
  }
  template <typename T = Aws::String>
  ResponsePayloadPart& WithResponsePayloadPartCompletionStateString(T&& value) {
    SetResponsePayloadPartCompletionStateString(value);
    return *this;
  }

 private:
  Aws::Vector<unsigned char> m_bytes;
  bool m_bytesHasBeenSet = false;
  Aws::String m_string;
  bool m_stringHasBeenSet;
  Aws::String m_responsePayloadPartDataTypeString;
  bool m_responsePayloadPartDataTypeStringHasBeenSet;
  Aws::String m_responsePayloadPartCompletionStateString;
  bool m_responsePayloadPartCompletionStateStringHasBeenSet;
};

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
