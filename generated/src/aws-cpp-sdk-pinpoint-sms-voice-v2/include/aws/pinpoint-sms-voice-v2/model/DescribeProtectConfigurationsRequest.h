/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeProtectConfigurationsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeProtectConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProtectConfigurations"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectConfigurationIds() const{ return m_protectConfigurationIds; }

    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline bool ProtectConfigurationIdsHasBeenSet() const { return m_protectConfigurationIdsHasBeenSet; }

    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline void SetProtectConfigurationIds(const Aws::Vector<Aws::String>& value) { m_protectConfigurationIdsHasBeenSet = true; m_protectConfigurationIds = value; }

    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline void SetProtectConfigurationIds(Aws::Vector<Aws::String>&& value) { m_protectConfigurationIdsHasBeenSet = true; m_protectConfigurationIds = std::move(value); }

    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline DescribeProtectConfigurationsRequest& WithProtectConfigurationIds(const Aws::Vector<Aws::String>& value) { SetProtectConfigurationIds(value); return *this;}

    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline DescribeProtectConfigurationsRequest& WithProtectConfigurationIds(Aws::Vector<Aws::String>&& value) { SetProtectConfigurationIds(std::move(value)); return *this;}

    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline DescribeProtectConfigurationsRequest& AddProtectConfigurationIds(const Aws::String& value) { m_protectConfigurationIdsHasBeenSet = true; m_protectConfigurationIds.push_back(value); return *this; }

    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline DescribeProtectConfigurationsRequest& AddProtectConfigurationIds(Aws::String&& value) { m_protectConfigurationIdsHasBeenSet = true; m_protectConfigurationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of protect configuration identifiers to search for.</p>
     */
    inline DescribeProtectConfigurationsRequest& AddProtectConfigurationIds(const char* value) { m_protectConfigurationIdsHasBeenSet = true; m_protectConfigurationIds.push_back(value); return *this; }


    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline const Aws::Vector<ProtectConfigurationFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline void SetFilters(const Aws::Vector<ProtectConfigurationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline void SetFilters(Aws::Vector<ProtectConfigurationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline DescribeProtectConfigurationsRequest& WithFilters(const Aws::Vector<ProtectConfigurationFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline DescribeProtectConfigurationsRequest& WithFilters(Aws::Vector<ProtectConfigurationFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline DescribeProtectConfigurationsRequest& AddFilters(const ProtectConfigurationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of ProtectConfigurationFilter objects to filter the results.</p>
     */
    inline DescribeProtectConfigurationsRequest& AddFilters(ProtectConfigurationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeProtectConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeProtectConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeProtectConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeProtectConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_protectConfigurationIds;
    bool m_protectConfigurationIdsHasBeenSet = false;

    Aws::Vector<ProtectConfigurationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
