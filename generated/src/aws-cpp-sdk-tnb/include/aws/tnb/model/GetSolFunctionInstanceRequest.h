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
  class GetSolFunctionInstanceRequest : public TnbRequest
  {
  public:
    AWS_TNB_API GetSolFunctionInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolFunctionInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    /**
     * <p>ID of the network function.</p>
     */
    inline const Aws::String& GetVnfInstanceId() const{ return m_vnfInstanceId; }

    /**
     * <p>ID of the network function.</p>
     */
    inline bool VnfInstanceIdHasBeenSet() const { return m_vnfInstanceIdHasBeenSet; }

    /**
     * <p>ID of the network function.</p>
     */
    inline void SetVnfInstanceId(const Aws::String& value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId = value; }

    /**
     * <p>ID of the network function.</p>
     */
    inline void SetVnfInstanceId(Aws::String&& value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId = std::move(value); }

    /**
     * <p>ID of the network function.</p>
     */
    inline void SetVnfInstanceId(const char* value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId.assign(value); }

    /**
     * <p>ID of the network function.</p>
     */
    inline GetSolFunctionInstanceRequest& WithVnfInstanceId(const Aws::String& value) { SetVnfInstanceId(value); return *this;}

    /**
     * <p>ID of the network function.</p>
     */
    inline GetSolFunctionInstanceRequest& WithVnfInstanceId(Aws::String&& value) { SetVnfInstanceId(std::move(value)); return *this;}

    /**
     * <p>ID of the network function.</p>
     */
    inline GetSolFunctionInstanceRequest& WithVnfInstanceId(const char* value) { SetVnfInstanceId(value); return *this;}

  private:

    Aws::String m_vnfInstanceId;
    bool m_vnfInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
