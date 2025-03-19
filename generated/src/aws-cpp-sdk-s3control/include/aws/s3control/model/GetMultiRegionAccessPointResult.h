/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/MultiRegionAccessPointReport.h>
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
  class GetMultiRegionAccessPointResult
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult() = default;
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A container element containing the details of the requested Multi-Region
     * Access Point.</p>
     */
    inline const MultiRegionAccessPointReport& GetAccessPoint() const { return m_accessPoint; }
    template<typename AccessPointT = MultiRegionAccessPointReport>
    void SetAccessPoint(AccessPointT&& value) { m_accessPointHasBeenSet = true; m_accessPoint = std::forward<AccessPointT>(value); }
    template<typename AccessPointT = MultiRegionAccessPointReport>
    GetMultiRegionAccessPointResult& WithAccessPoint(AccessPointT&& value) { SetAccessPoint(std::forward<AccessPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMultiRegionAccessPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    GetMultiRegionAccessPointResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    MultiRegionAccessPointReport m_accessPoint;
    bool m_accessPointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
