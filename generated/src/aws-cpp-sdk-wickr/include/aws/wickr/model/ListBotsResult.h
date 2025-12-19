/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/Bot.h>

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
class ListBotsResult {
 public:
  AWS_WICKR_API ListBotsResult() = default;
  AWS_WICKR_API ListBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API ListBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of bot objects matching the specified filters and within the current
   * page.</p>
   */
  inline const Aws::Vector<Bot>& GetBots() const { return m_bots; }
  template <typename BotsT = Aws::Vector<Bot>>
  void SetBots(BotsT&& value) {
    m_botsHasBeenSet = true;
    m_bots = std::forward<BotsT>(value);
  }
  template <typename BotsT = Aws::Vector<Bot>>
  ListBotsResult& WithBots(BotsT&& value) {
    SetBots(std::forward<BotsT>(value));
    return *this;
  }
  template <typename BotsT = Bot>
  ListBotsResult& AddBots(BotsT&& value) {
    m_botsHasBeenSet = true;
    m_bots.emplace_back(std::forward<BotsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use for retrieving the next page of results. If this is not
   * present, there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBotsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListBotsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Bot> m_bots;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_botsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
