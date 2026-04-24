/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyTemplateFilter.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class DescribeNotifyTemplatesRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API DescribeNotifyTemplatesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeNotifyTemplates"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An array of template IDs to describe.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTemplateIds() const { return m_templateIds; }
  inline bool TemplateIdsHasBeenSet() const { return m_templateIdsHasBeenSet; }
  template <typename TemplateIdsT = Aws::Vector<Aws::String>>
  void SetTemplateIds(TemplateIdsT&& value) {
    m_templateIdsHasBeenSet = true;
    m_templateIds = std::forward<TemplateIdsT>(value);
  }
  template <typename TemplateIdsT = Aws::Vector<Aws::String>>
  DescribeNotifyTemplatesRequest& WithTemplateIds(TemplateIdsT&& value) {
    SetTemplateIds(std::forward<TemplateIdsT>(value));
    return *this;
  }
  template <typename TemplateIdsT = Aws::String>
  DescribeNotifyTemplatesRequest& AddTemplateIds(TemplateIdsT&& value) {
    m_templateIdsHasBeenSet = true;
    m_templateIds.emplace_back(std::forward<TemplateIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of NotifyTemplateFilter objects to filter the results on.</p>
   */
  inline const Aws::Vector<NotifyTemplateFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<NotifyTemplateFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<NotifyTemplateFilter>>
  DescribeNotifyTemplatesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = NotifyTemplateFilter>
  DescribeNotifyTemplatesRequest& AddFilters(FiltersT&& value) {
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
  DescribeNotifyTemplatesRequest& WithNextToken(NextTokenT&& value) {
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
  inline DescribeNotifyTemplatesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_templateIds;

  Aws::Vector<NotifyTemplateFilter> m_filters;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_templateIdsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
