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
    AWS_OPENSEARCHSERVICE_API StartDomainMaintenanceResult() = default;
    AWS_OPENSEARCHSERVICE_API StartDomainMaintenanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API StartDomainMaintenanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID of requested action.</p>
     */
    inline const Aws::String& GetMaintenanceId() const { return m_maintenanceId; }
    template<typename MaintenanceIdT = Aws::String>
    void SetMaintenanceId(MaintenanceIdT&& value) { m_maintenanceIdHasBeenSet = true; m_maintenanceId = std::forward<MaintenanceIdT>(value); }
    template<typename MaintenanceIdT = Aws::String>
    StartDomainMaintenanceResult& WithMaintenanceId(MaintenanceIdT&& value) { SetMaintenanceId(std::forward<MaintenanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDomainMaintenanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_maintenanceId;
    bool m_maintenanceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
