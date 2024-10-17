/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/OptedOutFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeOptedOutNumbersRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeOptedOutNumbersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOptedOutNumbers"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The OptOutListName or OptOutListArn of the OptOutList. You can use
     * <a>DescribeOptOutLists</a> to find the values for OptOutListName and
     * OptOutListArn.</p>  <p>If you are using a shared AWS End User
     * Messaging SMS and Voice resource then you must use the full Amazon Resource
     * Name(ARN).</p> 
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListNameHasBeenSet = true; m_optOutListName.assign(value); }
    inline DescribeOptedOutNumbersRequest& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline DescribeOptedOutNumbersRequest& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersRequest& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of phone numbers to search for in the OptOutList.</p> <p>If you
     * specify an opted out number that isn't valid, an exception is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptedOutNumbers() const{ return m_optedOutNumbers; }
    inline bool OptedOutNumbersHasBeenSet() const { return m_optedOutNumbersHasBeenSet; }
    inline void SetOptedOutNumbers(const Aws::Vector<Aws::String>& value) { m_optedOutNumbersHasBeenSet = true; m_optedOutNumbers = value; }
    inline void SetOptedOutNumbers(Aws::Vector<Aws::String>&& value) { m_optedOutNumbersHasBeenSet = true; m_optedOutNumbers = std::move(value); }
    inline DescribeOptedOutNumbersRequest& WithOptedOutNumbers(const Aws::Vector<Aws::String>& value) { SetOptedOutNumbers(value); return *this;}
    inline DescribeOptedOutNumbersRequest& WithOptedOutNumbers(Aws::Vector<Aws::String>&& value) { SetOptedOutNumbers(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersRequest& AddOptedOutNumbers(const Aws::String& value) { m_optedOutNumbersHasBeenSet = true; m_optedOutNumbers.push_back(value); return *this; }
    inline DescribeOptedOutNumbersRequest& AddOptedOutNumbers(Aws::String&& value) { m_optedOutNumbersHasBeenSet = true; m_optedOutNumbers.push_back(std::move(value)); return *this; }
    inline DescribeOptedOutNumbersRequest& AddOptedOutNumbers(const char* value) { m_optedOutNumbersHasBeenSet = true; m_optedOutNumbers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of OptedOutFilter objects to filter the results on.</p>
     */
    inline const Aws::Vector<OptedOutFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<OptedOutFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<OptedOutFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeOptedOutNumbersRequest& WithFilters(const Aws::Vector<OptedOutFilter>& value) { SetFilters(value); return *this;}
    inline DescribeOptedOutNumbersRequest& WithFilters(Aws::Vector<OptedOutFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersRequest& AddFilters(const OptedOutFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeOptedOutNumbersRequest& AddFilters(OptedOutFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeOptedOutNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeOptedOutNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeOptedOutNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_optedOutNumbers;
    bool m_optedOutNumbersHasBeenSet = false;

    Aws::Vector<OptedOutFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
