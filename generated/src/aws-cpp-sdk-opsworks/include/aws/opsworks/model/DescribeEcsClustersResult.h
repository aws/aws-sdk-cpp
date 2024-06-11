﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/EcsCluster.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeEcsClusters</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeEcsClustersResult">AWS
   * API Reference</a></p>
   */
  class DescribeEcsClustersResult
  {
  public:
    AWS_OPSWORKS_API DescribeEcsClustersResult();
    AWS_OPSWORKS_API DescribeEcsClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeEcsClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline const Aws::Vector<EcsCluster>& GetEcsClusters() const{ return m_ecsClusters; }
    inline void SetEcsClusters(const Aws::Vector<EcsCluster>& value) { m_ecsClusters = value; }
    inline void SetEcsClusters(Aws::Vector<EcsCluster>&& value) { m_ecsClusters = std::move(value); }
    inline DescribeEcsClustersResult& WithEcsClusters(const Aws::Vector<EcsCluster>& value) { SetEcsClusters(value); return *this;}
    inline DescribeEcsClustersResult& WithEcsClusters(Aws::Vector<EcsCluster>&& value) { SetEcsClusters(std::move(value)); return *this;}
    inline DescribeEcsClustersResult& AddEcsClusters(const EcsCluster& value) { m_ecsClusters.push_back(value); return *this; }
    inline DescribeEcsClustersResult& AddEcsClusters(EcsCluster&& value) { m_ecsClusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeEcsClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeEcsClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeEcsClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEcsClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEcsClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEcsClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EcsCluster> m_ecsClusters;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
