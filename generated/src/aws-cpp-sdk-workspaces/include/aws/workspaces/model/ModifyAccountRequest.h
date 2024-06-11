﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/workspaces/model/DedicatedTenancySupportEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyAccountRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyAccount"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The status of BYOL.</p>
     */
    inline const DedicatedTenancySupportEnum& GetDedicatedTenancySupport() const{ return m_dedicatedTenancySupport; }
    inline bool DedicatedTenancySupportHasBeenSet() const { return m_dedicatedTenancySupportHasBeenSet; }
    inline void SetDedicatedTenancySupport(const DedicatedTenancySupportEnum& value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = value; }
    inline void SetDedicatedTenancySupport(DedicatedTenancySupportEnum&& value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = std::move(value); }
    inline ModifyAccountRequest& WithDedicatedTenancySupport(const DedicatedTenancySupportEnum& value) { SetDedicatedTenancySupport(value); return *this;}
    inline ModifyAccountRequest& WithDedicatedTenancySupport(DedicatedTenancySupportEnum&& value) { SetDedicatedTenancySupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline const Aws::String& GetDedicatedTenancyManagementCidrRange() const{ return m_dedicatedTenancyManagementCidrRange; }
    inline bool DedicatedTenancyManagementCidrRangeHasBeenSet() const { return m_dedicatedTenancyManagementCidrRangeHasBeenSet; }
    inline void SetDedicatedTenancyManagementCidrRange(const Aws::String& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = value; }
    inline void SetDedicatedTenancyManagementCidrRange(Aws::String&& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = std::move(value); }
    inline void SetDedicatedTenancyManagementCidrRange(const char* value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange.assign(value); }
    inline ModifyAccountRequest& WithDedicatedTenancyManagementCidrRange(const Aws::String& value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}
    inline ModifyAccountRequest& WithDedicatedTenancyManagementCidrRange(Aws::String&& value) { SetDedicatedTenancyManagementCidrRange(std::move(value)); return *this;}
    inline ModifyAccountRequest& WithDedicatedTenancyManagementCidrRange(const char* value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}
    ///@}
  private:

    DedicatedTenancySupportEnum m_dedicatedTenancySupport;
    bool m_dedicatedTenancySupportHasBeenSet = false;

    Aws::String m_dedicatedTenancyManagementCidrRange;
    bool m_dedicatedTenancyManagementCidrRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
