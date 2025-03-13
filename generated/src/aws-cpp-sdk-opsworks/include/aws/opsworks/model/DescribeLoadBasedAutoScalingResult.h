/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/LoadBasedAutoScalingConfiguration.h>
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
   * <p>Contains the response to a <code>DescribeLoadBasedAutoScaling</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLoadBasedAutoScalingResult">AWS
   * API Reference</a></p>
   */
  class DescribeLoadBasedAutoScalingResult
  {
  public:
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult() = default;
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline const Aws::Vector<LoadBasedAutoScalingConfiguration>& GetLoadBasedAutoScalingConfigurations() const { return m_loadBasedAutoScalingConfigurations; }
    template<typename LoadBasedAutoScalingConfigurationsT = Aws::Vector<LoadBasedAutoScalingConfiguration>>
    void SetLoadBasedAutoScalingConfigurations(LoadBasedAutoScalingConfigurationsT&& value) { m_loadBasedAutoScalingConfigurationsHasBeenSet = true; m_loadBasedAutoScalingConfigurations = std::forward<LoadBasedAutoScalingConfigurationsT>(value); }
    template<typename LoadBasedAutoScalingConfigurationsT = Aws::Vector<LoadBasedAutoScalingConfiguration>>
    DescribeLoadBasedAutoScalingResult& WithLoadBasedAutoScalingConfigurations(LoadBasedAutoScalingConfigurationsT&& value) { SetLoadBasedAutoScalingConfigurations(std::forward<LoadBasedAutoScalingConfigurationsT>(value)); return *this;}
    template<typename LoadBasedAutoScalingConfigurationsT = LoadBasedAutoScalingConfiguration>
    DescribeLoadBasedAutoScalingResult& AddLoadBasedAutoScalingConfigurations(LoadBasedAutoScalingConfigurationsT&& value) { m_loadBasedAutoScalingConfigurationsHasBeenSet = true; m_loadBasedAutoScalingConfigurations.emplace_back(std::forward<LoadBasedAutoScalingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLoadBasedAutoScalingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LoadBasedAutoScalingConfiguration> m_loadBasedAutoScalingConfigurations;
    bool m_loadBasedAutoScalingConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
