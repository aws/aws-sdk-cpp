/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListControlPanelsResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListControlPanelsResult() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListControlPanelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListControlPanelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result of a successful ListControlPanel request.</p>
     */
    inline const Aws::Vector<ControlPanel>& GetControlPanels() const { return m_controlPanels; }
    template<typename ControlPanelsT = Aws::Vector<ControlPanel>>
    void SetControlPanels(ControlPanelsT&& value) { m_controlPanelsHasBeenSet = true; m_controlPanels = std::forward<ControlPanelsT>(value); }
    template<typename ControlPanelsT = Aws::Vector<ControlPanel>>
    ListControlPanelsResult& WithControlPanels(ControlPanelsT&& value) { SetControlPanels(std::forward<ControlPanelsT>(value)); return *this;}
    template<typename ControlPanelsT = ControlPanel>
    ListControlPanelsResult& AddControlPanels(ControlPanelsT&& value) { m_controlPanelsHasBeenSet = true; m_controlPanels.emplace_back(std::forward<ControlPanelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListControlPanelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListControlPanelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ControlPanel> m_controlPanels;
    bool m_controlPanelsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
