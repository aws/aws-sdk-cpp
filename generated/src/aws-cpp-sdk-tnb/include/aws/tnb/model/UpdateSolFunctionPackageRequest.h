/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/tnb/model/OperationalState.h>
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
  class UpdateSolFunctionPackageRequest : public TnbRequest
  {
  public:
    AWS_TNB_API UpdateSolFunctionPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSolFunctionPackage"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    /**
     * <p>Operational state of the function package.</p>
     */
    inline const OperationalState& GetOperationalState() const{ return m_operationalState; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline bool OperationalStateHasBeenSet() const { return m_operationalStateHasBeenSet; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline void SetOperationalState(const OperationalState& value) { m_operationalStateHasBeenSet = true; m_operationalState = value; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline void SetOperationalState(OperationalState&& value) { m_operationalStateHasBeenSet = true; m_operationalState = std::move(value); }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline UpdateSolFunctionPackageRequest& WithOperationalState(const OperationalState& value) { SetOperationalState(value); return *this;}

    /**
     * <p>Operational state of the function package.</p>
     */
    inline UpdateSolFunctionPackageRequest& WithOperationalState(OperationalState&& value) { SetOperationalState(std::move(value)); return *this;}


    /**
     * <p>ID of the function package.</p>
     */
    inline const Aws::String& GetVnfPkgId() const{ return m_vnfPkgId; }

    /**
     * <p>ID of the function package.</p>
     */
    inline bool VnfPkgIdHasBeenSet() const { return m_vnfPkgIdHasBeenSet; }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetVnfPkgId(const Aws::String& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = value; }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetVnfPkgId(Aws::String&& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = std::move(value); }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetVnfPkgId(const char* value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId.assign(value); }

    /**
     * <p>ID of the function package.</p>
     */
    inline UpdateSolFunctionPackageRequest& WithVnfPkgId(const Aws::String& value) { SetVnfPkgId(value); return *this;}

    /**
     * <p>ID of the function package.</p>
     */
    inline UpdateSolFunctionPackageRequest& WithVnfPkgId(Aws::String&& value) { SetVnfPkgId(std::move(value)); return *this;}

    /**
     * <p>ID of the function package.</p>
     */
    inline UpdateSolFunctionPackageRequest& WithVnfPkgId(const char* value) { SetVnfPkgId(value); return *this;}

  private:

    OperationalState m_operationalState;
    bool m_operationalStateHasBeenSet = false;

    Aws::String m_vnfPkgId;
    bool m_vnfPkgIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
