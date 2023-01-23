/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Panorama
{
namespace Model
{

  /**
   */
  class RemoveApplicationInstanceRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API RemoveApplicationInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveApplicationInstance"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    /**
     * <p>An application instance ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }

    /**
     * <p>An application instance ID.</p>
     */
    inline bool ApplicationInstanceIdHasBeenSet() const { return m_applicationInstanceIdHasBeenSet; }

    /**
     * <p>An application instance ID.</p>
     */
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = value; }

    /**
     * <p>An application instance ID.</p>
     */
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::move(value); }

    /**
     * <p>An application instance ID.</p>
     */
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId.assign(value); }

    /**
     * <p>An application instance ID.</p>
     */
    inline RemoveApplicationInstanceRequest& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}

    /**
     * <p>An application instance ID.</p>
     */
    inline RemoveApplicationInstanceRequest& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>An application instance ID.</p>
     */
    inline RemoveApplicationInstanceRequest& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}

  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
