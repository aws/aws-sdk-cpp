/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace tnb
{
namespace Model
{

  /**
   */
  class DeleteSolNetworkInstanceRequest : public TnbRequest
  {
  public:
    AWS_TNB_API DeleteSolNetworkInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSolNetworkInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    /**
     * <p>Network instance ID.</p>
     */
    inline const Aws::String& GetNsInstanceId() const{ return m_nsInstanceId; }

    /**
     * <p>Network instance ID.</p>
     */
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetNsInstanceId(const Aws::String& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = value; }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetNsInstanceId(Aws::String&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::move(value); }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetNsInstanceId(const char* value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId.assign(value); }

    /**
     * <p>Network instance ID.</p>
     */
    inline DeleteSolNetworkInstanceRequest& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}

    /**
     * <p>Network instance ID.</p>
     */
    inline DeleteSolNetworkInstanceRequest& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}

    /**
     * <p>Network instance ID.</p>
     */
    inline DeleteSolNetworkInstanceRequest& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}

  private:

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
