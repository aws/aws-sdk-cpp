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
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult();
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline const Aws::String& GetMrap() const{ return m_mrap; }
    inline void SetMrap(const Aws::String& value) { m_mrap = value; }
    inline void SetMrap(Aws::String&& value) { m_mrap = std::move(value); }
    inline void SetMrap(const char* value) { m_mrap.assign(value); }
    inline GetMultiRegionAccessPointRoutesResult& WithMrap(const Aws::String& value) { SetMrap(value); return *this;}
    inline GetMultiRegionAccessPointRoutesResult& WithMrap(Aws::String&& value) { SetMrap(std::move(value)); return *this;}
    inline GetMultiRegionAccessPointRoutesResult& WithMrap(const char* value) { SetMrap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline const Aws::Vector<MultiRegionAccessPointRoute>& GetRoutes() const{ return m_routes; }
    inline void SetRoutes(const Aws::Vector<MultiRegionAccessPointRoute>& value) { m_routes = value; }
    inline void SetRoutes(Aws::Vector<MultiRegionAccessPointRoute>&& value) { m_routes = std::move(value); }
    inline GetMultiRegionAccessPointRoutesResult& WithRoutes(const Aws::Vector<MultiRegionAccessPointRoute>& value) { SetRoutes(value); return *this;}
    inline GetMultiRegionAccessPointRoutesResult& WithRoutes(Aws::Vector<MultiRegionAccessPointRoute>&& value) { SetRoutes(std::move(value)); return *this;}
    inline GetMultiRegionAccessPointRoutesResult& AddRoutes(const MultiRegionAccessPointRoute& value) { m_routes.push_back(value); return *this; }
    inline GetMultiRegionAccessPointRoutesResult& AddRoutes(MultiRegionAccessPointRoute&& value) { m_routes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMultiRegionAccessPointRoutesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMultiRegionAccessPointRoutesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMultiRegionAccessPointRoutesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetMultiRegionAccessPointRoutesResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetMultiRegionAccessPointRoutesResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetMultiRegionAccessPointRoutesResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_mrap;

    Aws::Vector<MultiRegionAccessPointRoute> m_routes;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
