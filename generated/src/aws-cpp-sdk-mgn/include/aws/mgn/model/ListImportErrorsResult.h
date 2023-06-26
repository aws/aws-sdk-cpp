/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ImportTaskError.h>
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
   * <p>List imports errors response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListImportErrorsResponse">AWS
   * API Reference</a></p>
   */
  class ListImportErrorsResult
  {
  public:
    AWS_MGN_API ListImportErrorsResult();
    AWS_MGN_API ListImportErrorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ListImportErrorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List imports errors response items.</p>
     */
    inline const Aws::Vector<ImportTaskError>& GetItems() const{ return m_items; }

    /**
     * <p>List imports errors response items.</p>
     */
    inline void SetItems(const Aws::Vector<ImportTaskError>& value) { m_items = value; }

    /**
     * <p>List imports errors response items.</p>
     */
    inline void SetItems(Aws::Vector<ImportTaskError>&& value) { m_items = std::move(value); }

    /**
     * <p>List imports errors response items.</p>
     */
    inline ListImportErrorsResult& WithItems(const Aws::Vector<ImportTaskError>& value) { SetItems(value); return *this;}

    /**
     * <p>List imports errors response items.</p>
     */
    inline ListImportErrorsResult& WithItems(Aws::Vector<ImportTaskError>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List imports errors response items.</p>
     */
    inline ListImportErrorsResult& AddItems(const ImportTaskError& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List imports errors response items.</p>
     */
    inline ListImportErrorsResult& AddItems(ImportTaskError&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>List imports errors response next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List imports errors response next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>List imports errors response next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>List imports errors response next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>List imports errors response next token.</p>
     */
    inline ListImportErrorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List imports errors response next token.</p>
     */
    inline ListImportErrorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List imports errors response next token.</p>
     */
    inline ListImportErrorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListImportErrorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListImportErrorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListImportErrorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ImportTaskError> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
