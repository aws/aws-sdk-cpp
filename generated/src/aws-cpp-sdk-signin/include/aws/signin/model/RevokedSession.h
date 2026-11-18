/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {

/**
 * <p>A session that was revoked</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/RevokedSession">AWS
 * API Reference</a></p>
 */
class RevokedSession {
 public:
  AWS_SIGNIN_API RevokedSession() = default;
  AWS_SIGNIN_API RevokedSession(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API RevokedSession& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The revoked session ARN</p>
   */
  inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
  inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
  template <typename SessionArnT = Aws::String>
  void SetSessionArn(SessionArnT&& value) {
    m_sessionArnHasBeenSet = true;
    m_sessionArn = std::forward<SessionArnT>(value);
  }
  template <typename SessionArnT = Aws::String>
  RevokedSession& WithSessionArn(SessionArnT&& value) {
    SetSessionArn(std::forward<SessionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionArn;
  bool m_sessionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
