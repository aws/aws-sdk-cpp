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
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationVersionsRequest();

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
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }
    inline DescribeRegistrationVersionsRequest& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline DescribeRegistrationVersionsRequest& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsRequest& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of registration version numbers.</p>
     */
    inline const Aws::Vector<long long>& GetVersionNumbers() const{ return m_versionNumbers; }
    inline bool VersionNumbersHasBeenSet() const { return m_versionNumbersHasBeenSet; }
    inline void SetVersionNumbers(const Aws::Vector<long long>& value) { m_versionNumbersHasBeenSet = true; m_versionNumbers = value; }
    inline void SetVersionNumbers(Aws::Vector<long long>&& value) { m_versionNumbersHasBeenSet = true; m_versionNumbers = std::move(value); }
    inline DescribeRegistrationVersionsRequest& WithVersionNumbers(const Aws::Vector<long long>& value) { SetVersionNumbers(value); return *this;}
    inline DescribeRegistrationVersionsRequest& WithVersionNumbers(Aws::Vector<long long>&& value) { SetVersionNumbers(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsRequest& AddVersionNumbers(long long value) { m_versionNumbersHasBeenSet = true; m_versionNumbers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline const Aws::Vector<RegistrationVersionFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<RegistrationVersionFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<RegistrationVersionFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeRegistrationVersionsRequest& WithFilters(const Aws::Vector<RegistrationVersionFilter>& value) { SetFilters(value); return *this;}
    inline DescribeRegistrationVersionsRequest& WithFilters(Aws::Vector<RegistrationVersionFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsRequest& AddFilters(const RegistrationVersionFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeRegistrationVersionsRequest& AddFilters(RegistrationVersionFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeRegistrationVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRegistrationVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRegistrationVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
