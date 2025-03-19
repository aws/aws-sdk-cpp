/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class CreateCrossAccountAuthorizationResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cross-account authorization.</p>
     */
    inline const Aws::String& GetCrossAccountAuthorization() const { return m_crossAccountAuthorization; }
    template<typename CrossAccountAuthorizationT = Aws::String>
    void SetCrossAccountAuthorization(CrossAccountAuthorizationT&& value) { m_crossAccountAuthorizationHasBeenSet = true; m_crossAccountAuthorization = std::forward<CrossAccountAuthorizationT>(value); }
    template<typename CrossAccountAuthorizationT = Aws::String>
    CreateCrossAccountAuthorizationResult& WithCrossAccountAuthorization(CrossAccountAuthorizationT&& value) { SetCrossAccountAuthorization(std::forward<CrossAccountAuthorizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCrossAccountAuthorizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_crossAccountAuthorization;
    bool m_crossAccountAuthorizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
