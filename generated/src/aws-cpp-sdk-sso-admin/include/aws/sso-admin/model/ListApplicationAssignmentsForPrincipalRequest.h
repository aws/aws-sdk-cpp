/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/PrincipalType.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class ListApplicationAssignmentsForPrincipalRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API ListApplicationAssignmentsForPrincipalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationAssignmentsForPrincipal"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the output to include only assignments associated with the
     * application that has the specified ARN.</p>
     */
    inline const ListApplicationAssignmentsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters the output to include only assignments associated with the
     * application that has the specified ARN.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters the output to include only assignments associated with the
     * application that has the specified ARN.</p>
     */
    inline void SetFilter(const ListApplicationAssignmentsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters the output to include only assignments associated with the
     * application that has the specified ARN.</p>
     */
    inline void SetFilter(ListApplicationAssignmentsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters the output to include only assignments associated with the
     * application that has the specified ARN.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithFilter(const ListApplicationAssignmentsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters the output to include only assignments associated with the
     * application that has the specified ARN.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithFilter(ListApplicationAssignmentsFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Specifies the instance of IAM Identity Center that contains principal and
     * applications.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>Specifies the instance of IAM Identity Center that contains principal and
     * applications.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>Specifies the instance of IAM Identity Center that contains principal and
     * applications.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>Specifies the instance of IAM Identity Center that contains principal and
     * applications.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>Specifies the instance of IAM Identity Center that contains principal and
     * applications.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>Specifies the instance of IAM Identity Center that contains principal and
     * applications.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>Specifies the instance of IAM Identity Center that contains principal and
     * applications.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the instance of IAM Identity Center that contains principal and
     * applications.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the unique identifier of the principal for which you want to
     * retrieve its assignments.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>Specifies the unique identifier of the principal for which you want to
     * retrieve its assignments.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>Specifies the unique identifier of the principal for which you want to
     * retrieve its assignments.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>Specifies the unique identifier of the principal for which you want to
     * retrieve its assignments.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>Specifies the unique identifier of the principal for which you want to
     * retrieve its assignments.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>Specifies the unique identifier of the principal for which you want to
     * retrieve its assignments.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>Specifies the unique identifier of the principal for which you want to
     * retrieve its assignments.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique identifier of the principal for which you want to
     * retrieve its assignments.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>Specifies the type of the principal for which you want to retrieve its
     * assignments.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>Specifies the type of the principal for which you want to retrieve its
     * assignments.</p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>Specifies the type of the principal for which you want to retrieve its
     * assignments.</p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>Specifies the type of the principal for which you want to retrieve its
     * assignments.</p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>Specifies the type of the principal for which you want to retrieve its
     * assignments.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>Specifies the type of the principal for which you want to retrieve its
     * assignments.</p>
     */
    inline ListApplicationAssignmentsForPrincipalRequest& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}

  private:

    ListApplicationAssignmentsFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
