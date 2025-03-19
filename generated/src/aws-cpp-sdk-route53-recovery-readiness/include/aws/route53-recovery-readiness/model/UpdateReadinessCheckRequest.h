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
   * <p>Name of a readiness check to describe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateReadinessCheckRequest">AWS
   * API Reference</a></p>
   */
  class UpdateReadinessCheckRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateReadinessCheckRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReadinessCheck"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const { return m_readinessCheckName; }
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }
    template<typename ReadinessCheckNameT = Aws::String>
    void SetReadinessCheckName(ReadinessCheckNameT&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::forward<ReadinessCheckNameT>(value); }
    template<typename ReadinessCheckNameT = Aws::String>
    UpdateReadinessCheckRequest& WithReadinessCheckName(ReadinessCheckNameT&& value) { SetReadinessCheckName(std::forward<ReadinessCheckNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline const Aws::String& GetResourceSetName() const { return m_resourceSetName; }
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }
    template<typename ResourceSetNameT = Aws::String>
    void SetResourceSetName(ResourceSetNameT&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::forward<ResourceSetNameT>(value); }
    template<typename ResourceSetNameT = Aws::String>
    UpdateReadinessCheckRequest& WithResourceSetName(ResourceSetNameT&& value) { SetResourceSetName(std::forward<ResourceSetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
