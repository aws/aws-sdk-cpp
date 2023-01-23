/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssignmentStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateIAMPolicyAssignmentResult
  {
  public:
    AWS_QUICKSIGHT_API CreateIAMPolicyAssignmentResult();
    AWS_QUICKSIGHT_API CreateIAMPolicyAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateIAMPolicyAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the assignment. This name must be unique within the Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }

    /**
     * <p>The name of the assignment. This name must be unique within the Amazon Web
     * Services account.</p>
     */
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentName = value; }

    /**
     * <p>The name of the assignment. This name must be unique within the Amazon Web
     * Services account.</p>
     */
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentName = std::move(value); }

    /**
     * <p>The name of the assignment. This name must be unique within the Amazon Web
     * Services account.</p>
     */
    inline void SetAssignmentName(const char* value) { m_assignmentName.assign(value); }

    /**
     * <p>The name of the assignment. This name must be unique within the Amazon Web
     * Services account.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}

    /**
     * <p>The name of the assignment. This name must be unique within the Amazon Web
     * Services account.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the assignment. This name must be unique within the Amazon Web
     * Services account.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}


    /**
     * <p>The ID for the assignment.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }

    /**
     * <p>The ID for the assignment.</p>
     */
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentId = value; }

    /**
     * <p>The ID for the assignment.</p>
     */
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentId = std::move(value); }

    /**
     * <p>The ID for the assignment.</p>
     */
    inline void SetAssignmentId(const char* value) { m_assignmentId.assign(value); }

    /**
     * <p>The ID for the assignment.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}

    /**
     * <p>The ID for the assignment.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}

    /**
     * <p>The ID for the assignment.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}


    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline const AssignmentStatus& GetAssignmentStatus() const{ return m_assignmentStatus; }

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline void SetAssignmentStatus(const AssignmentStatus& value) { m_assignmentStatus = value; }

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline void SetAssignmentStatus(AssignmentStatus&& value) { m_assignmentStatus = std::move(value); }

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline CreateIAMPolicyAssignmentResult& WithAssignmentStatus(const AssignmentStatus& value) { SetAssignmentStatus(value); return *this;}

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline CreateIAMPolicyAssignmentResult& WithAssignmentStatus(AssignmentStatus&& value) { SetAssignmentStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN for the IAM policy that is applied to the Amazon QuickSight users and
     * groups specified in this assignment.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The ARN for the IAM policy that is applied to the Amazon QuickSight users and
     * groups specified in this assignment.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }

    /**
     * <p>The ARN for the IAM policy that is applied to the Amazon QuickSight users and
     * groups specified in this assignment.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }

    /**
     * <p>The ARN for the IAM policy that is applied to the Amazon QuickSight users and
     * groups specified in this assignment.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }

    /**
     * <p>The ARN for the IAM policy that is applied to the Amazon QuickSight users and
     * groups specified in this assignment.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The ARN for the IAM policy that is applied to the Amazon QuickSight users and
     * groups specified in this assignment.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM policy that is applied to the Amazon QuickSight users and
     * groups specified in this assignment.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetIdentities() const{ return m_identities; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline void SetIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_identities = value; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline void SetIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_identities = std::move(value); }

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetIdentities(value); return *this;}

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetIdentities(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline CreateIAMPolicyAssignmentResult& AddIdentities(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_identities.emplace(key, value); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline CreateIAMPolicyAssignmentResult& AddIdentities(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_identities.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline CreateIAMPolicyAssignmentResult& AddIdentities(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_identities.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline CreateIAMPolicyAssignmentResult& AddIdentities(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_identities.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline CreateIAMPolicyAssignmentResult& AddIdentities(const char* key, Aws::Vector<Aws::String>&& value) { m_identities.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline CreateIAMPolicyAssignmentResult& AddIdentities(const char* key, const Aws::Vector<Aws::String>& value) { m_identities.emplace(key, value); return *this; }


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
    inline CreateIAMPolicyAssignmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateIAMPolicyAssignmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline CreateIAMPolicyAssignmentResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_assignmentName;

    Aws::String m_assignmentId;

    AssignmentStatus m_assignmentStatus;

    Aws::String m_policyArn;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_identities;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
