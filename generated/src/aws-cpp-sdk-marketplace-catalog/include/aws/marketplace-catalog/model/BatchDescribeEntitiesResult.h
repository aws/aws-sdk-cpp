/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/EntityDetail.h>
#include <aws/marketplace-catalog/model/BatchDescribeErrorDetail.h>
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
  class BatchDescribeEntitiesResult
  {
  public:
    AWS_MARKETPLACECATALOG_API BatchDescribeEntitiesResult();
    AWS_MARKETPLACECATALOG_API BatchDescribeEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API BatchDescribeEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about each entity.</p>
     */
    inline const Aws::Map<Aws::String, EntityDetail>& GetEntityDetails() const{ return m_entityDetails; }

    /**
     * <p>Details about each entity.</p>
     */
    inline void SetEntityDetails(const Aws::Map<Aws::String, EntityDetail>& value) { m_entityDetails = value; }

    /**
     * <p>Details about each entity.</p>
     */
    inline void SetEntityDetails(Aws::Map<Aws::String, EntityDetail>&& value) { m_entityDetails = std::move(value); }

    /**
     * <p>Details about each entity.</p>
     */
    inline BatchDescribeEntitiesResult& WithEntityDetails(const Aws::Map<Aws::String, EntityDetail>& value) { SetEntityDetails(value); return *this;}

    /**
     * <p>Details about each entity.</p>
     */
    inline BatchDescribeEntitiesResult& WithEntityDetails(Aws::Map<Aws::String, EntityDetail>&& value) { SetEntityDetails(std::move(value)); return *this;}

    /**
     * <p>Details about each entity.</p>
     */
    inline BatchDescribeEntitiesResult& AddEntityDetails(const Aws::String& key, const EntityDetail& value) { m_entityDetails.emplace(key, value); return *this; }

    /**
     * <p>Details about each entity.</p>
     */
    inline BatchDescribeEntitiesResult& AddEntityDetails(Aws::String&& key, const EntityDetail& value) { m_entityDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about each entity.</p>
     */
    inline BatchDescribeEntitiesResult& AddEntityDetails(const Aws::String& key, EntityDetail&& value) { m_entityDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details about each entity.</p>
     */
    inline BatchDescribeEntitiesResult& AddEntityDetails(Aws::String&& key, EntityDetail&& value) { m_entityDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Details about each entity.</p>
     */
    inline BatchDescribeEntitiesResult& AddEntityDetails(const char* key, EntityDetail&& value) { m_entityDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details about each entity.</p>
     */
    inline BatchDescribeEntitiesResult& AddEntityDetails(const char* key, const EntityDetail& value) { m_entityDetails.emplace(key, value); return *this; }


    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline const Aws::Map<Aws::String, BatchDescribeErrorDetail>& GetErrors() const{ return m_errors; }

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline void SetErrors(const Aws::Map<Aws::String, BatchDescribeErrorDetail>& value) { m_errors = value; }

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline void SetErrors(Aws::Map<Aws::String, BatchDescribeErrorDetail>&& value) { m_errors = std::move(value); }

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline BatchDescribeEntitiesResult& WithErrors(const Aws::Map<Aws::String, BatchDescribeErrorDetail>& value) { SetErrors(value); return *this;}

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline BatchDescribeEntitiesResult& WithErrors(Aws::Map<Aws::String, BatchDescribeErrorDetail>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline BatchDescribeEntitiesResult& AddErrors(const Aws::String& key, const BatchDescribeErrorDetail& value) { m_errors.emplace(key, value); return *this; }

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline BatchDescribeEntitiesResult& AddErrors(Aws::String&& key, const BatchDescribeErrorDetail& value) { m_errors.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline BatchDescribeEntitiesResult& AddErrors(const Aws::String& key, BatchDescribeErrorDetail&& value) { m_errors.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline BatchDescribeEntitiesResult& AddErrors(Aws::String&& key, BatchDescribeErrorDetail&& value) { m_errors.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline BatchDescribeEntitiesResult& AddErrors(const char* key, BatchDescribeErrorDetail&& value) { m_errors.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline BatchDescribeEntitiesResult& AddErrors(const char* key, const BatchDescribeErrorDetail& value) { m_errors.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDescribeEntitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDescribeEntitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDescribeEntitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, EntityDetail> m_entityDetails;

    Aws::Map<Aws::String, BatchDescribeErrorDetail> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
