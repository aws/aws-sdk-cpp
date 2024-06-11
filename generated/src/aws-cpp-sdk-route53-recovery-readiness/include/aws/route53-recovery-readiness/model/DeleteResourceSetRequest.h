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
  class DeleteResourceSetRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API DeleteResourceSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceSet"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of a resource set.</p>
     */
    inline const Aws::String& GetResourceSetName() const{ return m_resourceSetName; }
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }
    inline void SetResourceSetName(const Aws::String& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = value; }
    inline void SetResourceSetName(Aws::String&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::move(value); }
    inline void SetResourceSetName(const char* value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName.assign(value); }
    inline DeleteResourceSetRequest& WithResourceSetName(const Aws::String& value) { SetResourceSetName(value); return *this;}
    inline DeleteResourceSetRequest& WithResourceSetName(Aws::String&& value) { SetResourceSetName(std::move(value)); return *this;}
    inline DeleteResourceSetRequest& WithResourceSetName(const char* value) { SetResourceSetName(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
