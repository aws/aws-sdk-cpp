/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/ConfigurationSetFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeConfigurationSetsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeConfigurationSetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationSets"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of strings. Each element can be either a ConfigurationSetName or
     * ConfigurationSetArn.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationSetNames() const { return m_configurationSetNames; }
    inline bool ConfigurationSetNamesHasBeenSet() const { return m_configurationSetNamesHasBeenSet; }
    template<typename ConfigurationSetNamesT = Aws::Vector<Aws::String>>
    void SetConfigurationSetNames(ConfigurationSetNamesT&& value) { m_configurationSetNamesHasBeenSet = true; m_configurationSetNames = std::forward<ConfigurationSetNamesT>(value); }
    template<typename ConfigurationSetNamesT = Aws::Vector<Aws::String>>
    DescribeConfigurationSetsRequest& WithConfigurationSetNames(ConfigurationSetNamesT&& value) { SetConfigurationSetNames(std::forward<ConfigurationSetNamesT>(value)); return *this;}
    template<typename ConfigurationSetNamesT = Aws::String>
    DescribeConfigurationSetsRequest& AddConfigurationSetNames(ConfigurationSetNamesT&& value) { m_configurationSetNamesHasBeenSet = true; m_configurationSetNames.emplace_back(std::forward<ConfigurationSetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of filters to apply to the results that are returned.</p>
     */
    inline const Aws::Vector<ConfigurationSetFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<ConfigurationSetFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<ConfigurationSetFilter>>
    DescribeConfigurationSetsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = ConfigurationSetFilter>
    DescribeConfigurationSetsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    DescribeConfigurationSetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeConfigurationSetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_configurationSetNames;
    bool m_configurationSetNamesHasBeenSet = false;

    Aws::Vector<ConfigurationSetFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
