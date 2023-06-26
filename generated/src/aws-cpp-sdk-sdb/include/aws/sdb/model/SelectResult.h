/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sdb/model/ResponseMetadata.h>
#include <aws/sdb/model/Item.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SimpleDB
{
namespace Model
{
  class SelectResult
  {
  public:
    AWS_SIMPLEDB_API SelectResult();
    AWS_SIMPLEDB_API SelectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SIMPLEDB_API SelectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * A list of items that match the select expression.
     */
    inline const Aws::Vector<Item>& GetItems() const{ return m_items; }

    /**
     * A list of items that match the select expression.
     */
    inline void SetItems(const Aws::Vector<Item>& value) { m_items = value; }

    /**
     * A list of items that match the select expression.
     */
    inline void SetItems(Aws::Vector<Item>&& value) { m_items = std::move(value); }

    /**
     * A list of items that match the select expression.
     */
    inline SelectResult& WithItems(const Aws::Vector<Item>& value) { SetItems(value); return *this;}

    /**
     * A list of items that match the select expression.
     */
    inline SelectResult& WithItems(Aws::Vector<Item>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * A list of items that match the select expression.
     */
    inline SelectResult& AddItems(const Item& value) { m_items.push_back(value); return *this; }

    /**
     * A list of items that match the select expression.
     */
    inline SelectResult& AddItems(Item&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * An opaque token indicating that more items than <code>MaxNumberOfItems</code>
     * were matched, the response size exceeded 1 megabyte, or the execution time
     * exceeded 5 seconds.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * An opaque token indicating that more items than <code>MaxNumberOfItems</code>
     * were matched, the response size exceeded 1 megabyte, or the execution time
     * exceeded 5 seconds.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * An opaque token indicating that more items than <code>MaxNumberOfItems</code>
     * were matched, the response size exceeded 1 megabyte, or the execution time
     * exceeded 5 seconds.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * An opaque token indicating that more items than <code>MaxNumberOfItems</code>
     * were matched, the response size exceeded 1 megabyte, or the execution time
     * exceeded 5 seconds.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * An opaque token indicating that more items than <code>MaxNumberOfItems</code>
     * were matched, the response size exceeded 1 megabyte, or the execution time
     * exceeded 5 seconds.
     */
    inline SelectResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * An opaque token indicating that more items than <code>MaxNumberOfItems</code>
     * were matched, the response size exceeded 1 megabyte, or the execution time
     * exceeded 5 seconds.
     */
    inline SelectResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * An opaque token indicating that more items than <code>MaxNumberOfItems</code>
     * were matched, the response size exceeded 1 megabyte, or the execution time
     * exceeded 5 seconds.
     */
    inline SelectResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SelectResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SelectResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Item> m_items;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
