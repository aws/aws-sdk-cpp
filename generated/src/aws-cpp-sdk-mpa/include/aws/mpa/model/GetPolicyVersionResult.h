/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/PolicyVersion.h>
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
namespace MPA
{
namespace Model
{
  class GetPolicyVersionResult
  {
  public:
    AWS_MPA_API GetPolicyVersionResult() = default;
    AWS_MPA_API GetPolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API GetPolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>PolicyVersion</code> object. Contains details for the version of the
     * policy. Policies define the permissions for team resources.</p> <p>The protected
     * operation for a service integration might require specific permissions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
     * other services work with Multi-party approval</a> in the <i>Multi-party approval
     * User Guide</i>.</p>
     */
    inline const PolicyVersion& GetPolicyVersion() const { return m_policyVersion; }
    template<typename PolicyVersionT = PolicyVersion>
    void SetPolicyVersion(PolicyVersionT&& value) { m_policyVersionHasBeenSet = true; m_policyVersion = std::forward<PolicyVersionT>(value); }
    template<typename PolicyVersionT = PolicyVersion>
    GetPolicyVersionResult& WithPolicyVersion(PolicyVersionT&& value) { SetPolicyVersion(std::forward<PolicyVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPolicyVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PolicyVersion m_policyVersion;
    bool m_policyVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
