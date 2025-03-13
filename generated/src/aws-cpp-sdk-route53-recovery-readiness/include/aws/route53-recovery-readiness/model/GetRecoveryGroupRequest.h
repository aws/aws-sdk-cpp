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
  class GetRecoveryGroupRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetRecoveryGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecoveryGroup"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of a recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupName() const { return m_recoveryGroupName; }
    inline bool RecoveryGroupNameHasBeenSet() const { return m_recoveryGroupNameHasBeenSet; }
    template<typename RecoveryGroupNameT = Aws::String>
    void SetRecoveryGroupName(RecoveryGroupNameT&& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = std::forward<RecoveryGroupNameT>(value); }
    template<typename RecoveryGroupNameT = Aws::String>
    GetRecoveryGroupRequest& WithRecoveryGroupName(RecoveryGroupNameT&& value) { SetRecoveryGroupName(std::forward<RecoveryGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recoveryGroupName;
    bool m_recoveryGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
