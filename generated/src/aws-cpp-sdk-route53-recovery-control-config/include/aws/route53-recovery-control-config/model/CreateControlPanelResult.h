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
  class CreateControlPanelResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateControlPanelResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateControlPanelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateControlPanelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a control panel.</p>
     */
    inline const ControlPanel& GetControlPanel() const{ return m_controlPanel; }

    /**
     * <p>Information about a control panel.</p>
     */
    inline void SetControlPanel(const ControlPanel& value) { m_controlPanel = value; }

    /**
     * <p>Information about a control panel.</p>
     */
    inline void SetControlPanel(ControlPanel&& value) { m_controlPanel = std::move(value); }

    /**
     * <p>Information about a control panel.</p>
     */
    inline CreateControlPanelResult& WithControlPanel(const ControlPanel& value) { SetControlPanel(value); return *this;}

    /**
     * <p>Information about a control panel.</p>
     */
    inline CreateControlPanelResult& WithControlPanel(ControlPanel&& value) { SetControlPanel(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateControlPanelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateControlPanelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateControlPanelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ControlPanel m_controlPanel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
