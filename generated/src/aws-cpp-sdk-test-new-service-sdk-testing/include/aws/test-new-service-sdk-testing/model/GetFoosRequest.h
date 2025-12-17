/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingRequest.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>

#include <utility>

namespace Aws {
namespace TestNewServiceSDKTesting {
namespace Model {

/**
 */
class GetFoosRequest : public TestNewServiceSDKTestingRequest {
 public:
  AWS_TESTNEWSERVICESDKTESTING_API GetFoosRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetFoos"; }

  AWS_TESTNEWSERVICESDKTESTING_API Aws::String SerializePayload() const override;

  AWS_TESTNEWSERVICESDKTESTING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetFoosRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetFoosRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDebug() const { return m_debug; }
  inline bool DebugHasBeenSet() const { return m_debugHasBeenSet; }
  template <typename DebugT = Aws::String>
  void SetDebug(DebugT&& value) {
    m_debugHasBeenSet = true;
    m_debug = std::forward<DebugT>(value);
  }
  template <typename DebugT = Aws::String>
  GetFoosRequest& WithDebug(DebugT&& value) {
    SetDebug(std::forward<DebugT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::String m_debug;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_debugHasBeenSet = false;
};

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
