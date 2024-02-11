/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{
  class GetApplicationAssignmentConfigurationResult
  {
  public:
    AWS_SSOADMIN_API GetApplicationAssignmentConfigurationResult();
    AWS_SSOADMIN_API GetApplicationAssignmentConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetApplicationAssignmentConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If <code>AssignmentsRequired</code> is <code>true</code> (default value),
     * users don’t have access to the application unless an assignment is created using
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
     * API</a>. If <code>false</code>, all users have access to the application. </p>
     */
    inline bool GetAssignmentRequired() const{ return m_assignmentRequired; }

    /**
     * <p>If <code>AssignmentsRequired</code> is <code>true</code> (default value),
     * users don’t have access to the application unless an assignment is created using
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
     * API</a>. If <code>false</code>, all users have access to the application. </p>
     */
    inline void SetAssignmentRequired(bool value) { m_assignmentRequired = value; }

    /**
     * <p>If <code>AssignmentsRequired</code> is <code>true</code> (default value),
     * users don’t have access to the application unless an assignment is created using
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
     * API</a>. If <code>false</code>, all users have access to the application. </p>
     */
    inline GetApplicationAssignmentConfigurationResult& WithAssignmentRequired(bool value) { SetAssignmentRequired(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApplicationAssignmentConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApplicationAssignmentConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApplicationAssignmentConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_assignmentRequired;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
