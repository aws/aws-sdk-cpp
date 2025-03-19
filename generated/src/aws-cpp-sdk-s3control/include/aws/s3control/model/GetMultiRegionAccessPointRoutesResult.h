/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/MultiRegionAccessPointRoute.h>
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
  class GetMultiRegionAccessPointRoutesResult
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult() = default;
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline const Aws::String& GetMrap() const { return m_mrap; }
    template<typename MrapT = Aws::String>
    void SetMrap(MrapT&& value) { m_mrapHasBeenSet = true; m_mrap = std::forward<MrapT>(value); }
    template<typename MrapT = Aws::String>
    GetMultiRegionAccessPointRoutesResult& WithMrap(MrapT&& value) { SetMrap(std::forward<MrapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline const Aws::Vector<MultiRegionAccessPointRoute>& GetRoutes() const { return m_routes; }
    template<typename RoutesT = Aws::Vector<MultiRegionAccessPointRoute>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<MultiRegionAccessPointRoute>>
    GetMultiRegionAccessPointRoutesResult& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = MultiRegionAccessPointRoute>
    GetMultiRegionAccessPointRoutesResult& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMultiRegionAccessPointRoutesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    GetMultiRegionAccessPointRoutesResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mrap;
    bool m_mrapHasBeenSet = false;

    Aws::Vector<MultiRegionAccessPointRoute> m_routes;
    bool m_routesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
