/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/VpcEndpoint.h>
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
  class UpdateVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateVpcEndpointResult();
    AWS_OPENSEARCHSERVICE_API UpdateVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdateVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoint to be updated.</p>
     */
    inline const VpcEndpoint& GetVpcEndpoint() const{ return m_vpcEndpoint; }

    /**
     * <p>The endpoint to be updated.</p>
     */
    inline void SetVpcEndpoint(const VpcEndpoint& value) { m_vpcEndpoint = value; }

    /**
     * <p>The endpoint to be updated.</p>
     */
    inline void SetVpcEndpoint(VpcEndpoint&& value) { m_vpcEndpoint = std::move(value); }

    /**
     * <p>The endpoint to be updated.</p>
     */
    inline UpdateVpcEndpointResult& WithVpcEndpoint(const VpcEndpoint& value) { SetVpcEndpoint(value); return *this;}

    /**
     * <p>The endpoint to be updated.</p>
     */
    inline UpdateVpcEndpointResult& WithVpcEndpoint(VpcEndpoint&& value) { SetVpcEndpoint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateVpcEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateVpcEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateVpcEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VpcEndpoint m_vpcEndpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
