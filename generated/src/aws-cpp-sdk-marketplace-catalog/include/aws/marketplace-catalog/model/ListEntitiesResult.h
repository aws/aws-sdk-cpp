/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/EntitySummary.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class ListEntitiesResult
  {
  public:
    AWS_MARKETPLACECATALOG_API ListEntitiesResult();
    AWS_MARKETPLACECATALOG_API ListEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API ListEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Array of <code>EntitySummary</code> object.</p>
     */
    inline const Aws::Vector<EntitySummary>& GetEntitySummaryList() const{ return m_entitySummaryList; }

    /**
     * <p> Array of <code>EntitySummary</code> object.</p>
     */
    inline void SetEntitySummaryList(const Aws::Vector<EntitySummary>& value) { m_entitySummaryList = value; }

    /**
     * <p> Array of <code>EntitySummary</code> object.</p>
     */
    inline void SetEntitySummaryList(Aws::Vector<EntitySummary>&& value) { m_entitySummaryList = std::move(value); }

    /**
     * <p> Array of <code>EntitySummary</code> object.</p>
     */
    inline ListEntitiesResult& WithEntitySummaryList(const Aws::Vector<EntitySummary>& value) { SetEntitySummaryList(value); return *this;}

    /**
     * <p> Array of <code>EntitySummary</code> object.</p>
     */
    inline ListEntitiesResult& WithEntitySummaryList(Aws::Vector<EntitySummary>&& value) { SetEntitySummaryList(std::move(value)); return *this;}

    /**
     * <p> Array of <code>EntitySummary</code> object.</p>
     */
    inline ListEntitiesResult& AddEntitySummaryList(const EntitySummary& value) { m_entitySummaryList.push_back(value); return *this; }

    /**
     * <p> Array of <code>EntitySummary</code> object.</p>
     */
    inline ListEntitiesResult& AddEntitySummaryList(EntitySummary&& value) { m_entitySummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The value of the next token if it exists. Null if there is no more
     * result.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The value of the next token if it exists. Null if there is no more
     * result.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The value of the next token if it exists. Null if there is no more
     * result.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The value of the next token if it exists. Null if there is no more
     * result.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The value of the next token if it exists. Null if there is no more
     * result.</p>
     */
    inline ListEntitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The value of the next token if it exists. Null if there is no more
     * result.</p>
     */
    inline ListEntitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The value of the next token if it exists. Null if there is no more
     * result.</p>
     */
    inline ListEntitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EntitySummary> m_entitySummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
