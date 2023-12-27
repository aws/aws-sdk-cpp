/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/Permission.h>
#include <aws/s3control/model/Privilege.h>
#include <aws/s3control/model/S3PrefixType.h>
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
  class GetDataAccessRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API GetDataAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataAccess"; }

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
    inline GetDataAccessRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline GetDataAccessRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline GetDataAccessRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The S3 URI path of the data to which you are requesting temporary access
     * credentials. If the requesting account has an access grant for this data, S3
     * Access Grants vends temporary access credentials in the response.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The S3 URI path of the data to which you are requesting temporary access
     * credentials. If the requesting account has an access grant for this data, S3
     * Access Grants vends temporary access credentials in the response.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The S3 URI path of the data to which you are requesting temporary access
     * credentials. If the requesting account has an access grant for this data, S3
     * Access Grants vends temporary access credentials in the response.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The S3 URI path of the data to which you are requesting temporary access
     * credentials. If the requesting account has an access grant for this data, S3
     * Access Grants vends temporary access credentials in the response.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The S3 URI path of the data to which you are requesting temporary access
     * credentials. If the requesting account has an access grant for this data, S3
     * Access Grants vends temporary access credentials in the response.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The S3 URI path of the data to which you are requesting temporary access
     * credentials. If the requesting account has an access grant for this data, S3
     * Access Grants vends temporary access credentials in the response.</p>
     */
    inline GetDataAccessRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The S3 URI path of the data to which you are requesting temporary access
     * credentials. If the requesting account has an access grant for this data, S3
     * Access Grants vends temporary access credentials in the response.</p>
     */
    inline GetDataAccessRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The S3 URI path of the data to which you are requesting temporary access
     * credentials. If the requesting account has an access grant for this data, S3
     * Access Grants vends temporary access credentials in the response.</p>
     */
    inline GetDataAccessRequest& WithTarget(const char* value) { SetTarget(value); return *this;}


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
    inline GetDataAccessRequest& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * <p>The type of permission granted to your S3 data, which can be set to one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline GetDataAccessRequest& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}


    /**
     * <p>The session duration, in seconds, of the temporary access credential that S3
     * Access Grants vends to the grantee or client application. The default value is 1
     * hour, but the grantee can specify a range from 900 seconds (15 minutes) up to
     * 43200 seconds (12 hours). If the grantee requests a value higher than this
     * maximum, the operation fails. </p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The session duration, in seconds, of the temporary access credential that S3
     * Access Grants vends to the grantee or client application. The default value is 1
     * hour, but the grantee can specify a range from 900 seconds (15 minutes) up to
     * 43200 seconds (12 hours). If the grantee requests a value higher than this
     * maximum, the operation fails. </p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The session duration, in seconds, of the temporary access credential that S3
     * Access Grants vends to the grantee or client application. The default value is 1
     * hour, but the grantee can specify a range from 900 seconds (15 minutes) up to
     * 43200 seconds (12 hours). If the grantee requests a value higher than this
     * maximum, the operation fails. </p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The session duration, in seconds, of the temporary access credential that S3
     * Access Grants vends to the grantee or client application. The default value is 1
     * hour, but the grantee can specify a range from 900 seconds (15 minutes) up to
     * 43200 seconds (12 hours). If the grantee requests a value higher than this
     * maximum, the operation fails. </p>
     */
    inline GetDataAccessRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>The scope of the temporary access credential that S3 Access Grants vends to
     * the grantee or client application. </p> <ul> <li> <p> <code>Default</code> – The
     * scope of the returned temporary access token is the scope of the grant that is
     * closest to the target scope.</p> </li> <li> <p> <code>Minimal</code> – The scope
     * of the returned temporary access token is the same as the requested target scope
     * as long as the requested scope is the same as or a subset of the grant scope.
     * </p> </li> </ul>
     */
    inline const Privilege& GetPrivilege() const{ return m_privilege; }

    /**
     * <p>The scope of the temporary access credential that S3 Access Grants vends to
     * the grantee or client application. </p> <ul> <li> <p> <code>Default</code> – The
     * scope of the returned temporary access token is the scope of the grant that is
     * closest to the target scope.</p> </li> <li> <p> <code>Minimal</code> – The scope
     * of the returned temporary access token is the same as the requested target scope
     * as long as the requested scope is the same as or a subset of the grant scope.
     * </p> </li> </ul>
     */
    inline bool PrivilegeHasBeenSet() const { return m_privilegeHasBeenSet; }

    /**
     * <p>The scope of the temporary access credential that S3 Access Grants vends to
     * the grantee or client application. </p> <ul> <li> <p> <code>Default</code> – The
     * scope of the returned temporary access token is the scope of the grant that is
     * closest to the target scope.</p> </li> <li> <p> <code>Minimal</code> – The scope
     * of the returned temporary access token is the same as the requested target scope
     * as long as the requested scope is the same as or a subset of the grant scope.
     * </p> </li> </ul>
     */
    inline void SetPrivilege(const Privilege& value) { m_privilegeHasBeenSet = true; m_privilege = value; }

    /**
     * <p>The scope of the temporary access credential that S3 Access Grants vends to
     * the grantee or client application. </p> <ul> <li> <p> <code>Default</code> – The
     * scope of the returned temporary access token is the scope of the grant that is
     * closest to the target scope.</p> </li> <li> <p> <code>Minimal</code> – The scope
     * of the returned temporary access token is the same as the requested target scope
     * as long as the requested scope is the same as or a subset of the grant scope.
     * </p> </li> </ul>
     */
    inline void SetPrivilege(Privilege&& value) { m_privilegeHasBeenSet = true; m_privilege = std::move(value); }

    /**
     * <p>The scope of the temporary access credential that S3 Access Grants vends to
     * the grantee or client application. </p> <ul> <li> <p> <code>Default</code> – The
     * scope of the returned temporary access token is the scope of the grant that is
     * closest to the target scope.</p> </li> <li> <p> <code>Minimal</code> – The scope
     * of the returned temporary access token is the same as the requested target scope
     * as long as the requested scope is the same as or a subset of the grant scope.
     * </p> </li> </ul>
     */
    inline GetDataAccessRequest& WithPrivilege(const Privilege& value) { SetPrivilege(value); return *this;}

    /**
     * <p>The scope of the temporary access credential that S3 Access Grants vends to
     * the grantee or client application. </p> <ul> <li> <p> <code>Default</code> – The
     * scope of the returned temporary access token is the scope of the grant that is
     * closest to the target scope.</p> </li> <li> <p> <code>Minimal</code> – The scope
     * of the returned temporary access token is the same as the requested target scope
     * as long as the requested scope is the same as or a subset of the grant scope.
     * </p> </li> </ul>
     */
    inline GetDataAccessRequest& WithPrivilege(Privilege&& value) { SetPrivilege(std::move(value)); return *this;}


    /**
     * <p>The type of <code>Target</code>. The only possible value is
     * <code>Object</code>. Pass this value if the target data that you would like to
     * access is a path to an object. Do not pass this value if the target data is a
     * bucket or a bucket and a prefix. </p>
     */
    inline const S3PrefixType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of <code>Target</code>. The only possible value is
     * <code>Object</code>. Pass this value if the target data that you would like to
     * access is a path to an object. Do not pass this value if the target data is a
     * bucket or a bucket and a prefix. </p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of <code>Target</code>. The only possible value is
     * <code>Object</code>. Pass this value if the target data that you would like to
     * access is a path to an object. Do not pass this value if the target data is a
     * bucket or a bucket and a prefix. </p>
     */
    inline void SetTargetType(const S3PrefixType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of <code>Target</code>. The only possible value is
     * <code>Object</code>. Pass this value if the target data that you would like to
     * access is a path to an object. Do not pass this value if the target data is a
     * bucket or a bucket and a prefix. </p>
     */
    inline void SetTargetType(S3PrefixType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of <code>Target</code>. The only possible value is
     * <code>Object</code>. Pass this value if the target data that you would like to
     * access is a path to an object. Do not pass this value if the target data is a
     * bucket or a bucket and a prefix. </p>
     */
    inline GetDataAccessRequest& WithTargetType(const S3PrefixType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of <code>Target</code>. The only possible value is
     * <code>Object</code>. Pass this value if the target data that you would like to
     * access is a path to an object. Do not pass this value if the target data is a
     * bucket or a bucket and a prefix. </p>
     */
    inline GetDataAccessRequest& WithTargetType(S3PrefixType&& value) { SetTargetType(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Permission m_permission;
    bool m_permissionHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    Privilege m_privilege;
    bool m_privilegeHasBeenSet = false;

    S3PrefixType m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
