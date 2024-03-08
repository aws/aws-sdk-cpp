/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class GetPluginRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API GetPluginRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPlugin"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline GetPluginRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline GetPluginRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline GetPluginRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the plugin.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline GetPluginRequest& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline GetPluginRequest& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline GetPluginRequest& WithPluginId(const char* value) { SetPluginId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
