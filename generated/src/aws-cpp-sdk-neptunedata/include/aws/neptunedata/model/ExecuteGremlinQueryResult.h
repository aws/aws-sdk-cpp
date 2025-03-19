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
    AWS_NEPTUNEDATA_API ExecuteGremlinQueryResult() = default;
    AWS_NEPTUNEDATA_API ExecuteGremlinQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ExecuteGremlinQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Gremlin query.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExecuteGremlinQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Gremlin query.</p>
     */
    inline const GremlinQueryStatusAttributes& GetStatus() const { return m_status; }
    template<typename StatusT = GremlinQueryStatusAttributes>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = GremlinQueryStatusAttributes>
    ExecuteGremlinQueryResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Gremlin query output from the server.</p>
     */
    inline Aws::Utils::DocumentView GetResult() const { return m_result; }
    template<typename ResultT = Aws::Utils::Document>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = Aws::Utils::Document>
    ExecuteGremlinQueryResult& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about the Gremlin query.</p>
     */
    inline Aws::Utils::DocumentView GetMeta() const { return m_meta; }
    template<typename MetaT = Aws::Utils::Document>
    void SetMeta(MetaT&& value) { m_metaHasBeenSet = true; m_meta = std::forward<MetaT>(value); }
    template<typename MetaT = Aws::Utils::Document>
    ExecuteGremlinQueryResult& WithMeta(MetaT&& value) { SetMeta(std::forward<MetaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    GremlinQueryStatusAttributes m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::Document m_result;
    bool m_resultHasBeenSet = false;

    Aws::Utils::Document m_meta;
    bool m_metaHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
