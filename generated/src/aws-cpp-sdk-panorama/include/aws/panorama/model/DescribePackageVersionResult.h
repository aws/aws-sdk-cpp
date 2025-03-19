/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/PackageVersionStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Panorama
{
namespace Model
{
  class DescribePackageVersionResult
  {
  public:
    AWS_PANORAMA_API DescribePackageVersionResult() = default;
    AWS_PANORAMA_API DescribePackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribePackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether the version is the latest available.</p>
     */
    inline bool GetIsLatestPatch() const { return m_isLatestPatch; }
    inline void SetIsLatestPatch(bool value) { m_isLatestPatchHasBeenSet = true; m_isLatestPatch = value; }
    inline DescribePackageVersionResult& WithIsLatestPatch(bool value) { SetIsLatestPatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the version's owner.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    DescribePackageVersionResult& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the package.</p>
     */
    inline const Aws::String& GetPackageArn() const { return m_packageArn; }
    template<typename PackageArnT = Aws::String>
    void SetPackageArn(PackageArnT&& value) { m_packageArnHasBeenSet = true; m_packageArn = std::forward<PackageArnT>(value); }
    template<typename PackageArnT = Aws::String>
    DescribePackageVersionResult& WithPackageArn(PackageArnT&& value) { SetPackageArn(std::forward<PackageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's ID.</p>
     */
    inline const Aws::String& GetPackageId() const { return m_packageId; }
    template<typename PackageIdT = Aws::String>
    void SetPackageId(PackageIdT&& value) { m_packageIdHasBeenSet = true; m_packageId = std::forward<PackageIdT>(value); }
    template<typename PackageIdT = Aws::String>
    DescribePackageVersionResult& WithPackageId(PackageIdT&& value) { SetPackageId(std::forward<PackageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's name.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    DescribePackageVersionResult& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's version.</p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    DescribePackageVersionResult& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const { return m_patchVersion; }
    template<typename PatchVersionT = Aws::String>
    void SetPatchVersion(PatchVersionT&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::forward<PatchVersionT>(value); }
    template<typename PatchVersionT = Aws::String>
    DescribePackageVersionResult& WithPatchVersion(PatchVersionT&& value) { SetPatchVersion(std::forward<PatchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's registered time.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredTime() const { return m_registeredTime; }
    template<typename RegisteredTimeT = Aws::Utils::DateTime>
    void SetRegisteredTime(RegisteredTimeT&& value) { m_registeredTimeHasBeenSet = true; m_registeredTime = std::forward<RegisteredTimeT>(value); }
    template<typename RegisteredTimeT = Aws::Utils::DateTime>
    DescribePackageVersionResult& WithRegisteredTime(RegisteredTimeT&& value) { SetRegisteredTime(std::forward<RegisteredTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's status.</p>
     */
    inline PackageVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(PackageVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribePackageVersionResult& WithStatus(PackageVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's status description.</p>
     */
    inline const Aws::String& GetStatusDescription() const { return m_statusDescription; }
    template<typename StatusDescriptionT = Aws::String>
    void SetStatusDescription(StatusDescriptionT&& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = std::forward<StatusDescriptionT>(value); }
    template<typename StatusDescriptionT = Aws::String>
    DescribePackageVersionResult& WithStatusDescription(StatusDescriptionT&& value) { SetStatusDescription(std::forward<StatusDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePackageVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isLatestPatch{false};
    bool m_isLatestPatchHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_packageArn;
    bool m_packageArnHasBeenSet = false;

    Aws::String m_packageId;
    bool m_packageIdHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet = false;

    Aws::Utils::DateTime m_registeredTime{};
    bool m_registeredTimeHasBeenSet = false;

    PackageVersionStatus m_status{PackageVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDescription;
    bool m_statusDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
