/**
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
    AWS_S3CONTROL_API ListAccessGrantsRequest();

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

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline ListAccessGrantsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline ListAccessGrantsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline ListAccessGrantsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline ListAccessGrantsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline ListAccessGrantsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants</code> request in order to retrieve the
     * next page of results.</p>
     */
    inline ListAccessGrantsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of access grants that you would like returned in the
     * <code>List Access Grants</code> response. If the results include the pagination
     * token <code>NextToken</code>, make another call using the <code>NextToken</code>
     * to determine if there are more results.</p>
     */
    inline ListAccessGrantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline const GranteeType& GetGranteeType() const{ return m_granteeType; }

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
    inline bool GranteeTypeHasBeenSet() const { return m_granteeTypeHasBeenSet; }

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
    inline void SetGranteeType(const GranteeType& value) { m_granteeTypeHasBeenSet = true; m_granteeType = value; }

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
    inline void SetGranteeType(GranteeType&& value) { m_granteeTypeHasBeenSet = true; m_granteeType = std::move(value); }

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
    inline ListAccessGrantsRequest& WithGranteeType(const GranteeType& value) { SetGranteeType(value); return *this;}

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
    inline ListAccessGrantsRequest& WithGranteeType(GranteeType&& value) { SetGranteeType(std::move(value)); return *this;}


    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetGranteeIdentifier() const{ return m_granteeIdentifier; }

    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline bool GranteeIdentifierHasBeenSet() const { return m_granteeIdentifierHasBeenSet; }

    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline void SetGranteeIdentifier(const Aws::String& value) { m_granteeIdentifierHasBeenSet = true; m_granteeIdentifier = value; }

    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline void SetGranteeIdentifier(Aws::String&& value) { m_granteeIdentifierHasBeenSet = true; m_granteeIdentifier = std::move(value); }

    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline void SetGranteeIdentifier(const char* value) { m_granteeIdentifierHasBeenSet = true; m_granteeIdentifier.assign(value); }

    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline ListAccessGrantsRequest& WithGranteeIdentifier(const Aws::String& value) { SetGranteeIdentifier(value); return *this;}

    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline ListAccessGrantsRequest& WithGranteeIdentifier(Aws::String&& value) { SetGranteeIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifer of the <code>Grantee</code>. If the grantee type is
     * <code>IAM</code>, the identifier is the IAM Amazon Resource Name (ARN) of the
     * user or role. If the grantee type is a directory user or group, the identifier
     * is 128-bit universally unique identifier (UUID) in the format
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>. You can obtain this UUID from
     * your Amazon Web Services IAM Identity Center instance.</p>
     */
    inline ListAccessGrantsRequest& WithGranteeIdentifier(const char* value) { SetGranteeIdentifier(value); return *this;}


    /**
     * <p>The type of permission granted to your S3 data, which can be set to one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline const Permission& GetPermission() const{ return m_permission; }

    /**
     * <p>The type of permission granted to your S3 data, which can be set to one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>The type of permission granted to your S3 data, which can be set to one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>The type of permission granted to your S3 data, which can be set to one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>The type of permission granted to your S3 data, which can be set to one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline ListAccessGrantsRequest& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * <p>The type of permission granted to your S3 data, which can be set to one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline ListAccessGrantsRequest& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}


    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline const Aws::String& GetGrantScope() const{ return m_grantScope; }

    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline bool GrantScopeHasBeenSet() const { return m_grantScopeHasBeenSet; }

    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline void SetGrantScope(const Aws::String& value) { m_grantScopeHasBeenSet = true; m_grantScope = value; }

    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline void SetGrantScope(Aws::String&& value) { m_grantScopeHasBeenSet = true; m_grantScope = std::move(value); }

    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline void SetGrantScope(const char* value) { m_grantScopeHasBeenSet = true; m_grantScope.assign(value); }

    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline ListAccessGrantsRequest& WithGrantScope(const Aws::String& value) { SetGrantScope(value); return *this;}

    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline ListAccessGrantsRequest& WithGrantScope(Aws::String&& value) { SetGrantScope(std::move(value)); return *this;}

    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline ListAccessGrantsRequest& WithGrantScope(const char* value) { SetGrantScope(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline ListAccessGrantsRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline ListAccessGrantsRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline ListAccessGrantsRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    GranteeType m_granteeType;
    bool m_granteeTypeHasBeenSet = false;

    Aws::String m_granteeIdentifier;
    bool m_granteeIdentifierHasBeenSet = false;

    Permission m_permission;
    bool m_permissionHasBeenSet = false;

    Aws::String m_grantScope;
    bool m_grantScopeHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
