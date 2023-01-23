/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/ControlPanel.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class DescribeControlPanelResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API DescribeControlPanelResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API DescribeControlPanelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API DescribeControlPanelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the control panel.</p>
     */
    inline const ControlPanel& GetControlPanel() const{ return m_controlPanel; }

    /**
     * <p>Information about the control panel.</p>
     */
    inline void SetControlPanel(const ControlPanel& value) { m_controlPanel = value; }

    /**
     * <p>Information about the control panel.</p>
     */
    inline void SetControlPanel(ControlPanel&& value) { m_controlPanel = std::move(value); }

    /**
     * <p>Information about the control panel.</p>
     */
    inline DescribeControlPanelResult& WithControlPanel(const ControlPanel& value) { SetControlPanel(value); return *this;}

    /**
     * <p>Information about the control panel.</p>
     */
    inline DescribeControlPanelResult& WithControlPanel(ControlPanel&& value) { SetControlPanel(std::move(value)); return *this;}

  private:

    ControlPanel m_controlPanel;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
