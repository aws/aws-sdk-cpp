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
  class DescribeApplicationInstanceRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API DescribeApplicationInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplicationInstance"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline bool ApplicationInstanceIdHasBeenSet() const { return m_applicationInstanceIdHasBeenSet; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = value; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::move(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId.assign(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceRequest& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceRequest& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceRequest& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}

  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
