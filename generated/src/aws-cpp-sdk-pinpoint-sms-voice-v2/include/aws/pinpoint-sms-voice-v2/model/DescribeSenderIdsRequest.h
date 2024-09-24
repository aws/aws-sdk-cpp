/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/Owner.h>
#include <aws/pinpoint-sms-voice-v2/model/SenderIdAndCountry.h>
#include <aws/pinpoint-sms-voice-v2/model/SenderIdFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeSenderIdsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeSenderIdsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSenderIds"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of SenderIdAndCountry objects to search for.</p>  <p>If
     * you are using a shared AWS End User Messaging SMS and Voice resource then you
     * must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::Vector<SenderIdAndCountry>& GetSenderIds() const{ return m_senderIds; }
    inline bool SenderIdsHasBeenSet() const { return m_senderIdsHasBeenSet; }
    inline void SetSenderIds(const Aws::Vector<SenderIdAndCountry>& value) { m_senderIdsHasBeenSet = true; m_senderIds = value; }
    inline void SetSenderIds(Aws::Vector<SenderIdAndCountry>&& value) { m_senderIdsHasBeenSet = true; m_senderIds = std::move(value); }
    inline DescribeSenderIdsRequest& WithSenderIds(const Aws::Vector<SenderIdAndCountry>& value) { SetSenderIds(value); return *this;}
    inline DescribeSenderIdsRequest& WithSenderIds(Aws::Vector<SenderIdAndCountry>&& value) { SetSenderIds(std::move(value)); return *this;}
    inline DescribeSenderIdsRequest& AddSenderIds(const SenderIdAndCountry& value) { m_senderIdsHasBeenSet = true; m_senderIds.push_back(value); return *this; }
    inline DescribeSenderIdsRequest& AddSenderIds(SenderIdAndCountry&& value) { m_senderIdsHasBeenSet = true; m_senderIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of SenderIdFilter objects to filter the results.</p>
     */
    inline const Aws::Vector<SenderIdFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<SenderIdFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<SenderIdFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeSenderIdsRequest& WithFilters(const Aws::Vector<SenderIdFilter>& value) { SetFilters(value); return *this;}
    inline DescribeSenderIdsRequest& WithFilters(Aws::Vector<SenderIdFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeSenderIdsRequest& AddFilters(const SenderIdFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeSenderIdsRequest& AddFilters(SenderIdFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeSenderIdsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSenderIdsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSenderIdsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSenderIdsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use <code>SELF</code> to filter the list of Sender Ids to ones your account
     * owns or use <code>SHARED</code> to filter on Sender Ids shared with your
     * account. The <code>Owner</code> and <code>SenderIds</code> parameters can't be
     * used at the same time. </p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Owner& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Owner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline DescribeSenderIdsRequest& WithOwner(const Owner& value) { SetOwner(value); return *this;}
    inline DescribeSenderIdsRequest& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SenderIdAndCountry> m_senderIds;
    bool m_senderIdsHasBeenSet = false;

    Aws::Vector<SenderIdFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
