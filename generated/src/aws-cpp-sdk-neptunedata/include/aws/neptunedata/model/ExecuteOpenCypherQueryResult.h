/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace neptunedata
{
namespace Model
{
  class ExecuteOpenCypherQueryResult
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteOpenCypherQueryResult();
    AWS_NEPTUNEDATA_API ExecuteOpenCypherQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ExecuteOpenCypherQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The openCypherquery results.</p>
     */
    inline Aws::Utils::DocumentView GetResults() const{ return m_results; }

    /**
     * <p>The openCypherquery results.</p>
     */
    inline void SetResults(const Aws::Utils::Document& value) { m_results = value; }

    /**
     * <p>The openCypherquery results.</p>
     */
    inline void SetResults(Aws::Utils::Document&& value) { m_results = std::move(value); }

    /**
     * <p>The openCypherquery results.</p>
     */
    inline ExecuteOpenCypherQueryResult& WithResults(const Aws::Utils::Document& value) { SetResults(value); return *this;}

    /**
     * <p>The openCypherquery results.</p>
     */
    inline ExecuteOpenCypherQueryResult& WithResults(Aws::Utils::Document&& value) { SetResults(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExecuteOpenCypherQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExecuteOpenCypherQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExecuteOpenCypherQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Document m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
