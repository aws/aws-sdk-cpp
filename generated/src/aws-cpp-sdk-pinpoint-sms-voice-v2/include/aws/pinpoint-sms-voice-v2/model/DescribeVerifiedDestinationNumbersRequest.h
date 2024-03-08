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
    AWS_PINPOINTSMSVOICEV2_API DescribeVerifiedDestinationNumbersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVerifiedDestinationNumbers"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVerifiedDestinationNumberIds() const{ return m_verifiedDestinationNumberIds; }

    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline bool VerifiedDestinationNumberIdsHasBeenSet() const { return m_verifiedDestinationNumberIdsHasBeenSet; }

    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline void SetVerifiedDestinationNumberIds(const Aws::Vector<Aws::String>& value) { m_verifiedDestinationNumberIdsHasBeenSet = true; m_verifiedDestinationNumberIds = value; }

    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline void SetVerifiedDestinationNumberIds(Aws::Vector<Aws::String>&& value) { m_verifiedDestinationNumberIdsHasBeenSet = true; m_verifiedDestinationNumberIds = std::move(value); }

    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithVerifiedDestinationNumberIds(const Aws::Vector<Aws::String>& value) { SetVerifiedDestinationNumberIds(value); return *this;}

    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithVerifiedDestinationNumberIds(Aws::Vector<Aws::String>&& value) { SetVerifiedDestinationNumberIds(std::move(value)); return *this;}

    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& AddVerifiedDestinationNumberIds(const Aws::String& value) { m_verifiedDestinationNumberIdsHasBeenSet = true; m_verifiedDestinationNumberIds.push_back(value); return *this; }

    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& AddVerifiedDestinationNumberIds(Aws::String&& value) { m_verifiedDestinationNumberIdsHasBeenSet = true; m_verifiedDestinationNumberIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of VerifiedDestinationNumberid to retreive.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& AddVerifiedDestinationNumberIds(const char* value) { m_verifiedDestinationNumberIdsHasBeenSet = true; m_verifiedDestinationNumberIds.push_back(value); return *this; }


    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPhoneNumbers() const{ return m_destinationPhoneNumbers; }

    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline bool DestinationPhoneNumbersHasBeenSet() const { return m_destinationPhoneNumbersHasBeenSet; }

    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumbers(const Aws::Vector<Aws::String>& value) { m_destinationPhoneNumbersHasBeenSet = true; m_destinationPhoneNumbers = value; }

    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumbers(Aws::Vector<Aws::String>&& value) { m_destinationPhoneNumbersHasBeenSet = true; m_destinationPhoneNumbers = std::move(value); }

    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithDestinationPhoneNumbers(const Aws::Vector<Aws::String>& value) { SetDestinationPhoneNumbers(value); return *this;}

    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithDestinationPhoneNumbers(Aws::Vector<Aws::String>&& value) { SetDestinationPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& AddDestinationPhoneNumbers(const Aws::String& value) { m_destinationPhoneNumbersHasBeenSet = true; m_destinationPhoneNumbers.push_back(value); return *this; }

    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& AddDestinationPhoneNumbers(Aws::String&& value) { m_destinationPhoneNumbersHasBeenSet = true; m_destinationPhoneNumbers.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of verified destination phone number, in E.164 format.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& AddDestinationPhoneNumbers(const char* value) { m_destinationPhoneNumbersHasBeenSet = true; m_destinationPhoneNumbers.push_back(value); return *this; }


    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline const Aws::Vector<VerifiedDestinationNumberFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline void SetFilters(const Aws::Vector<VerifiedDestinationNumberFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline void SetFilters(Aws::Vector<VerifiedDestinationNumberFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithFilters(const Aws::Vector<VerifiedDestinationNumberFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithFilters(Aws::Vector<VerifiedDestinationNumberFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& AddFilters(const VerifiedDestinationNumberFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of VerifiedDestinationNumberFilter objects to filter the
     * results.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& AddFilters(VerifiedDestinationNumberFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline DescribeVerifiedDestinationNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_verifiedDestinationNumberIds;
    bool m_verifiedDestinationNumberIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPhoneNumbers;
    bool m_destinationPhoneNumbersHasBeenSet = false;

    Aws::Vector<VerifiedDestinationNumberFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
