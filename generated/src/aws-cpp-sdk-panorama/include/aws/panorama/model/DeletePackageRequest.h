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
namespace Http
{
    class URI;
} //namespace Http
namespace Panorama
{
namespace Model
{

  /**
   */
  class DeletePackageRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API DeletePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePackage"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;

    AWS_PANORAMA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Delete the package even if it has artifacts stored in its access point.
     * Deletes the package's artifacts from Amazon S3.</p>
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }

    /**
     * <p>Delete the package even if it has artifacts stored in its access point.
     * Deletes the package's artifacts from Amazon S3.</p>
     */
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }

    /**
     * <p>Delete the package even if it has artifacts stored in its access point.
     * Deletes the package's artifacts from Amazon S3.</p>
     */
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }

    /**
     * <p>Delete the package even if it has artifacts stored in its access point.
     * Deletes the package's artifacts from Amazon S3.</p>
     */
    inline DeletePackageRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}


    /**
     * <p>The package's ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }

    /**
     * <p>The package's ID.</p>
     */
    inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(const Aws::String& value) { m_packageIdHasBeenSet = true; m_packageId = value; }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(Aws::String&& value) { m_packageIdHasBeenSet = true; m_packageId = std::move(value); }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(const char* value) { m_packageIdHasBeenSet = true; m_packageId.assign(value); }

    /**
     * <p>The package's ID.</p>
     */
    inline DeletePackageRequest& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}

    /**
     * <p>The package's ID.</p>
     */
    inline DeletePackageRequest& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}

    /**
     * <p>The package's ID.</p>
     */
    inline DeletePackageRequest& WithPackageId(const char* value) { SetPackageId(value); return *this;}

  private:

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet = false;

    Aws::String m_packageId;
    bool m_packageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
