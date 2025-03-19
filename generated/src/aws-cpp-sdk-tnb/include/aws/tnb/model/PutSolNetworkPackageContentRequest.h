/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/core/utils/Array.h>
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
  class PutSolNetworkPackageContentRequest : public StreamingTnbRequest
  {
  public:
    AWS_TNB_API PutSolNetworkPackageContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSolNetworkPackageContent"; }


    ///@{
    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline const Aws::String& GetNsdInfoId() const { return m_nsdInfoId; }
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }
    template<typename NsdInfoIdT = Aws::String>
    void SetNsdInfoId(NsdInfoIdT&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::forward<NsdInfoIdT>(value); }
    template<typename NsdInfoIdT = Aws::String>
    PutSolNetworkPackageContentRequest& WithNsdInfoId(NsdInfoIdT&& value) { SetNsdInfoId(std::forward<NsdInfoIdT>(value)); return *this;}
    ///@}
  private:


    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
