/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterNodeDetails.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeClusterNodeResult
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterNodeResult();
    AWS_SAGEMAKER_API DescribeClusterNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeClusterNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the instance.</p>
     */
    inline const ClusterNodeDetails& GetNodeDetails() const{ return m_nodeDetails; }

    /**
     * <p>The details of the instance.</p>
     */
    inline void SetNodeDetails(const ClusterNodeDetails& value) { m_nodeDetails = value; }

    /**
     * <p>The details of the instance.</p>
     */
    inline void SetNodeDetails(ClusterNodeDetails&& value) { m_nodeDetails = std::move(value); }

    /**
     * <p>The details of the instance.</p>
     */
    inline DescribeClusterNodeResult& WithNodeDetails(const ClusterNodeDetails& value) { SetNodeDetails(value); return *this;}

    /**
     * <p>The details of the instance.</p>
     */
    inline DescribeClusterNodeResult& WithNodeDetails(ClusterNodeDetails&& value) { SetNodeDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeClusterNodeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeClusterNodeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeClusterNodeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ClusterNodeDetails m_nodeDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
