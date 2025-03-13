/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ServiceSoftwareOptions.h>
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
   * <p>Container for the response to a <code>CancelServiceSoftwareUpdate</code>
   * operation. Contains the status of the update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CancelServiceSoftwareUpdateResponse">AWS
   * API Reference</a></p>
   */
  class CancelServiceSoftwareUpdateResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API CancelServiceSoftwareUpdateResult() = default;
    AWS_OPENSEARCHSERVICE_API CancelServiceSoftwareUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CancelServiceSoftwareUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Container for the state of your domain relative to the latest service
     * software.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const { return m_serviceSoftwareOptions; }
    template<typename ServiceSoftwareOptionsT = ServiceSoftwareOptions>
    void SetServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::forward<ServiceSoftwareOptionsT>(value); }
    template<typename ServiceSoftwareOptionsT = ServiceSoftwareOptions>
    CancelServiceSoftwareUpdateResult& WithServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { SetServiceSoftwareOptions(std::forward<ServiceSoftwareOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelServiceSoftwareUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceSoftwareOptions m_serviceSoftwareOptions;
    bool m_serviceSoftwareOptionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
