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
    AWS_SSOADMIN_API GetApplicationAssignmentConfigurationResult() = default;
    AWS_SSOADMIN_API GetApplicationAssignmentConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetApplicationAssignmentConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If <code>AssignmentsRequired</code> is <code>true</code> (default value),
     * users don’t have access to the application unless an assignment is created using
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
     * API</a>. If <code>false</code>, all users have access to the application. </p>
     */
    inline bool GetAssignmentRequired() const { return m_assignmentRequired; }
    inline void SetAssignmentRequired(bool value) { m_assignmentRequiredHasBeenSet = true; m_assignmentRequired = value; }
    inline GetApplicationAssignmentConfigurationResult& WithAssignmentRequired(bool value) { SetAssignmentRequired(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationAssignmentConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_assignmentRequired{false};
    bool m_assignmentRequiredHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
