/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ExportTask.h>
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
namespace mgn
{
namespace Model
{
  /**
   * <p>List export response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListExportsResponse">AWS
   * API Reference</a></p>
   */
  class ListExportsResult
  {
  public:
    AWS_MGN_API ListExportsResult();
    AWS_MGN_API ListExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ListExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List export response items.</p>
     */
    inline const Aws::Vector<ExportTask>& GetItems() const{ return m_items; }

    /**
     * <p>List export response items.</p>
     */
    inline void SetItems(const Aws::Vector<ExportTask>& value) { m_items = value; }

    /**
     * <p>List export response items.</p>
     */
    inline void SetItems(Aws::Vector<ExportTask>&& value) { m_items = std::move(value); }

    /**
     * <p>List export response items.</p>
     */
    inline ListExportsResult& WithItems(const Aws::Vector<ExportTask>& value) { SetItems(value); return *this;}

    /**
     * <p>List export response items.</p>
     */
    inline ListExportsResult& WithItems(Aws::Vector<ExportTask>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List export response items.</p>
     */
    inline ListExportsResult& AddItems(const ExportTask& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List export response items.</p>
     */
    inline ListExportsResult& AddItems(ExportTask&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>List export response next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List export response next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>List export response next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>List export response next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>List export response next token.</p>
     */
    inline ListExportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List export response next token.</p>
     */
    inline ListExportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List export response next token.</p>
     */
    inline ListExportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListExportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListExportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListExportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ExportTask> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
