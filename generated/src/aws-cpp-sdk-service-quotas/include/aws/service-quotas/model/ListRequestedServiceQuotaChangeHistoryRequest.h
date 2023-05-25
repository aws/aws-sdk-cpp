/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/RequestStatus.h>
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
     * <p>The service identifier.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The service identifier.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The service identifier.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The service identifier.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The service identifier.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The status of the quota increase request.</p>
     */
    inline const RequestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the quota increase request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the quota increase request.</p>
     */
    inline void SetStatus(const RequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the quota increase request.</p>
     */
    inline void SetStatus(RequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the quota increase request.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithStatus(const RequestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the quota increase request.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithStatus(RequestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, if any, make another call with the token returned from this
     * call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, if any, make another call with the token returned from this
     * call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, if any, make another call with the token returned from this
     * call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, if any, make another call with the token returned from this
     * call.</p>
     */
    inline ListRequestedServiceQuotaChangeHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    RequestStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
