/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qapps/model/Category.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>A library item is a snapshot of an Amazon Q App that can be published so the
   * users in their Amazon Q Apps library can discover it, clone it, and run
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/LibraryItemMember">AWS
   * API Reference</a></p>
   */
  class LibraryItemMember
  {
  public:
    AWS_QAPPS_API LibraryItemMember();
    AWS_QAPPS_API LibraryItemMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API LibraryItemMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the library item.</p>
     */
    inline const Aws::String& GetLibraryItemId() const{ return m_libraryItemId; }
    inline bool LibraryItemIdHasBeenSet() const { return m_libraryItemIdHasBeenSet; }
    inline void SetLibraryItemId(const Aws::String& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = value; }
    inline void SetLibraryItemId(Aws::String&& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = std::move(value); }
    inline void SetLibraryItemId(const char* value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId.assign(value); }
    inline LibraryItemMember& WithLibraryItemId(const Aws::String& value) { SetLibraryItemId(value); return *this;}
    inline LibraryItemMember& WithLibraryItemId(Aws::String&& value) { SetLibraryItemId(std::move(value)); return *this;}
    inline LibraryItemMember& WithLibraryItemId(const char* value) { SetLibraryItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App associated with the library item.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline LibraryItemMember& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline LibraryItemMember& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline LibraryItemMember& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Q App associated with the library item.</p>
     */
    inline int GetAppVersion() const{ return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    inline void SetAppVersion(int value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline LibraryItemMember& WithAppVersion(int value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The categories associated with the library item.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline LibraryItemMember& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}
    inline LibraryItemMember& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}
    inline LibraryItemMember& AddCategories(const Category& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline LibraryItemMember& AddCategories(Category&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the library item.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline LibraryItemMember& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline LibraryItemMember& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline LibraryItemMember& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the library item was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline LibraryItemMember& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline LibraryItemMember& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the library item.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline LibraryItemMember& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline LibraryItemMember& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline LibraryItemMember& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the library item was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline LibraryItemMember& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline LibraryItemMember& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last updated the library item.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline LibraryItemMember& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline LibraryItemMember& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline LibraryItemMember& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ratings the library item has received.</p>
     */
    inline int GetRatingCount() const{ return m_ratingCount; }
    inline bool RatingCountHasBeenSet() const { return m_ratingCountHasBeenSet; }
    inline void SetRatingCount(int value) { m_ratingCountHasBeenSet = true; m_ratingCount = value; }
    inline LibraryItemMember& WithRatingCount(int value) { SetRatingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the current user has rated the library item.</p>
     */
    inline bool GetIsRatedByUser() const{ return m_isRatedByUser; }
    inline bool IsRatedByUserHasBeenSet() const { return m_isRatedByUserHasBeenSet; }
    inline void SetIsRatedByUser(bool value) { m_isRatedByUserHasBeenSet = true; m_isRatedByUser = value; }
    inline LibraryItemMember& WithIsRatedByUser(bool value) { SetIsRatedByUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users who have the associated Q App.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }
    inline LibraryItemMember& WithUserCount(int value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the library item has been verified.</p>
     */
    inline bool GetIsVerified() const{ return m_isVerified; }
    inline bool IsVerifiedHasBeenSet() const { return m_isVerifiedHasBeenSet; }
    inline void SetIsVerified(bool value) { m_isVerifiedHasBeenSet = true; m_isVerified = value; }
    inline LibraryItemMember& WithIsVerified(bool value) { SetIsVerified(value); return *this;}
    ///@}
  private:

    Aws::String m_libraryItemId;
    bool m_libraryItemIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    int m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    int m_ratingCount;
    bool m_ratingCountHasBeenSet = false;

    bool m_isRatedByUser;
    bool m_isRatedByUserHasBeenSet = false;

    int m_userCount;
    bool m_userCountHasBeenSet = false;

    bool m_isVerified;
    bool m_isVerifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
