/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeProtectConfigurationsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeProtectConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProtectConfigurations"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectConfigurationIds() const { return m_protectConfigurationIds; }
    inline bool ProtectConfigurationIdsHasBeenSet() const { return m_protectConfigurationIdsHasBeenSet; }
    template<typename ProtectConfigurationIdsT = Aws::Vector<Aws::String>>
    void SetProtectConfigurationIds(ProtectConfigurationIdsT&& value) { m_protectConfigurationIdsHasBeenSet = true; m_protectConfigurationIds = std::forward<ProtectConfigurationIdsT>(value); }
    template<typename ProtectConfigurationIdsT = Aws::Vector<Aws::String>>
    DescribeProtectConfigurationsRequest& WithProtectConfigurationIds(ProtectConfigurationIdsT&& value) { SetProtectConfigurationIds(std::forward<ProtectConfigurationIdsT>(value)); return *this;}
    template<typename ProtectConfigurationIdsT = Aws::String>
    DescribeProtectConfigurationsRequest& AddProtectConfigurationIds(ProtectConfigurationIdsT&& value) { m_protectConfigurationIdsHasBeenSet = true; m_protectConfigurationIds.emplace_back(std::forward<ProtectConfigurationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline const Aws::Vector<ProtectConfigurationFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<ProtectConfigurationFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<ProtectConfigurationFilter>>
    DescribeProtectConfigurationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = ProtectConfigurationFilter>
    DescribeProtectConfigurationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeProtectConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeProtectConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_protectConfigurationIds;
    bool m_protectConfigurationIdsHasBeenSet = false;

    Aws::Vector<ProtectConfigurationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
