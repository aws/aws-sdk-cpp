/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/RdsDbInstance.h>
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
   * <p>Contains the response to a <code>DescribeRdsDbInstances</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRdsDbInstancesResult">AWS
   * API Reference</a></p>
   */
  class DescribeRdsDbInstancesResult
  {
  public:
    AWS_OPSWORKS_API DescribeRdsDbInstancesResult() = default;
    AWS_OPSWORKS_API DescribeRdsDbInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeRdsDbInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An a array of <code>RdsDbInstance</code> objects that describe the
     * instances.</p>
     */
    inline const Aws::Vector<RdsDbInstance>& GetRdsDbInstances() const { return m_rdsDbInstances; }
    template<typename RdsDbInstancesT = Aws::Vector<RdsDbInstance>>
    void SetRdsDbInstances(RdsDbInstancesT&& value) { m_rdsDbInstancesHasBeenSet = true; m_rdsDbInstances = std::forward<RdsDbInstancesT>(value); }
    template<typename RdsDbInstancesT = Aws::Vector<RdsDbInstance>>
    DescribeRdsDbInstancesResult& WithRdsDbInstances(RdsDbInstancesT&& value) { SetRdsDbInstances(std::forward<RdsDbInstancesT>(value)); return *this;}
    template<typename RdsDbInstancesT = RdsDbInstance>
    DescribeRdsDbInstancesResult& AddRdsDbInstances(RdsDbInstancesT&& value) { m_rdsDbInstancesHasBeenSet = true; m_rdsDbInstances.emplace_back(std::forward<RdsDbInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRdsDbInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RdsDbInstance> m_rdsDbInstances;
    bool m_rdsDbInstancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
