/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
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
  class PutAuthPolicyResult
  {
  public:
    AWS_VPCLATTICE_API PutAuthPolicyResult() = default;
    AWS_VPCLATTICE_API PutAuthPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API PutAuthPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The auth policy. The policy string in JSON must not contain newlines or blank
     * lines.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutAuthPolicyResult& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the auth policy. The auth policy is only active when the auth
     * type is set to <code>AWS_IAM</code>. If you provide a policy, then
     * authentication and authorization decisions are made based on this policy and the
     * client's IAM policy. If the Auth type is <code>NONE</code>, then, any auth
     * policy that you provide remains inactive. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-networks.html#create-service-network">Create
     * a service network</a> in the <i>Amazon VPC Lattice User Guide</i>.</p>
     */
    inline AuthPolicyState GetState() const { return m_state; }
    inline void SetState(AuthPolicyState value) { m_stateHasBeenSet = true; m_state = value; }
    inline PutAuthPolicyResult& WithState(AuthPolicyState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutAuthPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    AuthPolicyState m_state{AuthPolicyState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
