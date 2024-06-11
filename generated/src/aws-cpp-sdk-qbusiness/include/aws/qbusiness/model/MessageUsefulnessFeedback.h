﻿/**
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
    AWS_QBUSINESS_API MessageUsefulnessFeedback();
    AWS_QBUSINESS_API MessageUsefulnessFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API MessageUsefulnessFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The usefulness value assigned by an end user to a message.</p>
     */
    inline const MessageUsefulness& GetUsefulness() const{ return m_usefulness; }
    inline bool UsefulnessHasBeenSet() const { return m_usefulnessHasBeenSet; }
    inline void SetUsefulness(const MessageUsefulness& value) { m_usefulnessHasBeenSet = true; m_usefulness = value; }
    inline void SetUsefulness(MessageUsefulness&& value) { m_usefulnessHasBeenSet = true; m_usefulness = std::move(value); }
    inline MessageUsefulnessFeedback& WithUsefulness(const MessageUsefulness& value) { SetUsefulness(value); return *this;}
    inline MessageUsefulnessFeedback& WithUsefulness(MessageUsefulness&& value) { SetUsefulness(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for a usefulness rating.</p>
     */
    inline const MessageUsefulnessReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const MessageUsefulnessReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(MessageUsefulnessReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline MessageUsefulnessFeedback& WithReason(const MessageUsefulnessReason& value) { SetReason(value); return *this;}
    inline MessageUsefulnessFeedback& WithReason(MessageUsefulnessReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment given by an end user on the usefulness of an AI-generated chat
     * message.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline MessageUsefulnessFeedback& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline MessageUsefulnessFeedback& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline MessageUsefulnessFeedback& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the feedback was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAt() const{ return m_submittedAt; }
    inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
    inline void SetSubmittedAt(const Aws::Utils::DateTime& value) { m_submittedAtHasBeenSet = true; m_submittedAt = value; }
    inline void SetSubmittedAt(Aws::Utils::DateTime&& value) { m_submittedAtHasBeenSet = true; m_submittedAt = std::move(value); }
    inline MessageUsefulnessFeedback& WithSubmittedAt(const Aws::Utils::DateTime& value) { SetSubmittedAt(value); return *this;}
    inline MessageUsefulnessFeedback& WithSubmittedAt(Aws::Utils::DateTime&& value) { SetSubmittedAt(std::move(value)); return *this;}
    ///@}
  private:

    MessageUsefulness m_usefulness;
    bool m_usefulnessHasBeenSet = false;

    MessageUsefulnessReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAt;
    bool m_submittedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
