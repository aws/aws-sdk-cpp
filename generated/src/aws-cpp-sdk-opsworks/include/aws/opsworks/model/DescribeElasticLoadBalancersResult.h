/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/ElasticLoadBalancer.h>
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
   * <p>Contains the response to a <code>DescribeElasticLoadBalancers</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticLoadBalancersResult">AWS
   * API Reference</a></p>
   */
  class DescribeElasticLoadBalancersResult
  {
  public:
    AWS_OPSWORKS_API DescribeElasticLoadBalancersResult() = default;
    AWS_OPSWORKS_API DescribeElasticLoadBalancersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeElasticLoadBalancersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ElasticLoadBalancer</code> objects that describe the
     * specified Elastic Load Balancing instances.</p>
     */
    inline const Aws::Vector<ElasticLoadBalancer>& GetElasticLoadBalancers() const { return m_elasticLoadBalancers; }
    template<typename ElasticLoadBalancersT = Aws::Vector<ElasticLoadBalancer>>
    void SetElasticLoadBalancers(ElasticLoadBalancersT&& value) { m_elasticLoadBalancersHasBeenSet = true; m_elasticLoadBalancers = std::forward<ElasticLoadBalancersT>(value); }
    template<typename ElasticLoadBalancersT = Aws::Vector<ElasticLoadBalancer>>
    DescribeElasticLoadBalancersResult& WithElasticLoadBalancers(ElasticLoadBalancersT&& value) { SetElasticLoadBalancers(std::forward<ElasticLoadBalancersT>(value)); return *this;}
    template<typename ElasticLoadBalancersT = ElasticLoadBalancer>
    DescribeElasticLoadBalancersResult& AddElasticLoadBalancers(ElasticLoadBalancersT&& value) { m_elasticLoadBalancersHasBeenSet = true; m_elasticLoadBalancers.emplace_back(std::forward<ElasticLoadBalancersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeElasticLoadBalancersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ElasticLoadBalancer> m_elasticLoadBalancers;
    bool m_elasticLoadBalancersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
