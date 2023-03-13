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
    AWS_TNB_API GetSolNetworkOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolNetworkOperation"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the network operation.</p>
     */
    inline const Aws::String& GetNsLcmOpOccId() const{ return m_nsLcmOpOccId; }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline bool NsLcmOpOccIdHasBeenSet() const { return m_nsLcmOpOccIdHasBeenSet; }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(const Aws::String& value) { m_nsLcmOpOccIdHasBeenSet = true; m_nsLcmOpOccId = value; }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(Aws::String&& value) { m_nsLcmOpOccIdHasBeenSet = true; m_nsLcmOpOccId = std::move(value); }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(const char* value) { m_nsLcmOpOccIdHasBeenSet = true; m_nsLcmOpOccId.assign(value); }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline GetSolNetworkOperationRequest& WithNsLcmOpOccId(const Aws::String& value) { SetNsLcmOpOccId(value); return *this;}

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline GetSolNetworkOperationRequest& WithNsLcmOpOccId(Aws::String&& value) { SetNsLcmOpOccId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline GetSolNetworkOperationRequest& WithNsLcmOpOccId(const char* value) { SetNsLcmOpOccId(value); return *this;}

  private:

    Aws::String m_nsLcmOpOccId;
    bool m_nsLcmOpOccIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
