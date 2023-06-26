/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventoryResultEntity.h>
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
namespace SSM
{
namespace Model
{
  class GetInventoryResult
  {
  public:
    AWS_SSM_API GetInventoryResult();
    AWS_SSM_API GetInventoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetInventoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Collection of inventory entities such as a collection of managed node
     * inventory. </p>
     */
    inline const Aws::Vector<InventoryResultEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>Collection of inventory entities such as a collection of managed node
     * inventory. </p>
     */
    inline void SetEntities(const Aws::Vector<InventoryResultEntity>& value) { m_entities = value; }

    /**
     * <p>Collection of inventory entities such as a collection of managed node
     * inventory. </p>
     */
    inline void SetEntities(Aws::Vector<InventoryResultEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p>Collection of inventory entities such as a collection of managed node
     * inventory. </p>
     */
    inline GetInventoryResult& WithEntities(const Aws::Vector<InventoryResultEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>Collection of inventory entities such as a collection of managed node
     * inventory. </p>
     */
    inline GetInventoryResult& WithEntities(Aws::Vector<InventoryResultEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>Collection of inventory entities such as a collection of managed node
     * inventory. </p>
     */
    inline GetInventoryResult& AddEntities(const InventoryResultEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>Collection of inventory entities such as a collection of managed node
     * inventory. </p>
     */
    inline GetInventoryResult& AddEntities(InventoryResultEntity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetInventoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetInventoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetInventoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInventoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInventoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInventoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<InventoryResultEntity> m_entities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
