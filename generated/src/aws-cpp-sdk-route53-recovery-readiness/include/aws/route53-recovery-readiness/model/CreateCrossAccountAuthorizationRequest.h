/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class CreateCrossAccountAuthorizationRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCrossAccountAuthorization"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The cross-account authorization.</p>
     */
    inline const Aws::String& GetCrossAccountAuthorization() const { return m_crossAccountAuthorization; }
    inline bool CrossAccountAuthorizationHasBeenSet() const { return m_crossAccountAuthorizationHasBeenSet; }
    template<typename CrossAccountAuthorizationT = Aws::String>
    void SetCrossAccountAuthorization(CrossAccountAuthorizationT&& value) { m_crossAccountAuthorizationHasBeenSet = true; m_crossAccountAuthorization = std::forward<CrossAccountAuthorizationT>(value); }
    template<typename CrossAccountAuthorizationT = Aws::String>
    CreateCrossAccountAuthorizationRequest& WithCrossAccountAuthorization(CrossAccountAuthorizationT&& value) { SetCrossAccountAuthorization(std::forward<CrossAccountAuthorizationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_crossAccountAuthorization;
    bool m_crossAccountAuthorizationHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
