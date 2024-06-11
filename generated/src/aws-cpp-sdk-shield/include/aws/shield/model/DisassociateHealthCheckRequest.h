/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class DisassociateHealthCheckRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API DisassociateHealthCheckRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateHealthCheck"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to remove the
     * health check association from. </p>
     */
    inline const Aws::String& GetProtectionId() const{ return m_protectionId; }
    inline bool ProtectionIdHasBeenSet() const { return m_protectionIdHasBeenSet; }
    inline void SetProtectionId(const Aws::String& value) { m_protectionIdHasBeenSet = true; m_protectionId = value; }
    inline void SetProtectionId(Aws::String&& value) { m_protectionIdHasBeenSet = true; m_protectionId = std::move(value); }
    inline void SetProtectionId(const char* value) { m_protectionIdHasBeenSet = true; m_protectionId.assign(value); }
    inline DisassociateHealthCheckRequest& WithProtectionId(const Aws::String& value) { SetProtectionId(value); return *this;}
    inline DisassociateHealthCheckRequest& WithProtectionId(Aws::String&& value) { SetProtectionId(std::move(value)); return *this;}
    inline DisassociateHealthCheckRequest& WithProtectionId(const char* value) { SetProtectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the health check that is associated with
     * the protection.</p>
     */
    inline const Aws::String& GetHealthCheckArn() const{ return m_healthCheckArn; }
    inline bool HealthCheckArnHasBeenSet() const { return m_healthCheckArnHasBeenSet; }
    inline void SetHealthCheckArn(const Aws::String& value) { m_healthCheckArnHasBeenSet = true; m_healthCheckArn = value; }
    inline void SetHealthCheckArn(Aws::String&& value) { m_healthCheckArnHasBeenSet = true; m_healthCheckArn = std::move(value); }
    inline void SetHealthCheckArn(const char* value) { m_healthCheckArnHasBeenSet = true; m_healthCheckArn.assign(value); }
    inline DisassociateHealthCheckRequest& WithHealthCheckArn(const Aws::String& value) { SetHealthCheckArn(value); return *this;}
    inline DisassociateHealthCheckRequest& WithHealthCheckArn(Aws::String&& value) { SetHealthCheckArn(std::move(value)); return *this;}
    inline DisassociateHealthCheckRequest& WithHealthCheckArn(const char* value) { SetHealthCheckArn(value); return *this;}
    ///@}
  private:

    Aws::String m_protectionId;
    bool m_protectionIdHasBeenSet = false;

    Aws::String m_healthCheckArn;
    bool m_healthCheckArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
