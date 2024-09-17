/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserStatusType.h>
#include <aws/workdocs/model/UserType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workdocs/model/LocaleType.h>
#include <aws/workdocs/model/UserStorageMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_WORKDOCS_API User();
    AWS_WORKDOCS_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline User& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline User& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline User& WithId(const char* value) { SetId(value); return *this;}
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
    inline User& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline User& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline User& WithUsername(const char* value) { SetUsername(value); return *this;}
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
    inline User& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline User& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline User& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
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
    inline User& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}
    inline User& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}
    inline User& WithGivenName(const char* value) { SetGivenName(value); return *this;}
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
    inline User& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}
    inline User& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}
    inline User& WithSurname(const char* value) { SetSurname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline User& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline User& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline User& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root folder.</p>
     */
    inline const Aws::String& GetRootFolderId() const{ return m_rootFolderId; }
    inline bool RootFolderIdHasBeenSet() const { return m_rootFolderIdHasBeenSet; }
    inline void SetRootFolderId(const Aws::String& value) { m_rootFolderIdHasBeenSet = true; m_rootFolderId = value; }
    inline void SetRootFolderId(Aws::String&& value) { m_rootFolderIdHasBeenSet = true; m_rootFolderId = std::move(value); }
    inline void SetRootFolderId(const char* value) { m_rootFolderIdHasBeenSet = true; m_rootFolderId.assign(value); }
    inline User& WithRootFolderId(const Aws::String& value) { SetRootFolderId(value); return *this;}
    inline User& WithRootFolderId(Aws::String&& value) { SetRootFolderId(std::move(value)); return *this;}
    inline User& WithRootFolderId(const char* value) { SetRootFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the recycle bin folder.</p>
     */
    inline const Aws::String& GetRecycleBinFolderId() const{ return m_recycleBinFolderId; }
    inline bool RecycleBinFolderIdHasBeenSet() const { return m_recycleBinFolderIdHasBeenSet; }
    inline void SetRecycleBinFolderId(const Aws::String& value) { m_recycleBinFolderIdHasBeenSet = true; m_recycleBinFolderId = value; }
    inline void SetRecycleBinFolderId(Aws::String&& value) { m_recycleBinFolderIdHasBeenSet = true; m_recycleBinFolderId = std::move(value); }
    inline void SetRecycleBinFolderId(const char* value) { m_recycleBinFolderIdHasBeenSet = true; m_recycleBinFolderId.assign(value); }
    inline User& WithRecycleBinFolderId(const Aws::String& value) { SetRecycleBinFolderId(value); return *this;}
    inline User& WithRecycleBinFolderId(Aws::String&& value) { SetRecycleBinFolderId(std::move(value)); return *this;}
    inline User& WithRecycleBinFolderId(const char* value) { SetRecycleBinFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user.</p>
     */
    inline const UserStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UserStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UserStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline User& WithStatus(const UserStatusType& value) { SetStatus(value); return *this;}
    inline User& WithStatus(UserStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of user.</p>
     */
    inline const UserType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UserType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UserType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline User& WithType(const UserType& value) { SetType(value); return *this;}
    inline User& WithType(UserType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline User& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline User& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the user was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const{ return m_modifiedTimestamp; }
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }
    inline void SetModifiedTimestamp(const Aws::Utils::DateTime& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = value; }
    inline void SetModifiedTimestamp(Aws::Utils::DateTime&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::move(value); }
    inline User& WithModifiedTimestamp(const Aws::Utils::DateTime& value) { SetModifiedTimestamp(value); return *this;}
    inline User& WithModifiedTimestamp(Aws::Utils::DateTime&& value) { SetModifiedTimestamp(std::move(value)); return *this;}
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
    inline User& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}
    inline User& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}
    inline User& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the user.</p>
     */
    inline const LocaleType& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const LocaleType& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(LocaleType&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline User& WithLocale(const LocaleType& value) { SetLocale(value); return *this;}
    inline User& WithLocale(LocaleType&& value) { SetLocale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage for the user.</p>
     */
    inline const UserStorageMetadata& GetStorage() const{ return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    inline void SetStorage(const UserStorageMetadata& value) { m_storageHasBeenSet = true; m_storage = value; }
    inline void SetStorage(UserStorageMetadata&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }
    inline User& WithStorage(const UserStorageMetadata& value) { SetStorage(value); return *this;}
    inline User& WithStorage(UserStorageMetadata&& value) { SetStorage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_rootFolderId;
    bool m_rootFolderIdHasBeenSet = false;

    Aws::String m_recycleBinFolderId;
    bool m_recycleBinFolderIdHasBeenSet = false;

    UserStatusType m_status;
    bool m_statusHasBeenSet = false;

    UserType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimestamp;
    bool m_modifiedTimestampHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    LocaleType m_locale;
    bool m_localeHasBeenSet = false;

    UserStorageMetadata m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
