/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>StartDomainMaintenance</code> request that information
   * about the requested action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StartDomainMaintenanceResponse">AWS
   * API Reference</a></p>
   */
  class StartDomainMaintenanceResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API StartDomainMaintenanceResult();
    AWS_OPENSEARCHSERVICE_API StartDomainMaintenanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API StartDomainMaintenanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID of requested action.</p>
     */
    inline const Aws::String& GetMaintenanceId() const{ return m_maintenanceId; }

    /**
     * <p>The request ID of requested action.</p>
     */
    inline void SetMaintenanceId(const Aws::String& value) { m_maintenanceId = value; }

    /**
     * <p>The request ID of requested action.</p>
     */
    inline void SetMaintenanceId(Aws::String&& value) { m_maintenanceId = std::move(value); }

    /**
     * <p>The request ID of requested action.</p>
     */
    inline void SetMaintenanceId(const char* value) { m_maintenanceId.assign(value); }

    /**
     * <p>The request ID of requested action.</p>
     */
    inline StartDomainMaintenanceResult& WithMaintenanceId(const Aws::String& value) { SetMaintenanceId(value); return *this;}

    /**
     * <p>The request ID of requested action.</p>
     */
    inline StartDomainMaintenanceResult& WithMaintenanceId(Aws::String&& value) { SetMaintenanceId(std::move(value)); return *this;}

    /**
     * <p>The request ID of requested action.</p>
     */
    inline StartDomainMaintenanceResult& WithMaintenanceId(const char* value) { SetMaintenanceId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDomainMaintenanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDomainMaintenanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDomainMaintenanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_maintenanceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
