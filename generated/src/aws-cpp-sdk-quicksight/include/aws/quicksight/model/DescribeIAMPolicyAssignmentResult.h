/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/IAMPolicyAssignment.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeIAMPolicyAssignmentResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeIAMPolicyAssignmentResult() = default;
    AWS_QUICKSIGHT_API DescribeIAMPolicyAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeIAMPolicyAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information describing the IAM policy assignment.</p>
     */
    inline const IAMPolicyAssignment& GetIAMPolicyAssignment() const { return m_iAMPolicyAssignment; }
    template<typename IAMPolicyAssignmentT = IAMPolicyAssignment>
    void SetIAMPolicyAssignment(IAMPolicyAssignmentT&& value) { m_iAMPolicyAssignmentHasBeenSet = true; m_iAMPolicyAssignment = std::forward<IAMPolicyAssignmentT>(value); }
    template<typename IAMPolicyAssignmentT = IAMPolicyAssignment>
    DescribeIAMPolicyAssignmentResult& WithIAMPolicyAssignment(IAMPolicyAssignmentT&& value) { SetIAMPolicyAssignment(std::forward<IAMPolicyAssignmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIAMPolicyAssignmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeIAMPolicyAssignmentResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    IAMPolicyAssignment m_iAMPolicyAssignment;
    bool m_iAMPolicyAssignmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
