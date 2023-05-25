/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/EndpointAccess.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class UpdateEndpointAccessResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateEndpointAccessResult();
    AWS_REDSHIFTSERVERLESS_API UpdateEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API UpdateEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated VPC endpoint.</p>
     */
    inline const EndpointAccess& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The updated VPC endpoint.</p>
     */
    inline void SetEndpoint(const EndpointAccess& value) { m_endpoint = value; }

    /**
     * <p>The updated VPC endpoint.</p>
     */
    inline void SetEndpoint(EndpointAccess&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The updated VPC endpoint.</p>
     */
    inline UpdateEndpointAccessResult& WithEndpoint(const EndpointAccess& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The updated VPC endpoint.</p>
     */
    inline UpdateEndpointAccessResult& WithEndpoint(EndpointAccess&& value) { SetEndpoint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEndpointAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEndpointAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEndpointAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EndpointAccess m_endpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
