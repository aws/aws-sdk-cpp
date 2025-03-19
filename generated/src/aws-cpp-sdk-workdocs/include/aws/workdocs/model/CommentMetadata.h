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
    AWS_WORKDOCS_API CommentMetadata() = default;
    AWS_WORKDOCS_API CommentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API CommentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the comment.</p>
     */
    inline const Aws::String& GetCommentId() const { return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    template<typename CommentIdT = Aws::String>
    void SetCommentId(CommentIdT&& value) { m_commentIdHasBeenSet = true; m_commentId = std::forward<CommentIdT>(value); }
    template<typename CommentIdT = Aws::String>
    CommentMetadata& WithCommentId(CommentIdT&& value) { SetCommentId(std::forward<CommentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who made the comment.</p>
     */
    inline const User& GetContributor() const { return m_contributor; }
    inline bool ContributorHasBeenSet() const { return m_contributorHasBeenSet; }
    template<typename ContributorT = User>
    void SetContributor(ContributorT&& value) { m_contributorHasBeenSet = true; m_contributor = std::forward<ContributorT>(value); }
    template<typename ContributorT = User>
    CommentMetadata& WithContributor(ContributorT&& value) { SetContributor(std::forward<ContributorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that the comment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    CommentMetadata& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the comment.</p>
     */
    inline CommentStatusType GetCommentStatus() const { return m_commentStatus; }
    inline bool CommentStatusHasBeenSet() const { return m_commentStatusHasBeenSet; }
    inline void SetCommentStatus(CommentStatusType value) { m_commentStatusHasBeenSet = true; m_commentStatus = value; }
    inline CommentMetadata& WithCommentStatus(CommentStatusType value) { SetCommentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline const Aws::String& GetRecipientId() const { return m_recipientId; }
    inline bool RecipientIdHasBeenSet() const { return m_recipientIdHasBeenSet; }
    template<typename RecipientIdT = Aws::String>
    void SetRecipientId(RecipientIdT&& value) { m_recipientIdHasBeenSet = true; m_recipientId = std::forward<RecipientIdT>(value); }
    template<typename RecipientIdT = Aws::String>
    CommentMetadata& WithRecipientId(RecipientIdT&& value) { SetRecipientId(std::forward<RecipientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user who made the comment.</p>
     */
    inline const Aws::String& GetContributorId() const { return m_contributorId; }
    inline bool ContributorIdHasBeenSet() const { return m_contributorIdHasBeenSet; }
    template<typename ContributorIdT = Aws::String>
    void SetContributorId(ContributorIdT&& value) { m_contributorIdHasBeenSet = true; m_contributorId = std::forward<ContributorIdT>(value); }
    template<typename ContributorIdT = Aws::String>
    CommentMetadata& WithContributorId(ContributorIdT&& value) { SetContributorId(std::forward<ContributorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    User m_contributor;
    bool m_contributorHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    CommentStatusType m_commentStatus{CommentStatusType::NOT_SET};
    bool m_commentStatusHasBeenSet = false;

    Aws::String m_recipientId;
    bool m_recipientIdHasBeenSet = false;

    Aws::String m_contributorId;
    bool m_contributorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
