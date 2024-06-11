﻿/**
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
  class GetSolFunctionPackageRequest : public TnbRequest
  {
  public:
    AWS_TNB_API GetSolFunctionPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSolFunctionPackage"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of the function package.</p>
     */
    inline const Aws::String& GetVnfPkgId() const{ return m_vnfPkgId; }
    inline bool VnfPkgIdHasBeenSet() const { return m_vnfPkgIdHasBeenSet; }
    inline void SetVnfPkgId(const Aws::String& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = value; }
    inline void SetVnfPkgId(Aws::String&& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = std::move(value); }
    inline void SetVnfPkgId(const char* value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId.assign(value); }
    inline GetSolFunctionPackageRequest& WithVnfPkgId(const Aws::String& value) { SetVnfPkgId(value); return *this;}
    inline GetSolFunctionPackageRequest& WithVnfPkgId(Aws::String&& value) { SetVnfPkgId(std::move(value)); return *this;}
    inline GetSolFunctionPackageRequest& WithVnfPkgId(const char* value) { SetVnfPkgId(value); return *this;}
    ///@}
  private:

    Aws::String m_vnfPkgId;
    bool m_vnfPkgIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
