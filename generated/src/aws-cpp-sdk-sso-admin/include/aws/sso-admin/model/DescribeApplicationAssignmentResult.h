/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/PrincipalType.h>
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
    AWS_SSOADMIN_API DescribeApplicationAssignmentResult();
    AWS_SSOADMIN_API DescribeApplicationAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeApplicationAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeApplicationAssignmentResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeApplicationAssignmentResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeApplicationAssignmentResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalId = value; }

    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalId = std::move(value); }

    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalId.assign(value); }

    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline DescribeApplicationAssignmentResult& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline DescribeApplicationAssignmentResult& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>An identifier for an object in IAM Identity Center, such as a user or group.
     * PrincipalIds are GUIDs (For example, f81d4fae-7dec-11d0-a765-00a0c91e6bf6). For
     * more information about PrincipalIds in IAM Identity Center, see the <a
     * href="/singlesignon/latest/IdentityStoreAPIReference/welcome.html">IAM Identity
     * Center Identity Store API Reference</a>.</p>
     */
    inline DescribeApplicationAssignmentResult& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalType = value; }

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalType = std::move(value); }

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline DescribeApplicationAssignmentResult& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The entity type for which the assignment will be created.</p>
     */
    inline DescribeApplicationAssignmentResult& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeApplicationAssignmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeApplicationAssignmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeApplicationAssignmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationArn;

    Aws::String m_principalId;

    PrincipalType m_principalType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
