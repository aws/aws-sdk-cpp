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
  class UpdateGlobalNetworkRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API UpdateGlobalNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalNetwork"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of your global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of your global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of your global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of your global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of your global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of your global network.</p>
     */
    inline UpdateGlobalNetworkRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of your global network.</p>
     */
    inline UpdateGlobalNetworkRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of your global network.</p>
     */
    inline UpdateGlobalNetworkRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>A description of the global network.</p> <p>Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the global network.</p> <p>Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the global network.</p> <p>Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the global network.</p> <p>Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the global network.</p> <p>Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the global network.</p> <p>Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline UpdateGlobalNetworkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the global network.</p> <p>Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline UpdateGlobalNetworkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the global network.</p> <p>Constraints: Maximum length of
     * 256 characters.</p>
     */
    inline UpdateGlobalNetworkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
