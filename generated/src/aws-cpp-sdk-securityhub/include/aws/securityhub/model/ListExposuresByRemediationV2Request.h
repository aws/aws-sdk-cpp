/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class ListExposuresByRemediationV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API ListExposuresByRemediationV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListExposuresByRemediationV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier (ID) of an existing remediation target to list exposure
   * findings for.</p>
   */
  inline const Aws::String& GetTargetUid() const { return m_targetUid; }
  inline bool TargetUidHasBeenSet() const { return m_targetUidHasBeenSet; }
  template <typename TargetUidT = Aws::String>
  void SetTargetUid(TargetUidT&& value) {
    m_targetUidHasBeenSet = true;
    m_targetUid = std::forward<TargetUidT>(value);
  }
  template <typename TargetUidT = Aws::String>
  ListExposuresByRemediationV2Request& WithTargetUid(TargetUidT&& value) {
    SetTargetUid(std::forward<TargetUidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return. Valid range is 1-100. If you don't
   * specify a value, the operation returns up to 25 results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListExposuresByRemediationV2Request& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token used to paginate the exposures list returned. On your first call to
   * <code>ListExposuresByRemediationV2</code>, omit this parameter or set it to
   * <code>NULL</code>. For subsequent calls, use the <code>NextToken</code> value
   * returned in the previous response to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExposuresByRemediationV2Request& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetUid;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_targetUidHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
