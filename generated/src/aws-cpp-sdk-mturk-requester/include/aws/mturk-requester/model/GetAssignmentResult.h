/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/Assignment.h>
#include <aws/mturk-requester/model/HIT.h>
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
namespace MTurk
{
namespace Model
{
  class GetAssignmentResult
  {
  public:
    AWS_MTURK_API GetAssignmentResult() = default;
    AWS_MTURK_API GetAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline const Assignment& GetAssignment() const { return m_assignment; }
    template<typename AssignmentT = Assignment>
    void SetAssignment(AssignmentT&& value) { m_assignmentHasBeenSet = true; m_assignment = std::forward<AssignmentT>(value); }
    template<typename AssignmentT = Assignment>
    GetAssignmentResult& WithAssignment(AssignmentT&& value) { SetAssignment(std::forward<AssignmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline const HIT& GetHIT() const { return m_hIT; }
    template<typename HITT = HIT>
    void SetHIT(HITT&& value) { m_hITHasBeenSet = true; m_hIT = std::forward<HITT>(value); }
    template<typename HITT = HIT>
    GetAssignmentResult& WithHIT(HITT&& value) { SetHIT(std::forward<HITT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssignmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Assignment m_assignment;
    bool m_assignmentHasBeenSet = false;

    HIT m_hIT;
    bool m_hITHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
