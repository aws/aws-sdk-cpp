/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/User.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workdocs/model/CommentStatusType.h>
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
   * <p>Describes the metadata of a comment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CommentMetadata">AWS
   * API Reference</a></p>
   */
  class CommentMetadata
  {
  public:
    AWS_WORKDOCS_API CommentMetadata();
    AWS_WORKDOCS_API CommentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API CommentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the comment.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }
    inline CommentMetadata& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}
    inline CommentMetadata& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}
    inline CommentMetadata& WithCommentId(const char* value) { SetCommentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who made the comment.</p>
     */
    inline const User& GetContributor() const{ return m_contributor; }
    inline bool ContributorHasBeenSet() const { return m_contributorHasBeenSet; }
    inline void SetContributor(const User& value) { m_contributorHasBeenSet = true; m_contributor = value; }
    inline void SetContributor(User&& value) { m_contributorHasBeenSet = true; m_contributor = std::move(value); }
    inline CommentMetadata& WithContributor(const User& value) { SetContributor(value); return *this;}
    inline CommentMetadata& WithContributor(User&& value) { SetContributor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that the comment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline CommentMetadata& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline CommentMetadata& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the comment.</p>
     */
    inline const CommentStatusType& GetCommentStatus() const{ return m_commentStatus; }
    inline bool CommentStatusHasBeenSet() const { return m_commentStatusHasBeenSet; }
    inline void SetCommentStatus(const CommentStatusType& value) { m_commentStatusHasBeenSet = true; m_commentStatus = value; }
    inline void SetCommentStatus(CommentStatusType&& value) { m_commentStatusHasBeenSet = true; m_commentStatus = std::move(value); }
    inline CommentMetadata& WithCommentStatus(const CommentStatusType& value) { SetCommentStatus(value); return *this;}
    inline CommentMetadata& WithCommentStatus(CommentStatusType&& value) { SetCommentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline const Aws::String& GetRecipientId() const{ return m_recipientId; }
    inline bool RecipientIdHasBeenSet() const { return m_recipientIdHasBeenSet; }
    inline void SetRecipientId(const Aws::String& value) { m_recipientIdHasBeenSet = true; m_recipientId = value; }
    inline void SetRecipientId(Aws::String&& value) { m_recipientIdHasBeenSet = true; m_recipientId = std::move(value); }
    inline void SetRecipientId(const char* value) { m_recipientIdHasBeenSet = true; m_recipientId.assign(value); }
    inline CommentMetadata& WithRecipientId(const Aws::String& value) { SetRecipientId(value); return *this;}
    inline CommentMetadata& WithRecipientId(Aws::String&& value) { SetRecipientId(std::move(value)); return *this;}
    inline CommentMetadata& WithRecipientId(const char* value) { SetRecipientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user who made the comment.</p>
     */
    inline const Aws::String& GetContributorId() const{ return m_contributorId; }
    inline bool ContributorIdHasBeenSet() const { return m_contributorIdHasBeenSet; }
    inline void SetContributorId(const Aws::String& value) { m_contributorIdHasBeenSet = true; m_contributorId = value; }
    inline void SetContributorId(Aws::String&& value) { m_contributorIdHasBeenSet = true; m_contributorId = std::move(value); }
    inline void SetContributorId(const char* value) { m_contributorIdHasBeenSet = true; m_contributorId.assign(value); }
    inline CommentMetadata& WithContributorId(const Aws::String& value) { SetContributorId(value); return *this;}
    inline CommentMetadata& WithContributorId(Aws::String&& value) { SetContributorId(std::move(value)); return *this;}
    inline CommentMetadata& WithContributorId(const char* value) { SetContributorId(value); return *this;}
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    User m_contributor;
    bool m_contributorHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    CommentStatusType m_commentStatus;
    bool m_commentStatusHasBeenSet = false;

    Aws::String m_recipientId;
    bool m_recipientIdHasBeenSet = false;

    Aws::String m_contributorId;
    bool m_contributorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
