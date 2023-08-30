/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class StartLoaderJobResult
  {
  public:
    AWS_NEPTUNEDATA_API StartLoaderJobResult();
    AWS_NEPTUNEDATA_API StartLoaderJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API StartLoaderJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP return code indicating the status of the load job.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP return code indicating the status of the load job.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The HTTP return code indicating the status of the load job.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The HTTP return code indicating the status of the load job.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The HTTP return code indicating the status of the load job.</p>
     */
    inline StartLoaderJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The HTTP return code indicating the status of the load job.</p>
     */
    inline StartLoaderJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The HTTP return code indicating the status of the load job.</p>
     */
    inline StartLoaderJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPayload() const{ return m_payload; }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline void SetPayload(const Aws::Map<Aws::String, Aws::String>& value) { m_payload = value; }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline void SetPayload(Aws::Map<Aws::String, Aws::String>&& value) { m_payload = std::move(value); }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& WithPayload(const Aws::Map<Aws::String, Aws::String>& value) { SetPayload(value); return *this;}

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& WithPayload(Aws::Map<Aws::String, Aws::String>&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& AddPayload(const Aws::String& key, const Aws::String& value) { m_payload.emplace(key, value); return *this; }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& AddPayload(Aws::String&& key, const Aws::String& value) { m_payload.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& AddPayload(const Aws::String& key, Aws::String&& value) { m_payload.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& AddPayload(Aws::String&& key, Aws::String&& value) { m_payload.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& AddPayload(const char* key, Aws::String&& value) { m_payload.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& AddPayload(Aws::String&& key, const char* value) { m_payload.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains a <code>loadId</code> name-value pair that provides an identifier
     * for the load operation.</p>
     */
    inline StartLoaderJobResult& AddPayload(const char* key, const char* value) { m_payload.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartLoaderJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartLoaderJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartLoaderJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::Map<Aws::String, Aws::String> m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
