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
    AWS_OUTPOSTS_API ListAssetInstancesResult() = default;
    AWS_OUTPOSTS_API ListAssetInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListAssetInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of instances owned by all accounts on the Outpost. Does not include
     * Amazon EBS or Amazon S3 instances.</p>
     */
    inline const Aws::Vector<AssetInstance>& GetAssetInstances() const { return m_assetInstances; }
    template<typename AssetInstancesT = Aws::Vector<AssetInstance>>
    void SetAssetInstances(AssetInstancesT&& value) { m_assetInstancesHasBeenSet = true; m_assetInstances = std::forward<AssetInstancesT>(value); }
    template<typename AssetInstancesT = Aws::Vector<AssetInstance>>
    ListAssetInstancesResult& WithAssetInstances(AssetInstancesT&& value) { SetAssetInstances(std::forward<AssetInstancesT>(value)); return *this;}
    template<typename AssetInstancesT = AssetInstance>
    ListAssetInstancesResult& AddAssetInstances(AssetInstancesT&& value) { m_assetInstancesHasBeenSet = true; m_assetInstances.emplace_back(std::forward<AssetInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssetInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssetInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetInstance> m_assetInstances;
    bool m_assetInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
