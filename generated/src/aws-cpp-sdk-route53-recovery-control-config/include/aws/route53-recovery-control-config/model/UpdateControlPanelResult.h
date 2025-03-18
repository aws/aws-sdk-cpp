/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/ControlPanel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateControlPanelResult() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateControlPanelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateControlPanelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The control panel to update.</p>
     */
    inline const ControlPanel& GetControlPanel() const { return m_controlPanel; }
    template<typename ControlPanelT = ControlPanel>
    void SetControlPanel(ControlPanelT&& value) { m_controlPanelHasBeenSet = true; m_controlPanel = std::forward<ControlPanelT>(value); }
    template<typename ControlPanelT = ControlPanel>
    UpdateControlPanelResult& WithControlPanel(ControlPanelT&& value) { SetControlPanel(std::forward<ControlPanelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateControlPanelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ControlPanel m_controlPanel;
    bool m_controlPanelHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
