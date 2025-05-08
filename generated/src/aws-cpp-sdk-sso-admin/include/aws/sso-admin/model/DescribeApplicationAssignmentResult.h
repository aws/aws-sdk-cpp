/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/PrincipalType.h>
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
  class DescribeApplicationAssignmentResult
  {
  public:
    AWS_SSOADMIN_API DescribeApplicationAssignmentResult() = default;
    AWS_SSOADMIN_API DescribeApplicationAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeApplicationAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline PrincipalType GetPrincipalType() const { return m_principalType; }
    inline void SetPrincipalType(PrincipalType value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline DescribeApplicationAssignmentResult& WithPrincipalType(PrincipalType value) { SetPrincipalType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM
     * Identity Center Identity Store API Reference</a>.</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    DescribeApplicationAssignmentResult& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    DescribeApplicationAssignmentResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationAssignmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PrincipalType m_principalType{PrincipalType::NOT_SET};
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
