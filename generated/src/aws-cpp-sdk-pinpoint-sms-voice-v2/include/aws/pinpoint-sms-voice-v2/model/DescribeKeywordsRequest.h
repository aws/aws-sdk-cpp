/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/KeywordFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeKeywordsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeKeywordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeKeywords"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * SenderId or SenderIdArn. You can use <a>DescribePhoneNumbers</a> to find the
     * values for PhoneNumberId and PhoneNumberArn while <a>DescribeSenderIds</a> can
     * be used to get the values for SenderId and SenderIdArn.</p>  <p>If
     * you are using a shared AWS End User Messaging SMS and Voice resource then you
     * must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }
    inline DescribeKeywordsRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline DescribeKeywordsRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline DescribeKeywordsRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of keywords to search for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const{ return m_keywords; }
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }
    inline void SetKeywords(const Aws::Vector<Aws::String>& value) { m_keywordsHasBeenSet = true; m_keywords = value; }
    inline void SetKeywords(Aws::Vector<Aws::String>&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }
    inline DescribeKeywordsRequest& WithKeywords(const Aws::Vector<Aws::String>& value) { SetKeywords(value); return *this;}
    inline DescribeKeywordsRequest& WithKeywords(Aws::Vector<Aws::String>&& value) { SetKeywords(std::move(value)); return *this;}
    inline DescribeKeywordsRequest& AddKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords.push_back(value); return *this; }
    inline DescribeKeywordsRequest& AddKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords.push_back(std::move(value)); return *this; }
    inline DescribeKeywordsRequest& AddKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of keyword filters to filter the results.</p>
     */
    inline const Aws::Vector<KeywordFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<KeywordFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<KeywordFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeKeywordsRequest& WithFilters(const Aws::Vector<KeywordFilter>& value) { SetFilters(value); return *this;}
    inline DescribeKeywordsRequest& WithFilters(Aws::Vector<KeywordFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeKeywordsRequest& AddFilters(const KeywordFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeKeywordsRequest& AddFilters(KeywordFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeKeywordsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeKeywordsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeKeywordsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeKeywordsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::Vector<Aws::String> m_keywords;
    bool m_keywordsHasBeenSet = false;

    Aws::Vector<KeywordFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
