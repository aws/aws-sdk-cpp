/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class GetFileUploadURLRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API GetFileUploadURLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFileUploadURL"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline const Aws::String& GetAssignmentId() const { return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    template<typename AssignmentIdT = Aws::String>
    void SetAssignmentId(AssignmentIdT&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::forward<AssignmentIdT>(value); }
    template<typename AssignmentIdT = Aws::String>
    GetFileUploadURLRequest& WithAssignmentId(AssignmentIdT&& value) { SetAssignmentId(std::forward<AssignmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline const Aws::String& GetQuestionIdentifier() const { return m_questionIdentifier; }
    inline bool QuestionIdentifierHasBeenSet() const { return m_questionIdentifierHasBeenSet; }
    template<typename QuestionIdentifierT = Aws::String>
    void SetQuestionIdentifier(QuestionIdentifierT&& value) { m_questionIdentifierHasBeenSet = true; m_questionIdentifier = std::forward<QuestionIdentifierT>(value); }
    template<typename QuestionIdentifierT = Aws::String>
    GetFileUploadURLRequest& WithQuestionIdentifier(QuestionIdentifierT&& value) { SetQuestionIdentifier(std::forward<QuestionIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;

    Aws::String m_questionIdentifier;
    bool m_questionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
