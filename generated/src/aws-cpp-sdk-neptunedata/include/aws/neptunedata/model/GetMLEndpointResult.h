/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/MlResourceDefinition.h>
#include <aws/neptunedata/model/MlConfigDefinition.h>
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
namespace neptunedata
{
namespace Model
{
  class GetMLEndpointResult
  {
  public:
    AWS_NEPTUNEDATA_API GetMLEndpointResult();
    AWS_NEPTUNEDATA_API GetMLEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetMLEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the inference endpoint.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the inference endpoint.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the inference endpoint.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the inference endpoint.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the inference endpoint.</p>
     */
    inline GetMLEndpointResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the inference endpoint.</p>
     */
    inline GetMLEndpointResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the inference endpoint.</p>
     */
    inline GetMLEndpointResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline GetMLEndpointResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline GetMLEndpointResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline GetMLEndpointResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The endpoint definition.</p>
     */
    inline const MlResourceDefinition& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint definition.</p>
     */
    inline void SetEndpoint(const MlResourceDefinition& value) { m_endpoint = value; }

    /**
     * <p>The endpoint definition.</p>
     */
    inline void SetEndpoint(MlResourceDefinition&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The endpoint definition.</p>
     */
    inline GetMLEndpointResult& WithEndpoint(const MlResourceDefinition& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint definition.</p>
     */
    inline GetMLEndpointResult& WithEndpoint(MlResourceDefinition&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * <p>The endpoint configuration</p>
     */
    inline const MlConfigDefinition& GetEndpointConfig() const{ return m_endpointConfig; }

    /**
     * <p>The endpoint configuration</p>
     */
    inline void SetEndpointConfig(const MlConfigDefinition& value) { m_endpointConfig = value; }

    /**
     * <p>The endpoint configuration</p>
     */
    inline void SetEndpointConfig(MlConfigDefinition&& value) { m_endpointConfig = std::move(value); }

    /**
     * <p>The endpoint configuration</p>
     */
    inline GetMLEndpointResult& WithEndpointConfig(const MlConfigDefinition& value) { SetEndpointConfig(value); return *this;}

    /**
     * <p>The endpoint configuration</p>
     */
    inline GetMLEndpointResult& WithEndpointConfig(MlConfigDefinition&& value) { SetEndpointConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMLEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMLEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMLEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::String m_id;

    MlResourceDefinition m_endpoint;

    MlConfigDefinition m_endpointConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
