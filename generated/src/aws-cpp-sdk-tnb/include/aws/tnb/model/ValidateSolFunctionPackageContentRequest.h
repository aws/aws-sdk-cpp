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
  class ValidateSolFunctionPackageContentRequest : public StreamingTnbRequest
  {
  public:
    AWS_TNB_API ValidateSolFunctionPackageContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateSolFunctionPackageContent"; }


    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetVnfPkgId() const{ return m_vnfPkgId; }

    /**
     * <p>Function package ID.</p>
     */
    inline bool VnfPkgIdHasBeenSet() const { return m_vnfPkgIdHasBeenSet; }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetVnfPkgId(const Aws::String& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = value; }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetVnfPkgId(Aws::String&& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = std::move(value); }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetVnfPkgId(const char* value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId.assign(value); }

    /**
     * <p>Function package ID.</p>
     */
    inline ValidateSolFunctionPackageContentRequest& WithVnfPkgId(const Aws::String& value) { SetVnfPkgId(value); return *this;}

    /**
     * <p>Function package ID.</p>
     */
    inline ValidateSolFunctionPackageContentRequest& WithVnfPkgId(Aws::String&& value) { SetVnfPkgId(std::move(value)); return *this;}

    /**
     * <p>Function package ID.</p>
     */
    inline ValidateSolFunctionPackageContentRequest& WithVnfPkgId(const char* value) { SetVnfPkgId(value); return *this;}

  private:


    Aws::String m_vnfPkgId;
    bool m_vnfPkgIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
