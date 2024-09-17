/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserType.h>
#include <aws/workdocs/model/StorageRuleType.h>
#include <aws/workdocs/model/LocaleType.h>
#include <aws/workdocs/model/BooleanEnumType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateUserRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline UpdateUserRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline UpdateUserRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UpdateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UpdateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
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
    inline UpdateUserRequest& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}
    inline UpdateUserRequest& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}
    inline UpdateUserRequest& WithGivenName(const char* value) { SetGivenName(value); return *this;}
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
    inline UpdateUserRequest& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}
    inline UpdateUserRequest& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}
    inline UpdateUserRequest& WithSurname(const char* value) { SetSurname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the user.</p>
     */
    inline const UserType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UserType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UserType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UpdateUserRequest& WithType(const UserType& value) { SetType(value); return *this;}
    inline UpdateUserRequest& WithType(UserType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage for the user.</p>
     */
    inline const StorageRuleType& GetStorageRule() const{ return m_storageRule; }
    inline bool StorageRuleHasBeenSet() const { return m_storageRuleHasBeenSet; }
    inline void SetStorageRule(const StorageRuleType& value) { m_storageRuleHasBeenSet = true; m_storageRule = value; }
    inline void SetStorageRule(StorageRuleType&& value) { m_storageRuleHasBeenSet = true; m_storageRule = std::move(value); }
    inline UpdateUserRequest& WithStorageRule(const StorageRuleType& value) { SetStorageRule(value); return *this;}
    inline UpdateUserRequest& WithStorageRule(StorageRuleType&& value) { SetStorageRule(std::move(value)); return *this;}
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
    inline UpdateUserRequest& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}
    inline UpdateUserRequest& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the user.</p>
     */
    inline const LocaleType& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const LocaleType& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(LocaleType&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline UpdateUserRequest& WithLocale(const LocaleType& value) { SetLocale(value); return *this;}
    inline UpdateUserRequest& WithLocale(LocaleType&& value) { SetLocale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value to determine whether the user is granted Power user
     * privileges.</p>
     */
    inline const BooleanEnumType& GetGrantPoweruserPrivileges() const{ return m_grantPoweruserPrivileges; }
    inline bool GrantPoweruserPrivilegesHasBeenSet() const { return m_grantPoweruserPrivilegesHasBeenSet; }
    inline void SetGrantPoweruserPrivileges(const BooleanEnumType& value) { m_grantPoweruserPrivilegesHasBeenSet = true; m_grantPoweruserPrivileges = value; }
    inline void SetGrantPoweruserPrivileges(BooleanEnumType&& value) { m_grantPoweruserPrivilegesHasBeenSet = true; m_grantPoweruserPrivileges = std::move(value); }
    inline UpdateUserRequest& WithGrantPoweruserPrivileges(const BooleanEnumType& value) { SetGrantPoweruserPrivileges(value); return *this;}
    inline UpdateUserRequest& WithGrantPoweruserPrivileges(BooleanEnumType&& value) { SetGrantPoweruserPrivileges(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;

    UserType m_type;
    bool m_typeHasBeenSet = false;

    StorageRuleType m_storageRule;
    bool m_storageRuleHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    LocaleType m_locale;
    bool m_localeHasBeenSet = false;

    BooleanEnumType m_grantPoweruserPrivileges;
    bool m_grantPoweruserPrivilegesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
