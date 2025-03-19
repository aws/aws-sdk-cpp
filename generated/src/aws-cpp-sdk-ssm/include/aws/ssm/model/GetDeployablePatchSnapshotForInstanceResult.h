/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{
  class GetDeployablePatchSnapshotForInstanceResult
  {
  public:
    AWS_SSM_API GetDeployablePatchSnapshotForInstanceResult() = default;
    AWS_SSM_API GetDeployablePatchSnapshotForInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetDeployablePatchSnapshotForInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetDeployablePatchSnapshotForInstanceResult& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    GetDeployablePatchSnapshotForInstanceResult& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pre-signed Amazon Simple Storage Service (Amazon S3) URL that can be used
     * to download the patch snapshot.</p>
     */
    inline const Aws::String& GetSnapshotDownloadUrl() const { return m_snapshotDownloadUrl; }
    template<typename SnapshotDownloadUrlT = Aws::String>
    void SetSnapshotDownloadUrl(SnapshotDownloadUrlT&& value) { m_snapshotDownloadUrlHasBeenSet = true; m_snapshotDownloadUrl = std::forward<SnapshotDownloadUrlT>(value); }
    template<typename SnapshotDownloadUrlT = Aws::String>
    GetDeployablePatchSnapshotForInstanceResult& WithSnapshotDownloadUrl(SnapshotDownloadUrlT&& value) { SetSnapshotDownloadUrl(std::forward<SnapshotDownloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the specific operating system (for example Windows Server 2012 or
     * Amazon Linux 2015.09) on the managed node for the specified patch snapshot.</p>
     */
    inline const Aws::String& GetProduct() const { return m_product; }
    template<typename ProductT = Aws::String>
    void SetProduct(ProductT&& value) { m_productHasBeenSet = true; m_product = std::forward<ProductT>(value); }
    template<typename ProductT = Aws::String>
    GetDeployablePatchSnapshotForInstanceResult& WithProduct(ProductT&& value) { SetProduct(std::forward<ProductT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeployablePatchSnapshotForInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_snapshotDownloadUrl;
    bool m_snapshotDownloadUrlHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
