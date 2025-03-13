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
    AWS_PINPOINTSMSVOICEV2_API DescribeKeywordsRequest() = default;

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
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    DescribeKeywordsRequest& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of keywords to search for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const { return m_keywords; }
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    void SetKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords = std::forward<KeywordsT>(value); }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    DescribeKeywordsRequest& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    template<typename KeywordsT = Aws::String>
    DescribeKeywordsRequest& AddKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords.emplace_back(std::forward<KeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of keyword filters to filter the results.</p>
     */
    inline const Aws::Vector<KeywordFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<KeywordFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<KeywordFilter>>
    DescribeKeywordsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = KeywordFilter>
    DescribeKeywordsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    DescribeKeywordsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
