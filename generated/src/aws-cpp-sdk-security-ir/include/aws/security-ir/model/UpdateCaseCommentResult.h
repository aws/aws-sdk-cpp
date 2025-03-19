/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityIR
{
namespace Model
{
  class UpdateCaseCommentResult
  {
  public:
    AWS_SECURITYIR_API UpdateCaseCommentResult() = default;
    AWS_SECURITYIR_API UpdateCaseCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API UpdateCaseCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for UpdateCaseComment providing the updated comment ID.</p>
     */
    inline const Aws::String& GetCommentId() const { return m_commentId; }
    template<typename CommentIdT = Aws::String>
    void SetCommentId(CommentIdT&& value) { m_commentIdHasBeenSet = true; m_commentId = std::forward<CommentIdT>(value); }
    template<typename CommentIdT = Aws::String>
    UpdateCaseCommentResult& WithCommentId(CommentIdT&& value) { SetCommentId(std::forward<CommentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for UpdateCaseComment providing the updated comment
     * content.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    UpdateCaseCommentResult& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCaseCommentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
