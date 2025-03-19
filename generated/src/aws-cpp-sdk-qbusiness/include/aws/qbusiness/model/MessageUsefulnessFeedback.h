/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/MessageUsefulness.h>
#include <aws/qbusiness/model/MessageUsefulnessReason.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>End user feedback on an AI-generated web experience chat message
   * usefulness.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/MessageUsefulnessFeedback">AWS
   * API Reference</a></p>
   */
  class MessageUsefulnessFeedback
  {
  public:
    AWS_QBUSINESS_API MessageUsefulnessFeedback() = default;
    AWS_QBUSINESS_API MessageUsefulnessFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API MessageUsefulnessFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The usefulness value assigned by an end user to a message.</p>
     */
    inline MessageUsefulness GetUsefulness() const { return m_usefulness; }
    inline bool UsefulnessHasBeenSet() const { return m_usefulnessHasBeenSet; }
    inline void SetUsefulness(MessageUsefulness value) { m_usefulnessHasBeenSet = true; m_usefulness = value; }
    inline MessageUsefulnessFeedback& WithUsefulness(MessageUsefulness value) { SetUsefulness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for a usefulness rating.</p>
     */
    inline MessageUsefulnessReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(MessageUsefulnessReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline MessageUsefulnessFeedback& WithReason(MessageUsefulnessReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment given by an end user on the usefulness of an AI-generated chat
     * message.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    MessageUsefulnessFeedback& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the feedback was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
    inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
    template<typename SubmittedAtT = Aws::Utils::DateTime>
    void SetSubmittedAt(SubmittedAtT&& value) { m_submittedAtHasBeenSet = true; m_submittedAt = std::forward<SubmittedAtT>(value); }
    template<typename SubmittedAtT = Aws::Utils::DateTime>
    MessageUsefulnessFeedback& WithSubmittedAt(SubmittedAtT&& value) { SetSubmittedAt(std::forward<SubmittedAtT>(value)); return *this;}
    ///@}
  private:

    MessageUsefulness m_usefulness{MessageUsefulness::NOT_SET};
    bool m_usefulnessHasBeenSet = false;

    MessageUsefulnessReason m_reason{MessageUsefulnessReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAt{};
    bool m_submittedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
