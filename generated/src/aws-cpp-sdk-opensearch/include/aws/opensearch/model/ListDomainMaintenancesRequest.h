/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/MaintenanceType.h>
#include <aws/opensearch/model/MaintenanceStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>ListDomainMaintenances</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainMaintenancesRequest">AWS
   * API Reference</a></p>
   */
  class ListDomainMaintenancesRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListDomainMaintenancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomainMaintenances"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline ListDomainMaintenancesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline ListDomainMaintenancesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline ListDomainMaintenancesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the action.</p>
     */
    inline const MaintenanceType& GetAction() const{ return m_action; }

    /**
     * <p>The name of the action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetAction(const MaintenanceType& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetAction(MaintenanceType&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline ListDomainMaintenancesRequest& WithAction(const MaintenanceType& value) { SetAction(value); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline ListDomainMaintenancesRequest& WithAction(MaintenanceType&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The status of the action.</p>
     */
    inline const MaintenanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const MaintenanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(MaintenanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline ListDomainMaintenancesRequest& WithStatus(const MaintenanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline ListDomainMaintenancesRequest& WithStatus(MaintenanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline ListDomainMaintenancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If your initial <code>ListDomainMaintenances</code> operation returns a
     * <code>nextToken</code>, include the returned <code>nextToken</code> in
     * subsequent <code>ListDomainMaintenances</code> operations, which returns results
     * in the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>ListDomainMaintenances</code> operation returns a
     * <code>nextToken</code>, include the returned <code>nextToken</code> in
     * subsequent <code>ListDomainMaintenances</code> operations, which returns results
     * in the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>ListDomainMaintenances</code> operation returns a
     * <code>nextToken</code>, include the returned <code>nextToken</code> in
     * subsequent <code>ListDomainMaintenances</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>ListDomainMaintenances</code> operation returns a
     * <code>nextToken</code>, include the returned <code>nextToken</code> in
     * subsequent <code>ListDomainMaintenances</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>ListDomainMaintenances</code> operation returns a
     * <code>nextToken</code>, include the returned <code>nextToken</code> in
     * subsequent <code>ListDomainMaintenances</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>ListDomainMaintenances</code> operation returns a
     * <code>nextToken</code>, include the returned <code>nextToken</code> in
     * subsequent <code>ListDomainMaintenances</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListDomainMaintenancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>ListDomainMaintenances</code> operation returns a
     * <code>nextToken</code>, include the returned <code>nextToken</code> in
     * subsequent <code>ListDomainMaintenances</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListDomainMaintenancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>ListDomainMaintenances</code> operation returns a
     * <code>nextToken</code>, include the returned <code>nextToken</code> in
     * subsequent <code>ListDomainMaintenances</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListDomainMaintenancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    MaintenanceType m_action;
    bool m_actionHasBeenSet = false;

    MaintenanceStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
