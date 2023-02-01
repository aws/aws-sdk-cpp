/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/model/Cluster.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class ListClustersResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListClustersResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of the clusters in an account.</p>
     */
    inline const Aws::Vector<Cluster>& GetClusters() const{ return m_clusters; }

    /**
     * <p>An array of the clusters in an account.</p>
     */
    inline void SetClusters(const Aws::Vector<Cluster>& value) { m_clusters = value; }

    /**
     * <p>An array of the clusters in an account.</p>
     */
    inline void SetClusters(Aws::Vector<Cluster>&& value) { m_clusters = std::move(value); }

    /**
     * <p>An array of the clusters in an account.</p>
     */
    inline ListClustersResult& WithClusters(const Aws::Vector<Cluster>& value) { SetClusters(value); return *this;}

    /**
     * <p>An array of the clusters in an account.</p>
     */
    inline ListClustersResult& WithClusters(Aws::Vector<Cluster>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p>An array of the clusters in an account.</p>
     */
    inline ListClustersResult& AddClusters(const Cluster& value) { m_clusters.push_back(value); return *this; }

    /**
     * <p>An array of the clusters in an account.</p>
     */
    inline ListClustersResult& AddClusters(Cluster&& value) { m_clusters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Cluster> m_clusters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
