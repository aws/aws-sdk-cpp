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


    ///@{
    /**
     * <p>The name of the assignment. The name must be unique within the Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentName = value; }
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentName = std::move(value); }
    inline void SetAssignmentName(const char* value) { m_assignmentName.assign(value); }
    inline CreateIAMPolicyAssignmentResult& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the assignment.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentId = value; }
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentId = std::move(value); }
    inline void SetAssignmentId(const char* value) { m_assignmentId.assign(value); }
    inline CreateIAMPolicyAssignmentResult& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline const AssignmentStatus& GetAssignmentStatus() const{ return m_assignmentStatus; }
    inline void SetAssignmentStatus(const AssignmentStatus& value) { m_assignmentStatus = value; }
    inline void SetAssignmentStatus(AssignmentStatus&& value) { m_assignmentStatus = std::move(value); }
    inline CreateIAMPolicyAssignmentResult& WithAssignmentStatus(const AssignmentStatus& value) { SetAssignmentStatus(value); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithAssignmentStatus(AssignmentStatus&& value) { SetAssignmentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM policy that is applied to the Amazon QuickSight users and
     * groups specified in this assignment.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }
    inline CreateIAMPolicyAssignmentResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight users, groups, or both that the IAM policy is assigned
     * to.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetIdentities() const{ return m_identities; }
    inline void SetIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_identities = value; }
    inline void SetIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_identities = std::move(value); }
    inline CreateIAMPolicyAssignmentResult& WithIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetIdentities(value); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetIdentities(std::move(value)); return *this;}
    inline CreateIAMPolicyAssignmentResult& AddIdentities(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_identities.emplace(key, value); return *this; }
    inline CreateIAMPolicyAssignmentResult& AddIdentities(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_identities.emplace(std::move(key), value); return *this; }
    inline CreateIAMPolicyAssignmentResult& AddIdentities(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_identities.emplace(key, std::move(value)); return *this; }
    inline CreateIAMPolicyAssignmentResult& AddIdentities(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_identities.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIAMPolicyAssignmentResult& AddIdentities(const char* key, Aws::Vector<Aws::String>&& value) { m_identities.emplace(key, std::move(value)); return *this; }
    inline CreateIAMPolicyAssignmentResult& AddIdentities(const char* key, const Aws::Vector<Aws::String>& value) { m_identities.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIAMPolicyAssignmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIAMPolicyAssignmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline CreateIAMPolicyAssignmentResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
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
