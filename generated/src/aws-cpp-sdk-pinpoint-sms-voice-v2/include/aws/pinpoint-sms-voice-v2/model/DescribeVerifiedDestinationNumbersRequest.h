/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/VerifiedDestinationNumberFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeVerifiedDestinationNumbersRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeVerifiedDestinationNumbersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVerifiedDestinationNumbers"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of VerifiedDestinationNumberid to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVerifiedDestinationNumberIds() const { return m_verifiedDestinationNumberIds; }
    inline bool VerifiedDestinationNumberIdsHasBeenSet() const { return m_verifiedDestinationNumberIdsHasBeenSet; }
    template<typename VerifiedDestinationNumberIdsT = Aws::Vector<Aws::String>>
    void SetVerifiedDestinationNumberIds(VerifiedDestinationNumberIdsT&& value) { m_verifiedDestinationNumberIdsHasBeenSet = true; m_verifiedDestinationNumberIds = std::forward<VerifiedDestinationNumberIdsT>(value); }
    template<typename VerifiedDestinationNumberIdsT = Aws::Vector<Aws::String>>
    DescribeVerifiedDestinationNumbersRequest& WithVerifiedDestinationNumberIds(VerifiedDestinationNumberIdsT&& value) { SetVerifiedDestinationNumberIds(std::forward<VerifiedDestinationNumberIdsT>(value)); return *this;}
    template<typename VerifiedDestinationNumberIdsT = Aws::String>
    DescribeVerifiedDestinationNumbersRequest& AddVerifiedDestinationNumberIds(VerifiedDestinationNumberIdsT&& value) { m_verifiedDestinationNumberIdsHasBeenSet = true; m_verifiedDestinationNumberIds.emplace_back(std::forward<VerifiedDestinationNumberIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPhoneNumbers() const { return m_destinationPhoneNumbers; }
    inline bool DestinationPhoneNumbersHasBeenSet() const { return m_destinationPhoneNumbersHasBeenSet; }
    template<typename DestinationPhoneNumbersT = Aws::Vector<Aws::String>>
    void SetDestinationPhoneNumbers(DestinationPhoneNumbersT&& value) { m_destinationPhoneNumbersHasBeenSet = true; m_destinationPhoneNumbers = std::forward<DestinationPhoneNumbersT>(value); }
    template<typename DestinationPhoneNumbersT = Aws::Vector<Aws::String>>
    DescribeVerifiedDestinationNumbersRequest& WithDestinationPhoneNumbers(DestinationPhoneNumbersT&& value) { SetDestinationPhoneNumbers(std::forward<DestinationPhoneNumbersT>(value)); return *this;}
    template<typename DestinationPhoneNumbersT = Aws::String>
    DescribeVerifiedDestinationNumbersRequest& AddDestinationPhoneNumbers(DestinationPhoneNumbersT&& value) { m_destinationPhoneNumbersHasBeenSet = true; m_destinationPhoneNumbers.emplace_back(std::forward<DestinationPhoneNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline const Aws::Vector<VerifiedDestinationNumberFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<VerifiedDestinationNumberFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<VerifiedDestinationNumberFilter>>
    DescribeVerifiedDestinationNumbersRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = VerifiedDestinationNumberFilter>
    DescribeVerifiedDestinationNumbersRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    DescribeVerifiedDestinationNumbersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeVerifiedDestinationNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_verifiedDestinationNumberIds;
    bool m_verifiedDestinationNumberIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPhoneNumbers;
    bool m_destinationPhoneNumbersHasBeenSet = false;

    Aws::Vector<VerifiedDestinationNumberFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
