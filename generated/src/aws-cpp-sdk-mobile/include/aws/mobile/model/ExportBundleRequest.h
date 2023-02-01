/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/MobileRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mobile/model/Platform.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Mobile
{
namespace Model
{

  /**
   * <p> Request structure used to request generation of custom SDK and tool packages
   * required to integrate mobile web or app clients with backed AWS resources.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportBundleRequest">AWS
   * API Reference</a></p>
   */
  class ExportBundleRequest : public MobileRequest
  {
  public:
    AWS_MOBILE_API ExportBundleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportBundle"; }

    AWS_MOBILE_API Aws::String SerializePayload() const override;

    AWS_MOBILE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Unique bundle identifier. </p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline ExportBundleRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline ExportBundleRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline ExportBundleRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p> Unique project identifier. </p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p> Unique project identifier. </p>
     */
    inline ExportBundleRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p> Unique project identifier. </p>
     */
    inline ExportBundleRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p> Unique project identifier. </p>
     */
    inline ExportBundleRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p> Developer desktop or target application platform. </p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p> Developer desktop or target application platform. </p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p> Developer desktop or target application platform. </p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p> Developer desktop or target application platform. </p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p> Developer desktop or target application platform. </p>
     */
    inline ExportBundleRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p> Developer desktop or target application platform. </p>
     */
    inline ExportBundleRequest& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}

  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
