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
  class GetSolNetworkOperationRequest : public TnbRequest
  {
  public:
    AWS_TNB_API GetSolNetworkOperationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolNetworkOperation"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the network operation.</p>
     */
    inline const Aws::String& GetNsLcmOpOccId() const { return m_nsLcmOpOccId; }
    inline bool NsLcmOpOccIdHasBeenSet() const { return m_nsLcmOpOccIdHasBeenSet; }
    template<typename NsLcmOpOccIdT = Aws::String>
    void SetNsLcmOpOccId(NsLcmOpOccIdT&& value) { m_nsLcmOpOccIdHasBeenSet = true; m_nsLcmOpOccId = std::forward<NsLcmOpOccIdT>(value); }
    template<typename NsLcmOpOccIdT = Aws::String>
    GetSolNetworkOperationRequest& WithNsLcmOpOccId(NsLcmOpOccIdT&& value) { SetNsLcmOpOccId(std::forward<NsLcmOpOccIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nsLcmOpOccId;
    bool m_nsLcmOpOccIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
