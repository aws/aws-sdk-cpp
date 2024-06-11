﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to delete a dedicated IP pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeleteDedicatedIpPoolRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDedicatedIpPoolRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API DeleteDedicatedIpPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDedicatedIpPool"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the dedicated IP pool that you want to delete.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }
    inline DeleteDedicatedIpPoolRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}
    inline DeleteDedicatedIpPoolRequest& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}
    inline DeleteDedicatedIpPoolRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}
    ///@}
  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
