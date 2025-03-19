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
   * <p>Represents the output of a <code>StartServiceSoftwareUpdate</code> operation.
   * Contains the status of the update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StartServiceSoftwareUpdateResponse">AWS
   * API Reference</a></p>
   */
  class StartServiceSoftwareUpdateResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API StartServiceSoftwareUpdateResult() = default;
    AWS_OPENSEARCHSERVICE_API StartServiceSoftwareUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API StartServiceSoftwareUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the OpenSearch Service software update.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const { return m_serviceSoftwareOptions; }
    template<typename ServiceSoftwareOptionsT = ServiceSoftwareOptions>
    void SetServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::forward<ServiceSoftwareOptionsT>(value); }
    template<typename ServiceSoftwareOptionsT = ServiceSoftwareOptions>
    StartServiceSoftwareUpdateResult& WithServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { SetServiceSoftwareOptions(std::forward<ServiceSoftwareOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartServiceSoftwareUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
