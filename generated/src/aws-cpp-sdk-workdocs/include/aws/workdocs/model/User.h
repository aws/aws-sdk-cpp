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
    AWS_WORKDOCS_API User() = default;
    AWS_WORKDOCS_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    User& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The login name of the user.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    User& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    User& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
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
    User& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
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
    User& WithSurname(SurnameT&& value) { SetSurname(std::forward<SurnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    User& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root folder.</p>
     */
    inline const Aws::String& GetRootFolderId() const { return m_rootFolderId; }
    inline bool RootFolderIdHasBeenSet() const { return m_rootFolderIdHasBeenSet; }
    template<typename RootFolderIdT = Aws::String>
    void SetRootFolderId(RootFolderIdT&& value) { m_rootFolderIdHasBeenSet = true; m_rootFolderId = std::forward<RootFolderIdT>(value); }
    template<typename RootFolderIdT = Aws::String>
    User& WithRootFolderId(RootFolderIdT&& value) { SetRootFolderId(std::forward<RootFolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the recycle bin folder.</p>
     */
    inline const Aws::String& GetRecycleBinFolderId() const { return m_recycleBinFolderId; }
    inline bool RecycleBinFolderIdHasBeenSet() const { return m_recycleBinFolderIdHasBeenSet; }
    template<typename RecycleBinFolderIdT = Aws::String>
    void SetRecycleBinFolderId(RecycleBinFolderIdT&& value) { m_recycleBinFolderIdHasBeenSet = true; m_recycleBinFolderId = std::forward<RecycleBinFolderIdT>(value); }
    template<typename RecycleBinFolderIdT = Aws::String>
    User& WithRecycleBinFolderId(RecycleBinFolderIdT&& value) { SetRecycleBinFolderId(std::forward<RecycleBinFolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user.</p>
     */
    inline UserStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UserStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline User& WithStatus(UserStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of user.</p>
     */
    inline UserType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UserType value) { m_typeHasBeenSet = true; m_type = value; }
    inline User& WithType(UserType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    User& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the user was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const { return m_modifiedTimestamp; }
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }
    template<typename ModifiedTimestampT = Aws::Utils::DateTime>
    void SetModifiedTimestamp(ModifiedTimestampT&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::forward<ModifiedTimestampT>(value); }
    template<typename ModifiedTimestampT = Aws::Utils::DateTime>
    User& WithModifiedTimestamp(ModifiedTimestampT&& value) { SetModifiedTimestamp(std::forward<ModifiedTimestampT>(value)); return *this;}
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
    User& WithTimeZoneId(TimeZoneIdT&& value) { SetTimeZoneId(std::forward<TimeZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the user.</p>
     */
    inline LocaleType GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(LocaleType value) { m_localeHasBeenSet = true; m_locale = value; }
    inline User& WithLocale(LocaleType value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage for the user.</p>
     */
    inline const UserStorageMetadata& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = UserStorageMetadata>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = UserStorageMetadata>
    User& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
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

    UserStatusType m_status{UserStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    UserType m_type{UserType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimestamp{};
    bool m_modifiedTimestampHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    LocaleType m_locale{LocaleType::NOT_SET};
    bool m_localeHasBeenSet = false;

    UserStorageMetadata m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
