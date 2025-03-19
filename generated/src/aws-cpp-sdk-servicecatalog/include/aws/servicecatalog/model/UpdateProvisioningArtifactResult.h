/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/Status.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class UpdateProvisioningArtifactResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateProvisioningArtifactResult() = default;
    AWS_SERVICECATALOG_API UpdateProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline const ProvisioningArtifactDetail& GetProvisioningArtifactDetail() const { return m_provisioningArtifactDetail; }
    template<typename ProvisioningArtifactDetailT = ProvisioningArtifactDetail>
    void SetProvisioningArtifactDetail(ProvisioningArtifactDetailT&& value) { m_provisioningArtifactDetailHasBeenSet = true; m_provisioningArtifactDetail = std::forward<ProvisioningArtifactDetailT>(value); }
    template<typename ProvisioningArtifactDetailT = ProvisioningArtifactDetail>
    UpdateProvisioningArtifactResult& WithProvisioningArtifactDetail(ProvisioningArtifactDetailT&& value) { SetProvisioningArtifactDetail(std::forward<ProvisioningArtifactDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInfo() const { return m_info; }
    template<typename InfoT = Aws::Map<Aws::String, Aws::String>>
    void SetInfo(InfoT&& value) { m_infoHasBeenSet = true; m_info = std::forward<InfoT>(value); }
    template<typename InfoT = Aws::Map<Aws::String, Aws::String>>
    UpdateProvisioningArtifactResult& WithInfo(InfoT&& value) { SetInfo(std::forward<InfoT>(value)); return *this;}
    template<typename InfoKeyT = Aws::String, typename InfoValueT = Aws::String>
    UpdateProvisioningArtifactResult& AddInfo(InfoKeyT&& key, InfoValueT&& value) {
      m_infoHasBeenSet = true; m_info.emplace(std::forward<InfoKeyT>(key), std::forward<InfoValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the current request.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateProvisioningArtifactResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateProvisioningArtifactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProvisioningArtifactDetail m_provisioningArtifactDetail;
    bool m_provisioningArtifactDetailHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_info;
    bool m_infoHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
