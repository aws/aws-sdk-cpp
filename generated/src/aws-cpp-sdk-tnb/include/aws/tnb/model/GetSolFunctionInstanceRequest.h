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
    AWS_TNB_API GetSolFunctionInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolFunctionInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of the network function.</p>
     */
    inline const Aws::String& GetVnfInstanceId() const { return m_vnfInstanceId; }
    inline bool VnfInstanceIdHasBeenSet() const { return m_vnfInstanceIdHasBeenSet; }
    template<typename VnfInstanceIdT = Aws::String>
    void SetVnfInstanceId(VnfInstanceIdT&& value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId = std::forward<VnfInstanceIdT>(value); }
    template<typename VnfInstanceIdT = Aws::String>
    GetSolFunctionInstanceRequest& WithVnfInstanceId(VnfInstanceIdT&& value) { SetVnfInstanceId(std::forward<VnfInstanceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vnfInstanceId;
    bool m_vnfInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
