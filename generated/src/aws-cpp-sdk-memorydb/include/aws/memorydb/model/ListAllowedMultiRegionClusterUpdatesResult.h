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
  class ListAllowedMultiRegionClusterUpdatesResult
  {
  public:
    AWS_MEMORYDB_API ListAllowedMultiRegionClusterUpdatesResult();
    AWS_MEMORYDB_API ListAllowedMultiRegionClusterUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API ListAllowedMultiRegionClusterUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The node types that the cluster can be scaled up to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleUpNodeTypes() const{ return m_scaleUpNodeTypes; }
    inline void SetScaleUpNodeTypes(const Aws::Vector<Aws::String>& value) { m_scaleUpNodeTypes = value; }
    inline void SetScaleUpNodeTypes(Aws::Vector<Aws::String>&& value) { m_scaleUpNodeTypes = std::move(value); }
    inline ListAllowedMultiRegionClusterUpdatesResult& WithScaleUpNodeTypes(const Aws::Vector<Aws::String>& value) { SetScaleUpNodeTypes(value); return *this;}
    inline ListAllowedMultiRegionClusterUpdatesResult& WithScaleUpNodeTypes(Aws::Vector<Aws::String>&& value) { SetScaleUpNodeTypes(std::move(value)); return *this;}
    inline ListAllowedMultiRegionClusterUpdatesResult& AddScaleUpNodeTypes(const Aws::String& value) { m_scaleUpNodeTypes.push_back(value); return *this; }
    inline ListAllowedMultiRegionClusterUpdatesResult& AddScaleUpNodeTypes(Aws::String&& value) { m_scaleUpNodeTypes.push_back(std::move(value)); return *this; }
    inline ListAllowedMultiRegionClusterUpdatesResult& AddScaleUpNodeTypes(const char* value) { m_scaleUpNodeTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The node types that the cluster can be scaled down to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleDownNodeTypes() const{ return m_scaleDownNodeTypes; }
    inline void SetScaleDownNodeTypes(const Aws::Vector<Aws::String>& value) { m_scaleDownNodeTypes = value; }
    inline void SetScaleDownNodeTypes(Aws::Vector<Aws::String>&& value) { m_scaleDownNodeTypes = std::move(value); }
    inline ListAllowedMultiRegionClusterUpdatesResult& WithScaleDownNodeTypes(const Aws::Vector<Aws::String>& value) { SetScaleDownNodeTypes(value); return *this;}
    inline ListAllowedMultiRegionClusterUpdatesResult& WithScaleDownNodeTypes(Aws::Vector<Aws::String>&& value) { SetScaleDownNodeTypes(std::move(value)); return *this;}
    inline ListAllowedMultiRegionClusterUpdatesResult& AddScaleDownNodeTypes(const Aws::String& value) { m_scaleDownNodeTypes.push_back(value); return *this; }
    inline ListAllowedMultiRegionClusterUpdatesResult& AddScaleDownNodeTypes(Aws::String&& value) { m_scaleDownNodeTypes.push_back(std::move(value)); return *this; }
    inline ListAllowedMultiRegionClusterUpdatesResult& AddScaleDownNodeTypes(const char* value) { m_scaleDownNodeTypes.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAllowedMultiRegionClusterUpdatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAllowedMultiRegionClusterUpdatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAllowedMultiRegionClusterUpdatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_scaleUpNodeTypes;

    Aws::Vector<Aws::String> m_scaleDownNodeTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
