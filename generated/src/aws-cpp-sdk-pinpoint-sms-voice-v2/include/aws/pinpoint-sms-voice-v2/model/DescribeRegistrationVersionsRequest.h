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


    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


    /**
     * <p>An array of registration version numbers.</p>
     */
    inline const Aws::Vector<long long>& GetVersionNumbers() const{ return m_versionNumbers; }

    /**
     * <p>An array of registration version numbers.</p>
     */
    inline bool VersionNumbersHasBeenSet() const { return m_versionNumbersHasBeenSet; }

    /**
     * <p>An array of registration version numbers.</p>
     */
    inline void SetVersionNumbers(const Aws::Vector<long long>& value) { m_versionNumbersHasBeenSet = true; m_versionNumbers = value; }

    /**
     * <p>An array of registration version numbers.</p>
     */
    inline void SetVersionNumbers(Aws::Vector<long long>&& value) { m_versionNumbersHasBeenSet = true; m_versionNumbers = std::move(value); }

    /**
     * <p>An array of registration version numbers.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithVersionNumbers(const Aws::Vector<long long>& value) { SetVersionNumbers(value); return *this;}

    /**
     * <p>An array of registration version numbers.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithVersionNumbers(Aws::Vector<long long>&& value) { SetVersionNumbers(std::move(value)); return *this;}

    /**
     * <p>An array of registration version numbers.</p>
     */
    inline DescribeRegistrationVersionsRequest& AddVersionNumbers(long long value) { m_versionNumbersHasBeenSet = true; m_versionNumbers.push_back(value); return *this; }


    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline const Aws::Vector<RegistrationVersionFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline void SetFilters(const Aws::Vector<RegistrationVersionFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline void SetFilters(Aws::Vector<RegistrationVersionFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithFilters(const Aws::Vector<RegistrationVersionFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithFilters(Aws::Vector<RegistrationVersionFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline DescribeRegistrationVersionsRequest& AddFilters(const RegistrationVersionFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of RegistrationVersionFilter objects to filter the results.</p>
     */
    inline DescribeRegistrationVersionsRequest& AddFilters(RegistrationVersionFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeRegistrationVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeRegistrationVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

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
