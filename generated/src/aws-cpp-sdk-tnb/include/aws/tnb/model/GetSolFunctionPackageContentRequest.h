/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/tnb/model/PackageContentType.h>
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
  class GetSolFunctionPackageContentRequest : public TnbRequest
  {
  public:
    AWS_TNB_API GetSolFunctionPackageContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolFunctionPackageContent"; }

    AWS_TNB_API Aws::String SerializePayload() const override;

    AWS_TNB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The format of the package that you want to download from the function
     * packages.</p>
     */
    inline PackageContentType GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    inline void SetAccept(PackageContentType value) { m_acceptHasBeenSet = true; m_accept = value; }
    inline GetSolFunctionPackageContentRequest& WithAccept(PackageContentType value) { SetAccept(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the function package.</p>
     */
    inline const Aws::String& GetVnfPkgId() const { return m_vnfPkgId; }
    inline bool VnfPkgIdHasBeenSet() const { return m_vnfPkgIdHasBeenSet; }
    template<typename VnfPkgIdT = Aws::String>
    void SetVnfPkgId(VnfPkgIdT&& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = std::forward<VnfPkgIdT>(value); }
    template<typename VnfPkgIdT = Aws::String>
    GetSolFunctionPackageContentRequest& WithVnfPkgId(VnfPkgIdT&& value) { SetVnfPkgId(std::forward<VnfPkgIdT>(value)); return *this;}
    ///@}
  private:

    PackageContentType m_accept{PackageContentType::NOT_SET};
    bool m_acceptHasBeenSet = false;

    Aws::String m_vnfPkgId;
    bool m_vnfPkgIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
