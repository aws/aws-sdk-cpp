/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class ListCallerAccessGrantsRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListCallerAccessGrantsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCallerAccessGrants"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the S3 Access Grants instance.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListCallerAccessGrantsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path of the data that you would like to access. Must start with
     * <code>s3://</code>. You can optionally pass only the beginning characters of a
     * path, and S3 Access Grants will search for all applicable grants for the path
     * fragment. </p>
     */
    inline const Aws::String& GetGrantScope() const { return m_grantScope; }
    inline bool GrantScopeHasBeenSet() const { return m_grantScopeHasBeenSet; }
    template<typename GrantScopeT = Aws::String>
    void SetGrantScope(GrantScopeT&& value) { m_grantScopeHasBeenSet = true; m_grantScope = std::forward<GrantScopeT>(value); }
    template<typename GrantScopeT = Aws::String>
    ListCallerAccessGrantsRequest& WithGrantScope(GrantScopeT&& value) { SetGrantScope(std::forward<GrantScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Caller Access Grants</code> request in order to retrieve
     * the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCallerAccessGrantsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Caller Access Grants</code> response. If the results include the
     * pagination token <code>NextToken</code>, make another call using the
     * <code>NextToken</code> to determine if there are more results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCallerAccessGrantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this optional parameter is passed in the request, a filter is applied to
     * the results. The results will include only the access grants for the caller's
     * Identity Center application or for any other applications
     * (<code>ALL</code>).</p>
     */
    inline bool GetAllowedByApplication() const { return m_allowedByApplication; }
    inline bool AllowedByApplicationHasBeenSet() const { return m_allowedByApplicationHasBeenSet; }
    inline void SetAllowedByApplication(bool value) { m_allowedByApplicationHasBeenSet = true; m_allowedByApplication = value; }
    inline ListCallerAccessGrantsRequest& WithAllowedByApplication(bool value) { SetAllowedByApplication(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_grantScope;
    bool m_grantScopeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_allowedByApplication{false};
    bool m_allowedByApplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
