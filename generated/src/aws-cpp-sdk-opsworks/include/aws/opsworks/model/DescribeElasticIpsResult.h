/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/ElasticIp.h>
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
   * <p>Contains the response to a <code>DescribeElasticIps</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticIpsResult">AWS
   * API Reference</a></p>
   */
  class DescribeElasticIpsResult
  {
  public:
    AWS_OPSWORKS_API DescribeElasticIpsResult() = default;
    AWS_OPSWORKS_API DescribeElasticIpsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeElasticIpsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An <code>ElasticIps</code> object that describes the specified Elastic IP
     * addresses.</p>
     */
    inline const Aws::Vector<ElasticIp>& GetElasticIps() const { return m_elasticIps; }
    template<typename ElasticIpsT = Aws::Vector<ElasticIp>>
    void SetElasticIps(ElasticIpsT&& value) { m_elasticIpsHasBeenSet = true; m_elasticIps = std::forward<ElasticIpsT>(value); }
    template<typename ElasticIpsT = Aws::Vector<ElasticIp>>
    DescribeElasticIpsResult& WithElasticIps(ElasticIpsT&& value) { SetElasticIps(std::forward<ElasticIpsT>(value)); return *this;}
    template<typename ElasticIpsT = ElasticIp>
    DescribeElasticIpsResult& AddElasticIps(ElasticIpsT&& value) { m_elasticIpsHasBeenSet = true; m_elasticIps.emplace_back(std::forward<ElasticIpsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeElasticIpsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ElasticIp> m_elasticIps;
    bool m_elasticIpsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
