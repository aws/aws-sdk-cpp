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
  class GetSolNetworkInstanceRequest : public TnbRequest
  {
  public:
    AWS_TNB_API GetSolNetworkInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolNetworkInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceId() const { return m_nsInstanceId; }
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }
    template<typename NsInstanceIdT = Aws::String>
    void SetNsInstanceId(NsInstanceIdT&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::forward<NsInstanceIdT>(value); }
    template<typename NsInstanceIdT = Aws::String>
    GetSolNetworkInstanceRequest& WithNsInstanceId(NsInstanceIdT&& value) { SetNsInstanceId(std::forward<NsInstanceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
