/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/Owner.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsAgentFilter.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class DescribeRcsAgentsRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API DescribeRcsAgentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeRcsAgents"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An array of unique identifiers for the RCS agents. This is an array of
   * strings that can be either the RcsAgentId or RcsAgentArn.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRcsAgentIds() const { return m_rcsAgentIds; }
  inline bool RcsAgentIdsHasBeenSet() const { return m_rcsAgentIdsHasBeenSet; }
  template <typename RcsAgentIdsT = Aws::Vector<Aws::String>>
  void SetRcsAgentIds(RcsAgentIdsT&& value) {
    m_rcsAgentIdsHasBeenSet = true;
    m_rcsAgentIds = std::forward<RcsAgentIdsT>(value);
  }
  template <typename RcsAgentIdsT = Aws::Vector<Aws::String>>
  DescribeRcsAgentsRequest& WithRcsAgentIds(RcsAgentIdsT&& value) {
    SetRcsAgentIds(std::forward<RcsAgentIdsT>(value));
    return *this;
  }
  template <typename RcsAgentIdsT = Aws::String>
  DescribeRcsAgentsRequest& AddRcsAgentIds(RcsAgentIdsT&& value) {
    m_rcsAgentIdsHasBeenSet = true;
    m_rcsAgentIds.emplace_back(std::forward<RcsAgentIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use <code>SELF</code> to filter the list of RCS agents to ones your account
   * owns or use <code>SHARED</code> to filter on RCS agents shared with your
   * account. The <code>Owner</code> and <code>RcsAgentIds</code> parameters can't be
   * used at the same time.</p>
   */
  inline Owner GetOwner() const { return m_owner; }
  inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
  inline void SetOwner(Owner value) {
    m_ownerHasBeenSet = true;
    m_owner = value;
  }
  inline DescribeRcsAgentsRequest& WithOwner(Owner value) {
    SetOwner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of RcsAgentFilter objects to filter the results.</p>
   */
  inline const Aws::Vector<RcsAgentFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<RcsAgentFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<RcsAgentFilter>>
  DescribeRcsAgentsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = RcsAgentFilter>
  DescribeRcsAgentsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to be used for the next set of paginated results. You don't need to
   * supply a value for this field in the initial request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeRcsAgentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per each request.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeRcsAgentsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_rcsAgentIds;

  Owner m_owner{Owner::NOT_SET};

  Aws::Vector<RcsAgentFilter> m_filters;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_rcsAgentIdsHasBeenSet = false;
  bool m_ownerHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
