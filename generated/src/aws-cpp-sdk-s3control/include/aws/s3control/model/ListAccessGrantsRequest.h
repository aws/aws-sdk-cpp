﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/GranteeType.h>
#include <aws/s3control/model/Permission.h>
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
  class ListAccessGrantsRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListAccessGrantsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessGrants"; }

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
    ListAccessGrantsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessGrantsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAccessGrantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the grantee to which access has been granted. It can be one of
     * the following values:</p> <ul> <li> <p> <code>IAM</code> - An IAM user or
     * role.</p> </li> <li> <p> <code>DIRECTORY_USER</code> - Your corporate directory
     * user. You can use this option if you have added your corporate identity
     * directory to IAM Identity Center and associated the IAM Identity Center instance
     * with your S3 Access Grants instance.</p> </li> <li> <p>
     * <code>DIRECTORY_GROUP</code> - Your corporate directory group. You can use this
     * option if you have added your corporate identity directory to IAM Identity
     * Center and associated the IAM Identity Center instance with your S3 Access
     * Grants instance.</p> </li> </ul>
     */
    inline GranteeType GetGranteeType() const { return m_granteeType; }
    inline bool GranteeTypeHasBeenSet() const { return m_granteeTypeHasBeenSet; }
    inline void SetGranteeType(GranteeType value) { m_granteeTypeHasBeenSet = true; m_granteeType = value; }
    inline ListAccessGrantsRequest& WithGranteeType(GranteeType value) { SetGranteeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetGranteeIdentifier() const { return m_granteeIdentifier; }
    inline bool GranteeIdentifierHasBeenSet() const { return m_granteeIdentifierHasBeenSet; }
    template<typename GranteeIdentifierT = Aws::String>
    void SetGranteeIdentifier(GranteeIdentifierT&& value) { m_granteeIdentifierHasBeenSet = true; m_granteeIdentifier = std::forward<GranteeIdentifierT>(value); }
    template<typename GranteeIdentifierT = Aws::String>
    ListAccessGrantsRequest& WithGranteeIdentifier(GranteeIdentifierT&& value) { SetGranteeIdentifier(std::forward<GranteeIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of permission granted to your S3 data, which can be set to one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline Permission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(Permission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline ListAccessGrantsRequest& WithPermission(Permission value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline const Aws::String& GetGrantScope() const { return m_grantScope; }
    inline bool GrantScopeHasBeenSet() const { return m_grantScopeHasBeenSet; }
    template<typename GrantScopeT = Aws::String>
    void SetGrantScope(GrantScopeT&& value) { m_grantScopeHasBeenSet = true; m_grantScope = std::forward<GrantScopeT>(value); }
    template<typename GrantScopeT = Aws::String>
    ListAccessGrantsRequest& WithGrantScope(GrantScopeT&& value) { SetGrantScope(std::forward<GrantScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    ListAccessGrantsRequest& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    GranteeType m_granteeType{GranteeType::NOT_SET};
    bool m_granteeTypeHasBeenSet = false;

    Aws::String m_granteeIdentifier;
    bool m_granteeIdentifierHasBeenSet = false;

    Permission m_permission{Permission::NOT_SET};
    bool m_permissionHasBeenSet = false;

    Aws::String m_grantScope;
    bool m_grantScopeHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
