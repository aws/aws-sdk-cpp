/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class CreateDataRetentionBotChallengeResult {
 public:
  AWS_WICKR_API CreateDataRetentionBotChallengeResult() = default;
  AWS_WICKR_API CreateDataRetentionBotChallengeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API CreateDataRetentionBotChallengeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The newly generated challenge password for the data retention bot.</p>
   */
  inline const Aws::String& GetChallenge() const { return m_challenge; }
  template <typename ChallengeT = Aws::String>
  void SetChallenge(ChallengeT&& value) {
    m_challengeHasBeenSet = true;
    m_challenge = std::forward<ChallengeT>(value);
  }
  template <typename ChallengeT = Aws::String>
  CreateDataRetentionBotChallengeResult& WithChallenge(ChallengeT&& value) {
    SetChallenge(std::forward<ChallengeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateDataRetentionBotChallengeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_challenge;

  Aws::String m_requestId;
  bool m_challengeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
