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
    AWS_PANORAMA_API DescribePackageVersionResult();
    AWS_PANORAMA_API DescribePackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribePackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether the version is the latest available.</p>
     */
    inline bool GetIsLatestPatch() const{ return m_isLatestPatch; }
    inline void SetIsLatestPatch(bool value) { m_isLatestPatch = value; }
    inline DescribePackageVersionResult& WithIsLatestPatch(bool value) { SetIsLatestPatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the version's owner.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }
    inline DescribePackageVersionResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline DescribePackageVersionResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the package.</p>
     */
    inline const Aws::String& GetPackageArn() const{ return m_packageArn; }
    inline void SetPackageArn(const Aws::String& value) { m_packageArn = value; }
    inline void SetPackageArn(Aws::String&& value) { m_packageArn = std::move(value); }
    inline void SetPackageArn(const char* value) { m_packageArn.assign(value); }
    inline DescribePackageVersionResult& WithPackageArn(const Aws::String& value) { SetPackageArn(value); return *this;}
    inline DescribePackageVersionResult& WithPackageArn(Aws::String&& value) { SetPackageArn(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithPackageArn(const char* value) { SetPackageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }
    inline void SetPackageId(const Aws::String& value) { m_packageId = value; }
    inline void SetPackageId(Aws::String&& value) { m_packageId = std::move(value); }
    inline void SetPackageId(const char* value) { m_packageId.assign(value); }
    inline DescribePackageVersionResult& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}
    inline DescribePackageVersionResult& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithPackageId(const char* value) { SetPackageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's name.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline void SetPackageName(const Aws::String& value) { m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageName.assign(value); }
    inline DescribePackageVersionResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline DescribePackageVersionResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersion.assign(value); }
    inline DescribePackageVersionResult& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline DescribePackageVersionResult& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersion = value; }
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersion = std::move(value); }
    inline void SetPatchVersion(const char* value) { m_patchVersion.assign(value); }
    inline DescribePackageVersionResult& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}
    inline DescribePackageVersionResult& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's registered time.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredTime() const{ return m_registeredTime; }
    inline void SetRegisteredTime(const Aws::Utils::DateTime& value) { m_registeredTime = value; }
    inline void SetRegisteredTime(Aws::Utils::DateTime&& value) { m_registeredTime = std::move(value); }
    inline DescribePackageVersionResult& WithRegisteredTime(const Aws::Utils::DateTime& value) { SetRegisteredTime(value); return *this;}
    inline DescribePackageVersionResult& WithRegisteredTime(Aws::Utils::DateTime&& value) { SetRegisteredTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's status.</p>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const PackageVersionStatus& value) { m_status = value; }
    inline void SetStatus(PackageVersionStatus&& value) { m_status = std::move(value); }
    inline DescribePackageVersionResult& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}
    inline DescribePackageVersionResult& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version's status description.</p>
     */
    inline const Aws::String& GetStatusDescription() const{ return m_statusDescription; }
    inline void SetStatusDescription(const Aws::String& value) { m_statusDescription = value; }
    inline void SetStatusDescription(Aws::String&& value) { m_statusDescription = std::move(value); }
    inline void SetStatusDescription(const char* value) { m_statusDescription.assign(value); }
    inline DescribePackageVersionResult& WithStatusDescription(const Aws::String& value) { SetStatusDescription(value); return *this;}
    inline DescribePackageVersionResult& WithStatusDescription(Aws::String&& value) { SetStatusDescription(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithStatusDescription(const char* value) { SetStatusDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePackageVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePackageVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_isLatestPatch;

    Aws::String m_ownerAccount;

    Aws::String m_packageArn;

    Aws::String m_packageId;

    Aws::String m_packageName;

    Aws::String m_packageVersion;

    Aws::String m_patchVersion;

    Aws::Utils::DateTime m_registeredTime;

    PackageVersionStatus m_status;

    Aws::String m_statusDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
