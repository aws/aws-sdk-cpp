/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/Cluster.h>
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
namespace PCS
{
namespace Model
{
  class CreateClusterResult
  {
  public:
    AWS_PCS_API CreateClusterResult();
    AWS_PCS_API CreateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API CreateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cluster resource.</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }
    inline void SetCluster(const Cluster& value) { m_cluster = value; }
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }
    inline CreateClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}
    inline CreateClusterResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Cluster m_cluster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
