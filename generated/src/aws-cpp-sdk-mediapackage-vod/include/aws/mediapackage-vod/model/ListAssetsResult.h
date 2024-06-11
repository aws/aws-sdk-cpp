﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/AssetShallow.h>
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
namespace MediaPackageVod
{
namespace Model
{
  class ListAssetsResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API ListAssetsResult();
    AWS_MEDIAPACKAGEVOD_API ListAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API ListAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of MediaPackage VOD Asset resources.
     */
    inline const Aws::Vector<AssetShallow>& GetAssets() const{ return m_assets; }
    inline void SetAssets(const Aws::Vector<AssetShallow>& value) { m_assets = value; }
    inline void SetAssets(Aws::Vector<AssetShallow>&& value) { m_assets = std::move(value); }
    inline ListAssetsResult& WithAssets(const Aws::Vector<AssetShallow>& value) { SetAssets(value); return *this;}
    inline ListAssetsResult& WithAssets(Aws::Vector<AssetShallow>&& value) { SetAssets(std::move(value)); return *this;}
    inline ListAssetsResult& AddAssets(const AssetShallow& value) { m_assets.push_back(value); return *this; }
    inline ListAssetsResult& AddAssets(AssetShallow&& value) { m_assets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetShallow> m_assets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
