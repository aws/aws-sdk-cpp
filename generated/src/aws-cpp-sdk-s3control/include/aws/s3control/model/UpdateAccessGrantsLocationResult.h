/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class UpdateAccessGrantsLocationResult
  {
  public:
    AWS_S3CONTROL_API UpdateAccessGrantsLocationResult() = default;
    AWS_S3CONTROL_API UpdateAccessGrantsLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API UpdateAccessGrantsLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The date and time when you registered the location. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateAccessGrantsLocationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigned this ID when you registered the location. S3 Access Grants
     * assigns the ID <code>default</code> to the default location <code>s3://</code>
     * and assigns an auto-generated ID to other locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const { return m_accessGrantsLocationId; }
    template<typename AccessGrantsLocationIdT = Aws::String>
    void SetAccessGrantsLocationId(AccessGrantsLocationIdT&& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = std::forward<AccessGrantsLocationIdT>(value); }
    template<typename AccessGrantsLocationIdT = Aws::String>
    UpdateAccessGrantsLocationResult& WithAccessGrantsLocationId(AccessGrantsLocationIdT&& value) { SetAccessGrantsLocationId(std::forward<AccessGrantsLocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the registered location that you are
     * updating. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationArn() const { return m_accessGrantsLocationArn; }
    template<typename AccessGrantsLocationArnT = Aws::String>
    void SetAccessGrantsLocationArn(AccessGrantsLocationArnT&& value) { m_accessGrantsLocationArnHasBeenSet = true; m_accessGrantsLocationArn = std::forward<AccessGrantsLocationArnT>(value); }
    template<typename AccessGrantsLocationArnT = Aws::String>
    UpdateAccessGrantsLocationResult& WithAccessGrantsLocationArn(AccessGrantsLocationArnT&& value) { SetAccessGrantsLocationArn(std::forward<AccessGrantsLocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI path of the location that you are updating. You cannot update the
     * scope of the registered location. The location scope can be the default S3
     * location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. </p>
     */
    inline const Aws::String& GetLocationScope() const { return m_locationScope; }
    template<typename LocationScopeT = Aws::String>
    void SetLocationScope(LocationScopeT&& value) { m_locationScopeHasBeenSet = true; m_locationScope = std::forward<LocationScopeT>(value); }
    template<typename LocationScopeT = Aws::String>
    UpdateAccessGrantsLocationResult& WithLocationScope(LocationScopeT&& value) { SetLocationScope(std::forward<LocationScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the registered location. S3
     * Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline const Aws::String& GetIAMRoleArn() const { return m_iAMRoleArn; }
    template<typename IAMRoleArnT = Aws::String>
    void SetIAMRoleArn(IAMRoleArnT&& value) { m_iAMRoleArnHasBeenSet = true; m_iAMRoleArn = std::forward<IAMRoleArnT>(value); }
    template<typename IAMRoleArnT = Aws::String>
    UpdateAccessGrantsLocationResult& WithIAMRoleArn(IAMRoleArnT&& value) { SetIAMRoleArn(std::forward<IAMRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAccessGrantsLocationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    UpdateAccessGrantsLocationResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_accessGrantsLocationId;
    bool m_accessGrantsLocationIdHasBeenSet = false;

    Aws::String m_accessGrantsLocationArn;
    bool m_accessGrantsLocationArnHasBeenSet = false;

    Aws::String m_locationScope;
    bool m_locationScopeHasBeenSet = false;

    Aws::String m_iAMRoleArn;
    bool m_iAMRoleArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
