/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/AuthPolicyState.h>
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
namespace VPCLattice
{
namespace Model
{
  class GetAuthPolicyResult
  {
  public:
    AWS_VPCLATTICE_API GetAuthPolicyResult();
    AWS_VPCLATTICE_API GetAuthPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetAuthPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time that the auth policy was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the auth policy was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the auth policy was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the auth policy was created, specified in ISO-8601
     * format.</p>
     */
    inline GetAuthPolicyResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the auth policy was created, specified in ISO-8601
     * format.</p>
     */
    inline GetAuthPolicyResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time that the auth policy was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time that the auth policy was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time that the auth policy was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time that the auth policy was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline GetAuthPolicyResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the auth policy was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline GetAuthPolicyResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The auth policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The auth policy.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The auth policy.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The auth policy.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The auth policy.</p>
     */
    inline GetAuthPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The auth policy.</p>
     */
    inline GetAuthPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The auth policy.</p>
     */
    inline GetAuthPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The state of the auth policy. The auth policy is only active when the auth
     * type is set to <code>Amazon Web Services_IAM</code>. If you provide a policy,
     * then authentication and authorization decisions are made based on this policy
     * and the client's IAM policy. If the auth type is <code>NONE</code>, then any
     * auth policy you provide will remain inactive. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-networks.html#create-service-network">Create
     * a service network</a> in the <i>Amazon VPC Lattice User Guide</i>.</p>
     */
    inline const AuthPolicyState& GetState() const{ return m_state; }

    /**
     * <p>The state of the auth policy. The auth policy is only active when the auth
     * type is set to <code>Amazon Web Services_IAM</code>. If you provide a policy,
     * then authentication and authorization decisions are made based on this policy
     * and the client's IAM policy. If the auth type is <code>NONE</code>, then any
     * auth policy you provide will remain inactive. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-networks.html#create-service-network">Create
     * a service network</a> in the <i>Amazon VPC Lattice User Guide</i>.</p>
     */
    inline void SetState(const AuthPolicyState& value) { m_state = value; }

    /**
     * <p>The state of the auth policy. The auth policy is only active when the auth
     * type is set to <code>Amazon Web Services_IAM</code>. If you provide a policy,
     * then authentication and authorization decisions are made based on this policy
     * and the client's IAM policy. If the auth type is <code>NONE</code>, then any
     * auth policy you provide will remain inactive. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-networks.html#create-service-network">Create
     * a service network</a> in the <i>Amazon VPC Lattice User Guide</i>.</p>
     */
    inline void SetState(AuthPolicyState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the auth policy. The auth policy is only active when the auth
     * type is set to <code>Amazon Web Services_IAM</code>. If you provide a policy,
     * then authentication and authorization decisions are made based on this policy
     * and the client's IAM policy. If the auth type is <code>NONE</code>, then any
     * auth policy you provide will remain inactive. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-networks.html#create-service-network">Create
     * a service network</a> in the <i>Amazon VPC Lattice User Guide</i>.</p>
     */
    inline GetAuthPolicyResult& WithState(const AuthPolicyState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the auth policy. The auth policy is only active when the auth
     * type is set to <code>Amazon Web Services_IAM</code>. If you provide a policy,
     * then authentication and authorization decisions are made based on this policy
     * and the client's IAM policy. If the auth type is <code>NONE</code>, then any
     * auth policy you provide will remain inactive. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-networks.html#create-service-network">Create
     * a service network</a> in the <i>Amazon VPC Lattice User Guide</i>.</p>
     */
    inline GetAuthPolicyResult& WithState(AuthPolicyState&& value) { SetState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAuthPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAuthPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAuthPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_policy;

    AuthPolicyState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
