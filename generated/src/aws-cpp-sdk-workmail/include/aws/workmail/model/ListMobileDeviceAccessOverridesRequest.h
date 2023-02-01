/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class ListMobileDeviceAccessOverridesRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API ListMobileDeviceAccessOverridesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMobileDeviceAccessOverrides"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkMail organization under which to list mobile device access
     * overrides.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The WorkMail organization under which to list mobile device access
     * overrides.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The WorkMail organization under which to list mobile device access
     * overrides.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The WorkMail organization under which to list mobile device access
     * overrides.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The WorkMail organization under which to list mobile device access
     * overrides.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The WorkMail organization under which to list mobile device access
     * overrides.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The WorkMail organization under which to list mobile device access
     * overrides.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail organization under which to list mobile device access
     * overrides.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The WorkMail user under which you list the mobile device access overrides.
     * Accepts the following types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The WorkMail user under which you list the mobile device access overrides.
     * Accepts the following types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The WorkMail user under which you list the mobile device access overrides.
     * Accepts the following types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The WorkMail user under which you list the mobile device access overrides.
     * Accepts the following types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The WorkMail user under which you list the mobile device access overrides.
     * Accepts the following types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The WorkMail user under which you list the mobile device access overrides.
     * Accepts the following types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The WorkMail user under which you list the mobile device access overrides.
     * Accepts the following types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail user under which you list the mobile device access overrides.
     * Accepts the following types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The mobile device to which the access override applies.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The mobile device to which the access override applies.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The mobile device to which the access override applies.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The mobile device to which the access override applies.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The mobile device to which the access override applies.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The mobile device to which the access override applies.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The mobile device to which the access override applies.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The mobile device to which the access override applies.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not require a token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not require a token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not require a token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not require a token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not require a token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not require a token.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not require a token.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not require a token.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline ListMobileDeviceAccessOverridesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
