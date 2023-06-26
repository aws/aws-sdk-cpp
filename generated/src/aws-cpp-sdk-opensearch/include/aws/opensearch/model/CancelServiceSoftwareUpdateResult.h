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
    AWS_OPENSEARCHSERVICE_API CancelServiceSoftwareUpdateResult();
    AWS_OPENSEARCHSERVICE_API CancelServiceSoftwareUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CancelServiceSoftwareUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Container for the state of your domain relative to the latest service
     * software.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }

    /**
     * <p>Container for the state of your domain relative to the latest service
     * software.</p>
     */
    inline void SetServiceSoftwareOptions(const ServiceSoftwareOptions& value) { m_serviceSoftwareOptions = value; }

    /**
     * <p>Container for the state of your domain relative to the latest service
     * software.</p>
     */
    inline void SetServiceSoftwareOptions(ServiceSoftwareOptions&& value) { m_serviceSoftwareOptions = std::move(value); }

    /**
     * <p>Container for the state of your domain relative to the latest service
     * software.</p>
     */
    inline CancelServiceSoftwareUpdateResult& WithServiceSoftwareOptions(const ServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}

    /**
     * <p>Container for the state of your domain relative to the latest service
     * software.</p>
     */
    inline CancelServiceSoftwareUpdateResult& WithServiceSoftwareOptions(ServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelServiceSoftwareUpdateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelServiceSoftwareUpdateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelServiceSoftwareUpdateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceSoftwareOptions m_serviceSoftwareOptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
