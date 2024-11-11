/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AssetInstance.h>
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
namespace Outposts
{
namespace Model
{
  class ListAssetInstancesResult
  {
  public:
    AWS_OUTPOSTS_API ListAssetInstancesResult();
    AWS_OUTPOSTS_API ListAssetInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListAssetInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of instances owned by all accounts on the Outpost. Does not include
     * Amazon EBS or Amazon S3 instances.</p>
     */
    inline const Aws::Vector<AssetInstance>& GetAssetInstances() const{ return m_assetInstances; }
    inline void SetAssetInstances(const Aws::Vector<AssetInstance>& value) { m_assetInstances = value; }
    inline void SetAssetInstances(Aws::Vector<AssetInstance>&& value) { m_assetInstances = std::move(value); }
    inline ListAssetInstancesResult& WithAssetInstances(const Aws::Vector<AssetInstance>& value) { SetAssetInstances(value); return *this;}
    inline ListAssetInstancesResult& WithAssetInstances(Aws::Vector<AssetInstance>&& value) { SetAssetInstances(std::move(value)); return *this;}
    inline ListAssetInstancesResult& AddAssetInstances(const AssetInstance& value) { m_assetInstances.push_back(value); return *this; }
    inline ListAssetInstancesResult& AddAssetInstances(AssetInstance&& value) { m_assetInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssetInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssetInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssetInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssetInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetInstance> m_assetInstances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
