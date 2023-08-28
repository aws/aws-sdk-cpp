/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/RequestStatus.h>
#include <aws/service-quotas/model/AppliedLevelEnum.h>
#include <utility>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

  /**
   */
  class ListRequestedServiceQuotaChangeHistoryRequest : public ServiceQuotasRequest
  {
  public:
    AWS_SERVICEQUOTAS_API ListRequestedServiceQuotaChangeHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRequestedServiceQuotaChangeHistory"; }

    AWS_SERVICEQUOTAS_API Aws::String SerializePayload() const override;

    AWS_SERVICEQUOTAS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>Specifies the service identifier. To find the service code value for an
     * Amazon Web Services service, use the <a>ListServices</a> operation.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>Specifies that you want to filter the results to only the requests with the
     * matching status.</p>
     */
    inline const RequestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies that you want to filter the results to only the requests with the
     * matching status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies that you want to filter the results to only the requests with the
     * matching status.</p>
     */
    inline void SetStatus(const RequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies that you want to filter the results to only the requests with the
     * matching status.</p>
     */
    inline void SetStatus(RequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies that you want to filter the results to only the requests with the
     * matching status.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithStatus(const RequestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies that you want to filter the results to only the requests with the
     * matching status.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithStatus(RequestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies a value for receiving additional results after you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies a value for receiving additional results after you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies a value for receiving additional results after you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies a value for receiving additional results after you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies a value for receiving additional results after you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies a value for receiving additional results after you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies a value for receiving additional results after you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a value for receiving additional results after you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the maximum number of results that you want included on each page
     * of the response. If you do not include this parameter, it defaults to a value
     * appropriate to the operation. If additional items exist beyond those included in
     * the current response, the <code>NextToken</code> response element is present and
     * has a value (is not null). Include that value as the <code>NextToken</code>
     * request parameter in the next call to the operation to get the next part of the
     * results.</p>  <p>An API operation can return fewer results than the
     * maximum even when there are more results available. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p> 
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the maximum number of results that you want included on each page
     * of the response. If you do not include this parameter, it defaults to a value
     * appropriate to the operation. If additional items exist beyond those included in
     * the current response, the <code>NextToken</code> response element is present and
     * has a value (is not null). Include that value as the <code>NextToken</code>
     * request parameter in the next call to the operation to get the next part of the
     * results.</p>  <p>An API operation can return fewer results than the
     * maximum even when there are more results available. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p> 
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the maximum number of results that you want included on each page
     * of the response. If you do not include this parameter, it defaults to a value
     * appropriate to the operation. If additional items exist beyond those included in
     * the current response, the <code>NextToken</code> response element is present and
     * has a value (is not null). Include that value as the <code>NextToken</code>
     * request parameter in the next call to the operation to get the next part of the
     * results.</p>  <p>An API operation can return fewer results than the
     * maximum even when there are more results available. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p> 
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the maximum number of results that you want included on each page
     * of the response. If you do not include this parameter, it defaults to a value
     * appropriate to the operation. If additional items exist beyond those included in
     * the current response, the <code>NextToken</code> response element is present and
     * has a value (is not null). Include that value as the <code>NextToken</code>
     * request parameter in the next call to the operation to get the next part of the
     * results.</p>  <p>An API operation can return fewer results than the
     * maximum even when there are more results available. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p> 
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies at which level within the Amazon Web Services account the quota
     * request applies to.</p>
     */
    inline const AppliedLevelEnum& GetQuotaRequestedAtLevel() const{ return m_quotaRequestedAtLevel; }

    /**
     * <p>Specifies at which level within the Amazon Web Services account the quota
     * request applies to.</p>
     */
    inline bool QuotaRequestedAtLevelHasBeenSet() const { return m_quotaRequestedAtLevelHasBeenSet; }

    /**
     * <p>Specifies at which level within the Amazon Web Services account the quota
     * request applies to.</p>
     */
    inline void SetQuotaRequestedAtLevel(const AppliedLevelEnum& value) { m_quotaRequestedAtLevelHasBeenSet = true; m_quotaRequestedAtLevel = value; }

    /**
     * <p>Specifies at which level within the Amazon Web Services account the quota
     * request applies to.</p>
     */
    inline void SetQuotaRequestedAtLevel(AppliedLevelEnum&& value) { m_quotaRequestedAtLevelHasBeenSet = true; m_quotaRequestedAtLevel = std::move(value); }

    /**
     * <p>Specifies at which level within the Amazon Web Services account the quota
     * request applies to.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithQuotaRequestedAtLevel(const AppliedLevelEnum& value) { SetQuotaRequestedAtLevel(value); return *this;}

    /**
     * <p>Specifies at which level within the Amazon Web Services account the quota
     * request applies to.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithQuotaRequestedAtLevel(AppliedLevelEnum&& value) { SetQuotaRequestedAtLevel(std::move(value)); return *this;}

  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    RequestStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    AppliedLevelEnum m_quotaRequestedAtLevel;
    bool m_quotaRequestedAtLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
