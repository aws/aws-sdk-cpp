/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/FeedbackCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Rekognition {
namespace Model {

/**
 * <p>Describes a condition that was detected in the Face Liveness video and that
 * contributed to the confidence score returned for the session.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FeedbackItem">AWS
 * API Reference</a></p>
 */
class FeedbackItem {
 public:
  AWS_REKOGNITION_API FeedbackItem() = default;
  AWS_REKOGNITION_API FeedbackItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_REKOGNITION_API FeedbackItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A code identifying the condition that was detected during the Face Liveness
   * session.</p>
   */
  inline FeedbackCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(FeedbackCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline FeedbackItem& WithCode(FeedbackCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the detected condition, suitable for
   * displaying to an end user before they retry a Face Liveness check. Use
   * <code>Code</code> rather than this message for programmatic decisions, because
   * the message text can change.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  FeedbackItem& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  FeedbackCode m_code{FeedbackCode::NOT_SET};

  Aws::String m_message;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
