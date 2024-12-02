/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ListCommentsItem">AWS
   * API Reference</a></p>
   */
  class ListCommentsItem
  {
  public:
    AWS_SECURITYIR_API ListCommentsItem();
    AWS_SECURITYIR_API ListCommentsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API ListCommentsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }
    inline ListCommentsItem& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}
    inline ListCommentsItem& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}
    inline ListCommentsItem& WithCommentId(const char* value) { SetCommentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline ListCommentsItem& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline ListCommentsItem& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline ListCommentsItem& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline ListCommentsItem& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCreator() const{ return m_creator; }
    inline bool CreatorHasBeenSet() const { return m_creatorHasBeenSet; }
    inline void SetCreator(const Aws::String& value) { m_creatorHasBeenSet = true; m_creator = value; }
    inline void SetCreator(Aws::String&& value) { m_creatorHasBeenSet = true; m_creator = std::move(value); }
    inline void SetCreator(const char* value) { m_creatorHasBeenSet = true; m_creator.assign(value); }
    inline ListCommentsItem& WithCreator(const Aws::String& value) { SetCreator(value); return *this;}
    inline ListCommentsItem& WithCreator(Aws::String&& value) { SetCreator(std::move(value)); return *this;}
    inline ListCommentsItem& WithCreator(const char* value) { SetCreator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }
    inline ListCommentsItem& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}
    inline ListCommentsItem& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}
    inline ListCommentsItem& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline ListCommentsItem& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline ListCommentsItem& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline ListCommentsItem& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_creator;
    bool m_creatorHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
