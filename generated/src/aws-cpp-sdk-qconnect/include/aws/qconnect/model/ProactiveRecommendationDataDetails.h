/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Details about a proactive recommendation, including the token used to
 * retrieve its chunked response with <code>GetNextMessage</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ProactiveRecommendationDataDetails">AWS
 * API Reference</a></p>
 */
class ProactiveRecommendationDataDetails {
 public:
  AWS_QCONNECT_API ProactiveRecommendationDataDetails() = default;
  AWS_QCONNECT_API ProactiveRecommendationDataDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ProactiveRecommendationDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The token used to retrieve the next message in the proactive recommendation.
   * Pass this token in a <code>GetNextMessage</code> request to continue receiving
   * the chunked proactive response. Each response returns the next token to use
   * until the chunked response is complete.</p>
   */
  inline const Aws::String& GetNextMessageToken() const { return m_nextMessageToken; }
  inline bool NextMessageTokenHasBeenSet() const { return m_nextMessageTokenHasBeenSet; }
  template <typename NextMessageTokenT = Aws::String>
  void SetNextMessageToken(NextMessageTokenT&& value) {
    m_nextMessageTokenHasBeenSet = true;
    m_nextMessageToken = std::forward<NextMessageTokenT>(value);
  }
  template <typename NextMessageTokenT = Aws::String>
  ProactiveRecommendationDataDetails& WithNextMessageToken(NextMessageTokenT&& value) {
    SetNextMessageToken(std::forward<NextMessageTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextMessageToken;
  bool m_nextMessageTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
