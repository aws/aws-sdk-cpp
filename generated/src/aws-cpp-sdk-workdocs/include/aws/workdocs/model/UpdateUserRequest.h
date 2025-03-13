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
    AWS_WORKDOCS_API UpdateUserRequest() = default;

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
    inline const Aws::String& GetAuthenticationToken() const { return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    template<typename AuthenticationTokenT = Aws::String>
    void SetAuthenticationToken(AuthenticationTokenT&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::forward<AuthenticationTokenT>(value); }
    template<typename AuthenticationTokenT = Aws::String>
    UpdateUserRequest& WithAuthenticationToken(AuthenticationTokenT&& value) { SetAuthenticationToken(std::forward<AuthenticationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UpdateUserRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The given name of the user.</p>
     */
    inline const Aws::String& GetGivenName() const { return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    template<typename GivenNameT = Aws::String>
    void SetGivenName(GivenNameT&& value) { m_givenNameHasBeenSet = true; m_givenName = std::forward<GivenNameT>(value); }
    template<typename GivenNameT = Aws::String>
    UpdateUserRequest& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The surname of the user.</p>
     */
    inline const Aws::String& GetSurname() const { return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    template<typename SurnameT = Aws::String>
    void SetSurname(SurnameT&& value) { m_surnameHasBeenSet = true; m_surname = std::forward<SurnameT>(value); }
    template<typename SurnameT = Aws::String>
    UpdateUserRequest& WithSurname(SurnameT&& value) { SetSurname(std::forward<SurnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the user.</p>
     */
    inline UserType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UserType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateUserRequest& WithType(UserType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage for the user.</p>
     */
    inline const StorageRuleType& GetStorageRule() const { return m_storageRule; }
    inline bool StorageRuleHasBeenSet() const { return m_storageRuleHasBeenSet; }
    template<typename StorageRuleT = StorageRuleType>
    void SetStorageRule(StorageRuleT&& value) { m_storageRuleHasBeenSet = true; m_storageRule = std::forward<StorageRuleT>(value); }
    template<typename StorageRuleT = StorageRuleType>
    UpdateUserRequest& WithStorageRule(StorageRuleT&& value) { SetStorageRule(std::forward<StorageRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone ID of the user.</p>
     */
    inline const Aws::String& GetTimeZoneId() const { return m_timeZoneId; }
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }
    template<typename TimeZoneIdT = Aws::String>
    void SetTimeZoneId(TimeZoneIdT&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::forward<TimeZoneIdT>(value); }
    template<typename TimeZoneIdT = Aws::String>
    UpdateUserRequest& WithTimeZoneId(TimeZoneIdT&& value) { SetTimeZoneId(std::forward<TimeZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the user.</p>
     */
    inline LocaleType GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(LocaleType value) { m_localeHasBeenSet = true; m_locale = value; }
    inline UpdateUserRequest& WithLocale(LocaleType value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value to determine whether the user is granted Power user
     * privileges.</p>
     */
    inline BooleanEnumType GetGrantPoweruserPrivileges() const { return m_grantPoweruserPrivileges; }
    inline bool GrantPoweruserPrivilegesHasBeenSet() const { return m_grantPoweruserPrivilegesHasBeenSet; }
    inline void SetGrantPoweruserPrivileges(BooleanEnumType value) { m_grantPoweruserPrivilegesHasBeenSet = true; m_grantPoweruserPrivileges = value; }
    inline UpdateUserRequest& WithGrantPoweruserPrivileges(BooleanEnumType value) { SetGrantPoweruserPrivileges(value); return *this;}
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

    UserType m_type{UserType::NOT_SET};
    bool m_typeHasBeenSet = false;

    StorageRuleType m_storageRule;
    bool m_storageRuleHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    LocaleType m_locale{LocaleType::NOT_SET};
    bool m_localeHasBeenSet = false;

    BooleanEnumType m_grantPoweruserPrivileges{BooleanEnumType::NOT_SET};
    bool m_grantPoweruserPrivilegesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
