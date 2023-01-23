/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class StartOrganizationServiceAccessUpdateRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API StartOrganizationServiceAccessUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOrganizationServiceAccessUpdate"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The action to take for the update request. This can be either
     * <code>ENABLE</code> or <code>DISABLE</code>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The action to take for the update request. This can be either
     * <code>ENABLE</code> or <code>DISABLE</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take for the update request. This can be either
     * <code>ENABLE</code> or <code>DISABLE</code>.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take for the update request. This can be either
     * <code>ENABLE</code> or <code>DISABLE</code>.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take for the update request. This can be either
     * <code>ENABLE</code> or <code>DISABLE</code>.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The action to take for the update request. This can be either
     * <code>ENABLE</code> or <code>DISABLE</code>.</p>
     */
    inline StartOrganizationServiceAccessUpdateRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take for the update request. This can be either
     * <code>ENABLE</code> or <code>DISABLE</code>.</p>
     */
    inline StartOrganizationServiceAccessUpdateRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action to take for the update request. This can be either
     * <code>ENABLE</code> or <code>DISABLE</code>.</p>
     */
    inline StartOrganizationServiceAccessUpdateRequest& WithAction(const char* value) { SetAction(value); return *this;}

  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
