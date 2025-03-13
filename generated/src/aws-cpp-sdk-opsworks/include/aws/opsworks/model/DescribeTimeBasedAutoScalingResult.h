/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/TimeBasedAutoScalingConfiguration.h>
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
   * <p>Contains the response to a <code>DescribeTimeBasedAutoScaling</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeTimeBasedAutoScalingResult">AWS
   * API Reference</a></p>
   */
  class DescribeTimeBasedAutoScalingResult
  {
  public:
    AWS_OPSWORKS_API DescribeTimeBasedAutoScalingResult() = default;
    AWS_OPSWORKS_API DescribeTimeBasedAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeTimeBasedAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline const Aws::Vector<TimeBasedAutoScalingConfiguration>& GetTimeBasedAutoScalingConfigurations() const { return m_timeBasedAutoScalingConfigurations; }
    template<typename TimeBasedAutoScalingConfigurationsT = Aws::Vector<TimeBasedAutoScalingConfiguration>>
    void SetTimeBasedAutoScalingConfigurations(TimeBasedAutoScalingConfigurationsT&& value) { m_timeBasedAutoScalingConfigurationsHasBeenSet = true; m_timeBasedAutoScalingConfigurations = std::forward<TimeBasedAutoScalingConfigurationsT>(value); }
    template<typename TimeBasedAutoScalingConfigurationsT = Aws::Vector<TimeBasedAutoScalingConfiguration>>
    DescribeTimeBasedAutoScalingResult& WithTimeBasedAutoScalingConfigurations(TimeBasedAutoScalingConfigurationsT&& value) { SetTimeBasedAutoScalingConfigurations(std::forward<TimeBasedAutoScalingConfigurationsT>(value)); return *this;}
    template<typename TimeBasedAutoScalingConfigurationsT = TimeBasedAutoScalingConfiguration>
    DescribeTimeBasedAutoScalingResult& AddTimeBasedAutoScalingConfigurations(TimeBasedAutoScalingConfigurationsT&& value) { m_timeBasedAutoScalingConfigurationsHasBeenSet = true; m_timeBasedAutoScalingConfigurations.emplace_back(std::forward<TimeBasedAutoScalingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTimeBasedAutoScalingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TimeBasedAutoScalingConfiguration> m_timeBasedAutoScalingConfigurations;
    bool m_timeBasedAutoScalingConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
