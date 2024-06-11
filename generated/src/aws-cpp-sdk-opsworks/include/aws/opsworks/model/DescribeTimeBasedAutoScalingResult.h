﻿/**
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
    AWS_OPSWORKS_API DescribeTimeBasedAutoScalingResult();
    AWS_OPSWORKS_API DescribeTimeBasedAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeTimeBasedAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline const Aws::Vector<TimeBasedAutoScalingConfiguration>& GetTimeBasedAutoScalingConfigurations() const{ return m_timeBasedAutoScalingConfigurations; }
    inline void SetTimeBasedAutoScalingConfigurations(const Aws::Vector<TimeBasedAutoScalingConfiguration>& value) { m_timeBasedAutoScalingConfigurations = value; }
    inline void SetTimeBasedAutoScalingConfigurations(Aws::Vector<TimeBasedAutoScalingConfiguration>&& value) { m_timeBasedAutoScalingConfigurations = std::move(value); }
    inline DescribeTimeBasedAutoScalingResult& WithTimeBasedAutoScalingConfigurations(const Aws::Vector<TimeBasedAutoScalingConfiguration>& value) { SetTimeBasedAutoScalingConfigurations(value); return *this;}
    inline DescribeTimeBasedAutoScalingResult& WithTimeBasedAutoScalingConfigurations(Aws::Vector<TimeBasedAutoScalingConfiguration>&& value) { SetTimeBasedAutoScalingConfigurations(std::move(value)); return *this;}
    inline DescribeTimeBasedAutoScalingResult& AddTimeBasedAutoScalingConfigurations(const TimeBasedAutoScalingConfiguration& value) { m_timeBasedAutoScalingConfigurations.push_back(value); return *this; }
    inline DescribeTimeBasedAutoScalingResult& AddTimeBasedAutoScalingConfigurations(TimeBasedAutoScalingConfiguration&& value) { m_timeBasedAutoScalingConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTimeBasedAutoScalingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTimeBasedAutoScalingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTimeBasedAutoScalingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TimeBasedAutoScalingConfiguration> m_timeBasedAutoScalingConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
