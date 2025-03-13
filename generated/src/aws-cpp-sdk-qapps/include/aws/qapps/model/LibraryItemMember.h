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
    AWS_QAPPS_API LibraryItemMember() = default;
    AWS_QAPPS_API LibraryItemMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API LibraryItemMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the library item.</p>
     */
    inline const Aws::String& GetLibraryItemId() const { return m_libraryItemId; }
    inline bool LibraryItemIdHasBeenSet() const { return m_libraryItemIdHasBeenSet; }
    template<typename LibraryItemIdT = Aws::String>
    void SetLibraryItemId(LibraryItemIdT&& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = std::forward<LibraryItemIdT>(value); }
    template<typename LibraryItemIdT = Aws::String>
    LibraryItemMember& WithLibraryItemId(LibraryItemIdT&& value) { SetLibraryItemId(std::forward<LibraryItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App associated with the library item.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    LibraryItemMember& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Q App associated with the library item.</p>
     */
    inline int GetAppVersion() const { return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    inline void SetAppVersion(int value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline LibraryItemMember& WithAppVersion(int value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The categories associated with the library item.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Category>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Category>>
    LibraryItemMember& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Category>
    LibraryItemMember& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the library item.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    LibraryItemMember& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the library item was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LibraryItemMember& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the library item.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    LibraryItemMember& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the library item was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    LibraryItemMember& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last updated the library item.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    LibraryItemMember& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ratings the library item has received.</p>
     */
    inline int GetRatingCount() const { return m_ratingCount; }
    inline bool RatingCountHasBeenSet() const { return m_ratingCountHasBeenSet; }
    inline void SetRatingCount(int value) { m_ratingCountHasBeenSet = true; m_ratingCount = value; }
    inline LibraryItemMember& WithRatingCount(int value) { SetRatingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the current user has rated the library item.</p>
     */
    inline bool GetIsRatedByUser() const { return m_isRatedByUser; }
    inline bool IsRatedByUserHasBeenSet() const { return m_isRatedByUserHasBeenSet; }
    inline void SetIsRatedByUser(bool value) { m_isRatedByUserHasBeenSet = true; m_isRatedByUser = value; }
    inline LibraryItemMember& WithIsRatedByUser(bool value) { SetIsRatedByUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users who have the associated Q App.</p>
     */
    inline int GetUserCount() const { return m_userCount; }
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }
    inline LibraryItemMember& WithUserCount(int value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the library item has been verified.</p>
     */
    inline bool GetIsVerified() const { return m_isVerified; }
    inline bool IsVerifiedHasBeenSet() const { return m_isVerifiedHasBeenSet; }
    inline void SetIsVerified(bool value) { m_isVerifiedHasBeenSet = true; m_isVerified = value; }
    inline LibraryItemMember& WithIsVerified(bool value) { SetIsVerified(value); return *this;}
    ///@}
  private:

    Aws::String m_libraryItemId;
    bool m_libraryItemIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    int m_appVersion{0};
    bool m_appVersionHasBeenSet = false;

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    int m_ratingCount{0};
    bool m_ratingCountHasBeenSet = false;

    bool m_isRatedByUser{false};
    bool m_isRatedByUserHasBeenSet = false;

    int m_userCount{0};
    bool m_userCountHasBeenSet = false;

    bool m_isVerified{false};
    bool m_isVerifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
