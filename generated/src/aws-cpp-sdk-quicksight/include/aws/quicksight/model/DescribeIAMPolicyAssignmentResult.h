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
    AWS_QUICKSIGHT_API DescribeIAMPolicyAssignmentResult();
    AWS_QUICKSIGHT_API DescribeIAMPolicyAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeIAMPolicyAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information describing the IAM policy assignment.</p>
     */
    inline const IAMPolicyAssignment& GetIAMPolicyAssignment() const{ return m_iAMPolicyAssignment; }

    /**
     * <p>Information describing the IAM policy assignment.</p>
     */
    inline void SetIAMPolicyAssignment(const IAMPolicyAssignment& value) { m_iAMPolicyAssignment = value; }

    /**
     * <p>Information describing the IAM policy assignment.</p>
     */
    inline void SetIAMPolicyAssignment(IAMPolicyAssignment&& value) { m_iAMPolicyAssignment = std::move(value); }

    /**
     * <p>Information describing the IAM policy assignment.</p>
     */
    inline DescribeIAMPolicyAssignmentResult& WithIAMPolicyAssignment(const IAMPolicyAssignment& value) { SetIAMPolicyAssignment(value); return *this;}

    /**
     * <p>Information describing the IAM policy assignment.</p>
     */
    inline DescribeIAMPolicyAssignmentResult& WithIAMPolicyAssignment(IAMPolicyAssignment&& value) { SetIAMPolicyAssignment(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeIAMPolicyAssignmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeIAMPolicyAssignmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeIAMPolicyAssignmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeIAMPolicyAssignmentResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    IAMPolicyAssignment m_iAMPolicyAssignment;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
