/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeRegistrationVersionsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRegistrationVersions"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    DescribeRegistrationVersionsRequest& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of registration version numbers.</p>
     */
    inline const Aws::Vector<long long>& GetVersionNumbers() const { return m_versionNumbers; }
    inline bool VersionNumbersHasBeenSet() const { return m_versionNumbersHasBeenSet; }
    template<typename VersionNumbersT = Aws::Vector<long long>>
    void SetVersionNumbers(VersionNumbersT&& value) { m_versionNumbersHasBeenSet = true; m_versionNumbers = std::forward<VersionNumbersT>(value); }
    template<typename VersionNumbersT = Aws::Vector<long long>>
    DescribeRegistrationVersionsRequest& WithVersionNumbers(VersionNumbersT&& value) { SetVersionNumbers(std::forward<VersionNumbersT>(value)); return *this;}
    inline DescribeRegistrationVersionsRequest& AddVersionNumbers(long long value) { m_versionNumbersHasBeenSet = true; m_versionNumbers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline const Aws::Vector<RegistrationVersionFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<RegistrationVersionFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<RegistrationVersionFilter>>
    DescribeRegistrationVersionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = RegistrationVersionFilter>
    DescribeRegistrationVersionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    DescribeRegistrationVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeRegistrationVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    Aws::Vector<long long> m_versionNumbers;
    bool m_versionNumbersHasBeenSet = false;

    Aws::Vector<RegistrationVersionFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
