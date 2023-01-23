/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult();
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline const Aws::Vector<LoadBasedAutoScalingConfiguration>& GetLoadBasedAutoScalingConfigurations() const{ return m_loadBasedAutoScalingConfigurations; }

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline void SetLoadBasedAutoScalingConfigurations(const Aws::Vector<LoadBasedAutoScalingConfiguration>& value) { m_loadBasedAutoScalingConfigurations = value; }

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline void SetLoadBasedAutoScalingConfigurations(Aws::Vector<LoadBasedAutoScalingConfiguration>&& value) { m_loadBasedAutoScalingConfigurations = std::move(value); }

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline DescribeLoadBasedAutoScalingResult& WithLoadBasedAutoScalingConfigurations(const Aws::Vector<LoadBasedAutoScalingConfiguration>& value) { SetLoadBasedAutoScalingConfigurations(value); return *this;}

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline DescribeLoadBasedAutoScalingResult& WithLoadBasedAutoScalingConfigurations(Aws::Vector<LoadBasedAutoScalingConfiguration>&& value) { SetLoadBasedAutoScalingConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline DescribeLoadBasedAutoScalingResult& AddLoadBasedAutoScalingConfigurations(const LoadBasedAutoScalingConfiguration& value) { m_loadBasedAutoScalingConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline DescribeLoadBasedAutoScalingResult& AddLoadBasedAutoScalingConfigurations(LoadBasedAutoScalingConfiguration&& value) { m_loadBasedAutoScalingConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LoadBasedAutoScalingConfiguration> m_loadBasedAutoScalingConfigurations;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
