/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/StorageRuleType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class CreateUserRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline CreateUserRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline CreateUserRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline CreateUserRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The login name of the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline CreateUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline CreateUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline CreateUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline CreateUserRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline CreateUserRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline CreateUserRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The given name of the user.</p>
     */
    inline const Aws::String& GetGivenName() const{ return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    inline void SetGivenName(const Aws::String& value) { m_givenNameHasBeenSet = true; m_givenName = value; }
    inline void SetGivenName(Aws::String&& value) { m_givenNameHasBeenSet = true; m_givenName = std::move(value); }
    inline void SetGivenName(const char* value) { m_givenNameHasBeenSet = true; m_givenName.assign(value); }
    inline CreateUserRequest& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}
    inline CreateUserRequest& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}
    inline CreateUserRequest& WithGivenName(const char* value) { SetGivenName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The surname of the user.</p>
     */
    inline const Aws::String& GetSurname() const{ return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    inline void SetSurname(const Aws::String& value) { m_surnameHasBeenSet = true; m_surname = value; }
    inline void SetSurname(Aws::String&& value) { m_surnameHasBeenSet = true; m_surname = std::move(value); }
    inline void SetSurname(const char* value) { m_surnameHasBeenSet = true; m_surname.assign(value); }
    inline CreateUserRequest& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}
    inline CreateUserRequest& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}
    inline CreateUserRequest& WithSurname(const char* value) { SetSurname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the user.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline CreateUserRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline CreateUserRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline CreateUserRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone ID of the user.</p>
     */
    inline const Aws::String& GetTimeZoneId() const{ return m_timeZoneId; }
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }
    inline void SetTimeZoneId(const Aws::String& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = value; }
    inline void SetTimeZoneId(Aws::String&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::move(value); }
    inline void SetTimeZoneId(const char* value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId.assign(value); }
    inline CreateUserRequest& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}
    inline CreateUserRequest& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}
    inline CreateUserRequest& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage for the user.</p>
     */
    inline const StorageRuleType& GetStorageRule() const{ return m_storageRule; }
    inline bool StorageRuleHasBeenSet() const { return m_storageRuleHasBeenSet; }
    inline void SetStorageRule(const StorageRuleType& value) { m_storageRuleHasBeenSet = true; m_storageRule = value; }
    inline void SetStorageRule(StorageRuleType&& value) { m_storageRuleHasBeenSet = true; m_storageRule = std::move(value); }
    inline CreateUserRequest& WithStorageRule(const StorageRuleType& value) { SetStorageRule(value); return *this;}
    inline CreateUserRequest& WithStorageRule(StorageRuleType&& value) { SetStorageRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }
    inline CreateUserRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline CreateUserRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline CreateUserRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    StorageRuleType m_storageRule;
    bool m_storageRuleHasBeenSet = false;

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
