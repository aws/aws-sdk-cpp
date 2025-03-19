/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/NsdOperationalState.h>
#include <utility>

namespace Aws
{
namespace tnb
{
namespace Model
{

  /**
   */
  class UpdateSolNetworkPackageRequest : public TnbRequest
  {
  public:
    AWS_TNB_API UpdateSolNetworkPackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSolNetworkPackage"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline const Aws::String& GetNsdInfoId() const { return m_nsdInfoId; }
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }
    template<typename NsdInfoIdT = Aws::String>
    void SetNsdInfoId(NsdInfoIdT&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::forward<NsdInfoIdT>(value); }
    template<typename NsdInfoIdT = Aws::String>
    UpdateSolNetworkPackageRequest& WithNsdInfoId(NsdInfoIdT&& value) { SetNsdInfoId(std::forward<NsdInfoIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline NsdOperationalState GetNsdOperationalState() const { return m_nsdOperationalState; }
    inline bool NsdOperationalStateHasBeenSet() const { return m_nsdOperationalStateHasBeenSet; }
    inline void SetNsdOperationalState(NsdOperationalState value) { m_nsdOperationalStateHasBeenSet = true; m_nsdOperationalState = value; }
    inline UpdateSolNetworkPackageRequest& WithNsdOperationalState(NsdOperationalState value) { SetNsdOperationalState(value); return *this;}
    ///@}
  private:

    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;

    NsdOperationalState m_nsdOperationalState{NsdOperationalState::NOT_SET};
    bool m_nsdOperationalStateHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
