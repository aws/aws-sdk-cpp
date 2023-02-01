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
  class UpdateControlPanelResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateControlPanelResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateControlPanelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateControlPanelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The control panel to update.</p>
     */
    inline const ControlPanel& GetControlPanel() const{ return m_controlPanel; }

    /**
     * <p>The control panel to update.</p>
     */
    inline void SetControlPanel(const ControlPanel& value) { m_controlPanel = value; }

    /**
     * <p>The control panel to update.</p>
     */
    inline void SetControlPanel(ControlPanel&& value) { m_controlPanel = std::move(value); }

    /**
     * <p>The control panel to update.</p>
     */
    inline UpdateControlPanelResult& WithControlPanel(const ControlPanel& value) { SetControlPanel(value); return *this;}

    /**
     * <p>The control panel to update.</p>
     */
    inline UpdateControlPanelResult& WithControlPanel(ControlPanel&& value) { SetControlPanel(std::move(value)); return *this;}

  private:

    ControlPanel m_controlPanel;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
