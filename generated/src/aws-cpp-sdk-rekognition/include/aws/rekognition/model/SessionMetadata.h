/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
 * <p>Contains metadata about the client that streamed the video for a Face
 * Liveness session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SessionMetadata">AWS
 * API Reference</a></p>
 */
class SessionMetadata {
 public:
  AWS_REKOGNITION_API SessionMetadata() = default;
  AWS_REKOGNITION_API SessionMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_REKOGNITION_API SessionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of SDK that was used to stream the video for the Face Liveness
   * session.</p>  <p>This value is self-reported by the client that streamed
   * the session, and Amazon Rekognition doesn't verify it. Don't rely on it for
   * authentication, authorization, or any other security decision.</p>
   */
  inline const Aws::String& GetSDKType() const { return m_sDKType; }
  inline bool SDKTypeHasBeenSet() const { return m_sDKTypeHasBeenSet; }
  template <typename SDKTypeT = Aws::String>
  void SetSDKType(SDKTypeT&& value) {
    m_sDKTypeHasBeenSet = true;
    m_sDKType = std::forward<SDKTypeT>(value);
  }
  template <typename SDKTypeT = Aws::String>
  SessionMetadata& WithSDKType(SDKTypeT&& value) {
    SetSDKType(std::forward<SDKTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sDKType;
  bool m_sDKTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
