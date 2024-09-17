/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateLibraryItemResult
  {
  public:
    AWS_QAPPS_API CreateLibraryItemResult();
    AWS_QAPPS_API CreateLibraryItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API CreateLibraryItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the new library item.</p>
     */
    inline const Aws::String& GetLibraryItemId() const{ return m_libraryItemId; }
    inline void SetLibraryItemId(const Aws::String& value) { m_libraryItemId = value; }
    inline void SetLibraryItemId(Aws::String&& value) { m_libraryItemId = std::move(value); }
    inline void SetLibraryItemId(const char* value) { m_libraryItemId.assign(value); }
    inline CreateLibraryItemResult& WithLibraryItemId(const Aws::String& value) { SetLibraryItemId(value); return *this;}
    inline CreateLibraryItemResult& WithLibraryItemId(Aws::String&& value) { SetLibraryItemId(std::move(value)); return *this;}
    inline CreateLibraryItemResult& WithLibraryItemId(const char* value) { SetLibraryItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the new library item, such as "Published".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline CreateLibraryItemResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline CreateLibraryItemResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline CreateLibraryItemResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the library item was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateLibraryItemResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateLibraryItemResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the library item.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline CreateLibraryItemResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline CreateLibraryItemResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline CreateLibraryItemResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the library item was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline CreateLibraryItemResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline CreateLibraryItemResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last updated the library item.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline CreateLibraryItemResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline CreateLibraryItemResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline CreateLibraryItemResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ratings the library item has received from users.</p>
     */
    inline int GetRatingCount() const{ return m_ratingCount; }
    inline void SetRatingCount(int value) { m_ratingCount = value; }
    inline CreateLibraryItemResult& WithRatingCount(int value) { SetRatingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the library item has been verified.</p>
     */
    inline bool GetIsVerified() const{ return m_isVerified; }
    inline void SetIsVerified(bool value) { m_isVerified = value; }
    inline CreateLibraryItemResult& WithIsVerified(bool value) { SetIsVerified(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLibraryItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLibraryItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLibraryItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_libraryItemId;

    Aws::String m_status;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    int m_ratingCount;

    bool m_isVerified;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
