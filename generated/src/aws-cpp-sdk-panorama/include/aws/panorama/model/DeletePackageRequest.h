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
    AWS_PANORAMA_API DeletePackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePackage"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;

    AWS_PANORAMA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Delete the package even if it has artifacts stored in its access point.
     * Deletes the package's artifacts from Amazon S3.</p>
     */
    inline bool GetForceDelete() const { return m_forceDelete; }
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }
    inline DeletePackageRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's ID.</p>
     */
    inline const Aws::String& GetPackageId() const { return m_packageId; }
    inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }
    template<typename PackageIdT = Aws::String>
    void SetPackageId(PackageIdT&& value) { m_packageIdHasBeenSet = true; m_packageId = std::forward<PackageIdT>(value); }
    template<typename PackageIdT = Aws::String>
    DeletePackageRequest& WithPackageId(PackageIdT&& value) { SetPackageId(std::forward<PackageIdT>(value)); return *this;}
    ///@}
  private:

    bool m_forceDelete{false};
    bool m_forceDeleteHasBeenSet = false;

    Aws::String m_packageId;
    bool m_packageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
