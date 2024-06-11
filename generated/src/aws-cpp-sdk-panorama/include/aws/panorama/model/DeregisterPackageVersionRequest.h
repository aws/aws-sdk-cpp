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
  class DeregisterPackageVersionRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API DeregisterPackageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterPackageVersion"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;

    AWS_PANORAMA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>An owner account.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline DeregisterPackageVersionRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline DeregisterPackageVersionRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline DeregisterPackageVersionRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A package ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }
    inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }
    inline void SetPackageId(const Aws::String& value) { m_packageIdHasBeenSet = true; m_packageId = value; }
    inline void SetPackageId(Aws::String&& value) { m_packageIdHasBeenSet = true; m_packageId = std::move(value); }
    inline void SetPackageId(const char* value) { m_packageIdHasBeenSet = true; m_packageId.assign(value); }
    inline DeregisterPackageVersionRequest& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}
    inline DeregisterPackageVersionRequest& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}
    inline DeregisterPackageVersionRequest& WithPackageId(const char* value) { SetPackageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline DeregisterPackageVersionRequest& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline DeregisterPackageVersionRequest& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline DeregisterPackageVersionRequest& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersionHasBeenSet = true; m_patchVersion = value; }
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::move(value); }
    inline void SetPatchVersion(const char* value) { m_patchVersionHasBeenSet = true; m_patchVersion.assign(value); }
    inline DeregisterPackageVersionRequest& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}
    inline DeregisterPackageVersionRequest& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}
    inline DeregisterPackageVersionRequest& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the version was marked latest, the new version to maker as latest.</p>
     */
    inline const Aws::String& GetUpdatedLatestPatchVersion() const{ return m_updatedLatestPatchVersion; }
    inline bool UpdatedLatestPatchVersionHasBeenSet() const { return m_updatedLatestPatchVersionHasBeenSet; }
    inline void SetUpdatedLatestPatchVersion(const Aws::String& value) { m_updatedLatestPatchVersionHasBeenSet = true; m_updatedLatestPatchVersion = value; }
    inline void SetUpdatedLatestPatchVersion(Aws::String&& value) { m_updatedLatestPatchVersionHasBeenSet = true; m_updatedLatestPatchVersion = std::move(value); }
    inline void SetUpdatedLatestPatchVersion(const char* value) { m_updatedLatestPatchVersionHasBeenSet = true; m_updatedLatestPatchVersion.assign(value); }
    inline DeregisterPackageVersionRequest& WithUpdatedLatestPatchVersion(const Aws::String& value) { SetUpdatedLatestPatchVersion(value); return *this;}
    inline DeregisterPackageVersionRequest& WithUpdatedLatestPatchVersion(Aws::String&& value) { SetUpdatedLatestPatchVersion(std::move(value)); return *this;}
    inline DeregisterPackageVersionRequest& WithUpdatedLatestPatchVersion(const char* value) { SetUpdatedLatestPatchVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_packageId;
    bool m_packageIdHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet = false;

    Aws::String m_updatedLatestPatchVersion;
    bool m_updatedLatestPatchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
