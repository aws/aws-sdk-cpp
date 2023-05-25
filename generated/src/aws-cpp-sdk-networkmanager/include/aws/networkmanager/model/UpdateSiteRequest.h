/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Location.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class UpdateSiteRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API UpdateSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSite"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline UpdateSiteRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline UpdateSiteRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline UpdateSiteRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of your site.</p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p>The ID of your site.</p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p>The ID of your site.</p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p>The ID of your site.</p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p>The ID of your site.</p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p>The ID of your site.</p>
     */
    inline UpdateSiteRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p>The ID of your site.</p>
     */
    inline UpdateSiteRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p>The ID of your site.</p>
     */
    inline UpdateSiteRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline UpdateSiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline UpdateSiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline UpdateSiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The site location:</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The site location:</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The site location:</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The site location:</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The site location:</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline UpdateSiteRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The site location:</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline UpdateSiteRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
