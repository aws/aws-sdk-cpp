/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MemoryDB
{
namespace Model
{
  class ListAllowedNodeTypeUpdatesResult
  {
  public:
    AWS_MEMORYDB_API ListAllowedNodeTypeUpdatesResult();
    AWS_MEMORYDB_API ListAllowedNodeTypeUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API ListAllowedNodeTypeUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleUpNodeTypes() const{ return m_scaleUpNodeTypes; }

    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline void SetScaleUpNodeTypes(const Aws::Vector<Aws::String>& value) { m_scaleUpNodeTypes = value; }

    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline void SetScaleUpNodeTypes(Aws::Vector<Aws::String>&& value) { m_scaleUpNodeTypes = std::move(value); }

    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& WithScaleUpNodeTypes(const Aws::Vector<Aws::String>& value) { SetScaleUpNodeTypes(value); return *this;}

    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& WithScaleUpNodeTypes(Aws::Vector<Aws::String>&& value) { SetScaleUpNodeTypes(std::move(value)); return *this;}

    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& AddScaleUpNodeTypes(const Aws::String& value) { m_scaleUpNodeTypes.push_back(value); return *this; }

    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& AddScaleUpNodeTypes(Aws::String&& value) { m_scaleUpNodeTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& AddScaleUpNodeTypes(const char* value) { m_scaleUpNodeTypes.push_back(value); return *this; }


    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleDownNodeTypes() const{ return m_scaleDownNodeTypes; }

    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline void SetScaleDownNodeTypes(const Aws::Vector<Aws::String>& value) { m_scaleDownNodeTypes = value; }

    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline void SetScaleDownNodeTypes(Aws::Vector<Aws::String>&& value) { m_scaleDownNodeTypes = std::move(value); }

    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& WithScaleDownNodeTypes(const Aws::Vector<Aws::String>& value) { SetScaleDownNodeTypes(value); return *this;}

    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& WithScaleDownNodeTypes(Aws::Vector<Aws::String>&& value) { SetScaleDownNodeTypes(std::move(value)); return *this;}

    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& AddScaleDownNodeTypes(const Aws::String& value) { m_scaleDownNodeTypes.push_back(value); return *this; }

    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& AddScaleDownNodeTypes(Aws::String&& value) { m_scaleDownNodeTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline ListAllowedNodeTypeUpdatesResult& AddScaleDownNodeTypes(const char* value) { m_scaleDownNodeTypes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_scaleUpNodeTypes;

    Aws::Vector<Aws::String> m_scaleDownNodeTypes;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
