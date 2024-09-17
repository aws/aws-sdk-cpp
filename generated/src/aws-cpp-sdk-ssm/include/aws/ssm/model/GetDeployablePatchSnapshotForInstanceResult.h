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
    AWS_SSM_API GetDeployablePatchSnapshotForInstanceResult();
    AWS_SSM_API GetDeployablePatchSnapshotForInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetDeployablePatchSnapshotForInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline GetDeployablePatchSnapshotForInstanceResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pre-signed Amazon Simple Storage Service (Amazon S3) URL that can be used
     * to download the patch snapshot.</p>
     */
    inline const Aws::String& GetSnapshotDownloadUrl() const{ return m_snapshotDownloadUrl; }
    inline void SetSnapshotDownloadUrl(const Aws::String& value) { m_snapshotDownloadUrl = value; }
    inline void SetSnapshotDownloadUrl(Aws::String&& value) { m_snapshotDownloadUrl = std::move(value); }
    inline void SetSnapshotDownloadUrl(const char* value) { m_snapshotDownloadUrl.assign(value); }
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotDownloadUrl(const Aws::String& value) { SetSnapshotDownloadUrl(value); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotDownloadUrl(Aws::String&& value) { SetSnapshotDownloadUrl(std::move(value)); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotDownloadUrl(const char* value) { SetSnapshotDownloadUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the specific operating system (for example Windows Server 2012 or
     * Amazon Linux 2015.09) on the managed node for the specified patch snapshot.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }
    inline void SetProduct(const Aws::String& value) { m_product = value; }
    inline void SetProduct(Aws::String&& value) { m_product = std::move(value); }
    inline void SetProduct(const char* value) { m_product.assign(value); }
    inline GetDeployablePatchSnapshotForInstanceResult& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithProduct(const char* value) { SetProduct(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeployablePatchSnapshotForInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeployablePatchSnapshotForInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;

    Aws::String m_snapshotId;

    Aws::String m_snapshotDownloadUrl;

    Aws::String m_product;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
