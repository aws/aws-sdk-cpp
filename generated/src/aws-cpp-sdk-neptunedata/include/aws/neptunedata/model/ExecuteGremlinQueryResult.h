/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/GremlinQueryStatusAttributes.h>
#include <aws/core/utils/Document.h>
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
  class ExecuteGremlinQueryResult
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteGremlinQueryResult();
    AWS_NEPTUNEDATA_API ExecuteGremlinQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ExecuteGremlinQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the Gremlin query.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The unique identifier of the Gremlin query.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The unique identifier of the Gremlin query.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The unique identifier of the Gremlin query.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The unique identifier of the Gremlin query.</p>
     */
    inline ExecuteGremlinQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The unique identifier of the Gremlin query.</p>
     */
    inline ExecuteGremlinQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Gremlin query.</p>
     */
    inline ExecuteGremlinQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The status of the Gremlin query.</p>
     */
    inline const GremlinQueryStatusAttributes& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Gremlin query.</p>
     */
    inline void SetStatus(const GremlinQueryStatusAttributes& value) { m_status = value; }

    /**
     * <p>The status of the Gremlin query.</p>
     */
    inline void SetStatus(GremlinQueryStatusAttributes&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the Gremlin query.</p>
     */
    inline ExecuteGremlinQueryResult& WithStatus(const GremlinQueryStatusAttributes& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Gremlin query.</p>
     */
    inline ExecuteGremlinQueryResult& WithStatus(GremlinQueryStatusAttributes&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Gremlin query output from the server.</p>
     */
    inline Aws::Utils::DocumentView GetResult() const{ return m_result; }

    /**
     * <p>The Gremlin query output from the server.</p>
     */
    inline void SetResult(const Aws::Utils::Document& value) { m_result = value; }

    /**
     * <p>The Gremlin query output from the server.</p>
     */
    inline void SetResult(Aws::Utils::Document&& value) { m_result = std::move(value); }

    /**
     * <p>The Gremlin query output from the server.</p>
     */
    inline ExecuteGremlinQueryResult& WithResult(const Aws::Utils::Document& value) { SetResult(value); return *this;}

    /**
     * <p>The Gremlin query output from the server.</p>
     */
    inline ExecuteGremlinQueryResult& WithResult(Aws::Utils::Document&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>Metadata about the Gremlin query.</p>
     */
    inline Aws::Utils::DocumentView GetMeta() const{ return m_meta; }

    /**
     * <p>Metadata about the Gremlin query.</p>
     */
    inline void SetMeta(const Aws::Utils::Document& value) { m_meta = value; }

    /**
     * <p>Metadata about the Gremlin query.</p>
     */
    inline void SetMeta(Aws::Utils::Document&& value) { m_meta = std::move(value); }

    /**
     * <p>Metadata about the Gremlin query.</p>
     */
    inline ExecuteGremlinQueryResult& WithMeta(const Aws::Utils::Document& value) { SetMeta(value); return *this;}

    /**
     * <p>Metadata about the Gremlin query.</p>
     */
    inline ExecuteGremlinQueryResult& WithMeta(Aws::Utils::Document&& value) { SetMeta(std::move(value)); return *this;}

  private:

    Aws::String m_requestId;

    GremlinQueryStatusAttributes m_status;

    Aws::Utils::Document m_result;

    Aws::Utils::Document m_meta;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
