/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/Route.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>An HTTP 200 response if the request succeeds, or an error message if the
   * request fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetMultiRegionEndpointResponse">AWS
   * API Reference</a></p>
   */
  class GetMultiRegionEndpointResult
  {
  public:
    AWS_SESV2_API GetMultiRegionEndpointResult();
    AWS_SESV2_API GetMultiRegionEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetMultiRegionEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the multi-region endpoint (global-endpoint).</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointName.assign(value); }
    inline GetMultiRegionEndpointResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline GetMultiRegionEndpointResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline GetMultiRegionEndpointResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the multi-region endpoint (global-endpoint).</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointId.assign(value); }
    inline GetMultiRegionEndpointResult& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline GetMultiRegionEndpointResult& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline GetMultiRegionEndpointResult& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains routes information for the multi-region endpoint
     * (global-endpoint).</p>
     */
    inline const Aws::Vector<Route>& GetRoutes() const{ return m_routes; }
    inline void SetRoutes(const Aws::Vector<Route>& value) { m_routes = value; }
    inline void SetRoutes(Aws::Vector<Route>&& value) { m_routes = std::move(value); }
    inline GetMultiRegionEndpointResult& WithRoutes(const Aws::Vector<Route>& value) { SetRoutes(value); return *this;}
    inline GetMultiRegionEndpointResult& WithRoutes(Aws::Vector<Route>&& value) { SetRoutes(std::move(value)); return *this;}
    inline GetMultiRegionEndpointResult& AddRoutes(const Route& value) { m_routes.push_back(value); return *this; }
    inline GetMultiRegionEndpointResult& AddRoutes(Route&& value) { m_routes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the multi-region endpoint (global-endpoint).</p> <ul> <li> <p>
     * <code>CREATING</code> – The resource is being provisioned.</p> </li> <li> <p>
     * <code>READY</code> – The resource is ready to use.</p> </li> <li> <p>
     * <code>FAILED</code> – The resource failed to be provisioned.</p> </li> <li> <p>
     * <code>DELETING</code> – The resource is being deleted as requested.</p> </li>
     * </ul>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline GetMultiRegionEndpointResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline GetMultiRegionEndpointResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of when the multi-region endpoint (global-endpoint) was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetMultiRegionEndpointResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetMultiRegionEndpointResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of when the multi-region endpoint (global-endpoint) was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }
    inline GetMultiRegionEndpointResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline GetMultiRegionEndpointResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMultiRegionEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMultiRegionEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMultiRegionEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;

    Aws::String m_endpointId;

    Aws::Vector<Route> m_routes;

    Status m_status;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
