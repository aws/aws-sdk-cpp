﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/PortProbeDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provided if <code>ActionType</code> is <code>PORT_PROBE</code>. It provides
   * details about the attempted port probe that was detected.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/PortProbeAction">AWS
   * API Reference</a></p>
   */
  class PortProbeAction
  {
  public:
    AWS_SECURITYHUB_API PortProbeAction() = default;
    AWS_SECURITYHUB_API PortProbeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API PortProbeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the ports affected by the port probe.</p>
     */
    inline const Aws::Vector<PortProbeDetail>& GetPortProbeDetails() const { return m_portProbeDetails; }
    inline bool PortProbeDetailsHasBeenSet() const { return m_portProbeDetailsHasBeenSet; }
    template<typename PortProbeDetailsT = Aws::Vector<PortProbeDetail>>
    void SetPortProbeDetails(PortProbeDetailsT&& value) { m_portProbeDetailsHasBeenSet = true; m_portProbeDetails = std::forward<PortProbeDetailsT>(value); }
    template<typename PortProbeDetailsT = Aws::Vector<PortProbeDetail>>
    PortProbeAction& WithPortProbeDetails(PortProbeDetailsT&& value) { SetPortProbeDetails(std::forward<PortProbeDetailsT>(value)); return *this;}
    template<typename PortProbeDetailsT = PortProbeDetail>
    PortProbeAction& AddPortProbeDetails(PortProbeDetailsT&& value) { m_portProbeDetailsHasBeenSet = true; m_portProbeDetails.emplace_back(std::forward<PortProbeDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the port probe was blocked.</p>
     */
    inline bool GetBlocked() const { return m_blocked; }
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }
    inline PortProbeAction& WithBlocked(bool value) { SetBlocked(value); return *this;}
    ///@}
  private:

    Aws::Vector<PortProbeDetail> m_portProbeDetails;
    bool m_portProbeDetailsHasBeenSet = false;

    bool m_blocked{false};
    bool m_blockedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
