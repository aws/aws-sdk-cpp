/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_OPSWORKS_API DescribeRdsDbInstancesResult();
    AWS_OPSWORKS_API DescribeRdsDbInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeRdsDbInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An a array of <code>RdsDbInstance</code> objects that describe the
     * instances.</p>
     */
    inline const Aws::Vector<RdsDbInstance>& GetRdsDbInstances() const{ return m_rdsDbInstances; }

    /**
     * <p>An a array of <code>RdsDbInstance</code> objects that describe the
     * instances.</p>
     */
    inline void SetRdsDbInstances(const Aws::Vector<RdsDbInstance>& value) { m_rdsDbInstances = value; }

    /**
     * <p>An a array of <code>RdsDbInstance</code> objects that describe the
     * instances.</p>
     */
    inline void SetRdsDbInstances(Aws::Vector<RdsDbInstance>&& value) { m_rdsDbInstances = std::move(value); }

    /**
     * <p>An a array of <code>RdsDbInstance</code> objects that describe the
     * instances.</p>
     */
    inline DescribeRdsDbInstancesResult& WithRdsDbInstances(const Aws::Vector<RdsDbInstance>& value) { SetRdsDbInstances(value); return *this;}

    /**
     * <p>An a array of <code>RdsDbInstance</code> objects that describe the
     * instances.</p>
     */
    inline DescribeRdsDbInstancesResult& WithRdsDbInstances(Aws::Vector<RdsDbInstance>&& value) { SetRdsDbInstances(std::move(value)); return *this;}

    /**
     * <p>An a array of <code>RdsDbInstance</code> objects that describe the
     * instances.</p>
     */
    inline DescribeRdsDbInstancesResult& AddRdsDbInstances(const RdsDbInstance& value) { m_rdsDbInstances.push_back(value); return *this; }

    /**
     * <p>An a array of <code>RdsDbInstance</code> objects that describe the
     * instances.</p>
     */
    inline DescribeRdsDbInstancesResult& AddRdsDbInstances(RdsDbInstance&& value) { m_rdsDbInstances.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RdsDbInstance> m_rdsDbInstances;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
