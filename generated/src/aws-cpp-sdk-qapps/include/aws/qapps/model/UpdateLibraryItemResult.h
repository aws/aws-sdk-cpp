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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QApps
{
namespace Model
{
  class UpdateLibraryItemResult
  {
  public:
    AWS_QAPPS_API UpdateLibraryItemResult();
    AWS_QAPPS_API UpdateLibraryItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API UpdateLibraryItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the updated library item.</p>
     */
    inline const Aws::String& GetLibraryItemId() const{ return m_libraryItemId; }
    inline void SetLibraryItemId(const Aws::String& value) { m_libraryItemId = value; }
    inline void SetLibraryItemId(Aws::String&& value) { m_libraryItemId = std::move(value); }
    inline void SetLibraryItemId(const char* value) { m_libraryItemId.assign(value); }
    inline UpdateLibraryItemResult& WithLibraryItemId(const Aws::String& value) { SetLibraryItemId(value); return *this;}
    inline UpdateLibraryItemResult& WithLibraryItemId(Aws::String&& value) { SetLibraryItemId(std::move(value)); return *this;}
    inline UpdateLibraryItemResult& WithLibraryItemId(const char* value) { SetLibraryItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App associated with the library item.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline void SetAppId(const Aws::String& value) { m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appId.assign(value); }
    inline UpdateLibraryItemResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline UpdateLibraryItemResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline UpdateLibraryItemResult& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Q App associated with the library item.</p>
     */
    inline int GetAppVersion() const{ return m_appVersion; }
    inline void SetAppVersion(int value) { m_appVersion = value; }
    inline UpdateLibraryItemResult& WithAppVersion(int value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The categories associated with the updated library item.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categories = value; }
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categories = std::move(value); }
    inline UpdateLibraryItemResult& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}
    inline UpdateLibraryItemResult& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}
    inline UpdateLibraryItemResult& AddCategories(const Category& value) { m_categories.push_back(value); return *this; }
    inline UpdateLibraryItemResult& AddCategories(Category&& value) { m_categories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new status of the updated library item.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline UpdateLibraryItemResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline UpdateLibraryItemResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline UpdateLibraryItemResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the library item was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateLibraryItemResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateLibraryItemResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who originally created the library item.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline UpdateLibraryItemResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline UpdateLibraryItemResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline UpdateLibraryItemResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the library item was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateLibraryItemResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateLibraryItemResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last updated the library item.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline UpdateLibraryItemResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline UpdateLibraryItemResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline UpdateLibraryItemResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ratings the library item has received.</p>
     */
    inline int GetRatingCount() const{ return m_ratingCount; }
    inline void SetRatingCount(int value) { m_ratingCount = value; }
    inline UpdateLibraryItemResult& WithRatingCount(int value) { SetRatingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the current user has rated the library item.</p>
     */
    inline bool GetIsRatedByUser() const{ return m_isRatedByUser; }
    inline void SetIsRatedByUser(bool value) { m_isRatedByUser = value; }
    inline UpdateLibraryItemResult& WithIsRatedByUser(bool value) { SetIsRatedByUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users who have the associated Q App.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }
    inline void SetUserCount(int value) { m_userCount = value; }
    inline UpdateLibraryItemResult& WithUserCount(int value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the library item has been verified.</p>
     */
    inline bool GetIsVerified() const{ return m_isVerified; }
    inline void SetIsVerified(bool value) { m_isVerified = value; }
    inline UpdateLibraryItemResult& WithIsVerified(bool value) { SetIsVerified(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateLibraryItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateLibraryItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateLibraryItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_libraryItemId;

    Aws::String m_appId;

    int m_appVersion;

    Aws::Vector<Category> m_categories;

    Aws::String m_status;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    int m_ratingCount;

    bool m_isRatedByUser;

    int m_userCount;

    bool m_isVerified;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
