/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FlowOperationType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/network-firewall/model/FlowOperationStatus.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>An array of objects with metadata about the requested
   * <code>FlowOperation</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FlowOperationMetadata">AWS
   * API Reference</a></p>
   */
  class FlowOperationMetadata
  {
  public:
    AWS_NETWORKFIREWALL_API FlowOperationMetadata() = default;
    AWS_NETWORKFIREWALL_API FlowOperationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FlowOperationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the flow operation. This ID is returned in the
     * responses to start and list commands. You provide to describe commands.</p>
     */
    inline const Aws::String& GetFlowOperationId() const { return m_flowOperationId; }
    inline bool FlowOperationIdHasBeenSet() const { return m_flowOperationIdHasBeenSet; }
    template<typename FlowOperationIdT = Aws::String>
    void SetFlowOperationId(FlowOperationIdT&& value) { m_flowOperationIdHasBeenSet = true; m_flowOperationId = std::forward<FlowOperationIdT>(value); }
    template<typename FlowOperationIdT = Aws::String>
    FlowOperationMetadata& WithFlowOperationId(FlowOperationIdT&& value) { SetFlowOperationId(std::forward<FlowOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of <code>FlowOperation</code>.</p>
     */
    inline FlowOperationType GetFlowOperationType() const { return m_flowOperationType; }
    inline bool FlowOperationTypeHasBeenSet() const { return m_flowOperationTypeHasBeenSet; }
    inline void SetFlowOperationType(FlowOperationType value) { m_flowOperationTypeHasBeenSet = true; m_flowOperationType = value; }
    inline FlowOperationMetadata& WithFlowOperationType(FlowOperationType value) { SetFlowOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when the Suricata engine identified flows impacted by
     * an operation. </p>
     */
    inline const Aws::Utils::DateTime& GetFlowRequestTimestamp() const { return m_flowRequestTimestamp; }
    inline bool FlowRequestTimestampHasBeenSet() const { return m_flowRequestTimestampHasBeenSet; }
    template<typename FlowRequestTimestampT = Aws::Utils::DateTime>
    void SetFlowRequestTimestamp(FlowRequestTimestampT&& value) { m_flowRequestTimestampHasBeenSet = true; m_flowRequestTimestamp = std::forward<FlowRequestTimestampT>(value); }
    template<typename FlowRequestTimestampT = Aws::Utils::DateTime>
    FlowOperationMetadata& WithFlowRequestTimestamp(FlowRequestTimestampT&& value) { SetFlowRequestTimestamp(std::forward<FlowRequestTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the status of the flow operation. This string is returned in the
     * responses to start, list, and describe commands.</p> <p>If the status is
     * <code>COMPLETED_WITH_ERRORS</code>, results may be returned with any number of
     * <code>Flows</code> missing from the response. If the status is
     * <code>FAILED</code>, <code>Flows</code> returned will be empty.</p>
     */
    inline FlowOperationStatus GetFlowOperationStatus() const { return m_flowOperationStatus; }
    inline bool FlowOperationStatusHasBeenSet() const { return m_flowOperationStatusHasBeenSet; }
    inline void SetFlowOperationStatus(FlowOperationStatus value) { m_flowOperationStatusHasBeenSet = true; m_flowOperationStatus = value; }
    inline FlowOperationMetadata& WithFlowOperationStatus(FlowOperationStatus value) { SetFlowOperationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_flowOperationId;
    bool m_flowOperationIdHasBeenSet = false;

    FlowOperationType m_flowOperationType{FlowOperationType::NOT_SET};
    bool m_flowOperationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_flowRequestTimestamp{};
    bool m_flowRequestTimestampHasBeenSet = false;

    FlowOperationStatus m_flowOperationStatus{FlowOperationStatus::NOT_SET};
    bool m_flowOperationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
