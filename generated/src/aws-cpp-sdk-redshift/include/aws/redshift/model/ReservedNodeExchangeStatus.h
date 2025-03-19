/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ReservedNodeExchangeStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Reserved-node status details, such as the source reserved-node identifier,
   * the target reserved-node identifier, the node type, the node count, and other
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReservedNodeExchangeStatus">AWS
   * API Reference</a></p>
   */
  class ReservedNodeExchangeStatus
  {
  public:
    AWS_REDSHIFT_API ReservedNodeExchangeStatus() = default;
    AWS_REDSHIFT_API ReservedNodeExchangeStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ReservedNodeExchangeStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline const Aws::String& GetReservedNodeExchangeRequestId() const { return m_reservedNodeExchangeRequestId; }
    inline bool ReservedNodeExchangeRequestIdHasBeenSet() const { return m_reservedNodeExchangeRequestIdHasBeenSet; }
    template<typename ReservedNodeExchangeRequestIdT = Aws::String>
    void SetReservedNodeExchangeRequestId(ReservedNodeExchangeRequestIdT&& value) { m_reservedNodeExchangeRequestIdHasBeenSet = true; m_reservedNodeExchangeRequestId = std::forward<ReservedNodeExchangeRequestIdT>(value); }
    template<typename ReservedNodeExchangeRequestIdT = Aws::String>
    ReservedNodeExchangeStatus& WithReservedNodeExchangeRequestId(ReservedNodeExchangeRequestIdT&& value) { SetReservedNodeExchangeRequestId(std::forward<ReservedNodeExchangeRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the reserved-node exchange request. Statuses include
     * in-progress and requested.</p>
     */
    inline ReservedNodeExchangeStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReservedNodeExchangeStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReservedNodeExchangeStatus& WithStatus(ReservedNodeExchangeStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A date and time that indicate when the reserved-node exchange was
     * requested.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const { return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    void SetRequestTime(RequestTimeT&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::forward<RequestTimeT>(value); }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    ReservedNodeExchangeStatus& WithRequestTime(RequestTimeT&& value) { SetRequestTime(std::forward<RequestTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source reserved node.</p>
     */
    inline const Aws::String& GetSourceReservedNodeId() const { return m_sourceReservedNodeId; }
    inline bool SourceReservedNodeIdHasBeenSet() const { return m_sourceReservedNodeIdHasBeenSet; }
    template<typename SourceReservedNodeIdT = Aws::String>
    void SetSourceReservedNodeId(SourceReservedNodeIdT&& value) { m_sourceReservedNodeIdHasBeenSet = true; m_sourceReservedNodeId = std::forward<SourceReservedNodeIdT>(value); }
    template<typename SourceReservedNodeIdT = Aws::String>
    ReservedNodeExchangeStatus& WithSourceReservedNodeId(SourceReservedNodeIdT&& value) { SetSourceReservedNodeId(std::forward<SourceReservedNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source reserved-node type, for example ra3.4xlarge.</p>
     */
    inline const Aws::String& GetSourceReservedNodeType() const { return m_sourceReservedNodeType; }
    inline bool SourceReservedNodeTypeHasBeenSet() const { return m_sourceReservedNodeTypeHasBeenSet; }
    template<typename SourceReservedNodeTypeT = Aws::String>
    void SetSourceReservedNodeType(SourceReservedNodeTypeT&& value) { m_sourceReservedNodeTypeHasBeenSet = true; m_sourceReservedNodeType = std::forward<SourceReservedNodeTypeT>(value); }
    template<typename SourceReservedNodeTypeT = Aws::String>
    ReservedNodeExchangeStatus& WithSourceReservedNodeType(SourceReservedNodeTypeT&& value) { SetSourceReservedNodeType(std::forward<SourceReservedNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source reserved-node count in the cluster.</p>
     */
    inline int GetSourceReservedNodeCount() const { return m_sourceReservedNodeCount; }
    inline bool SourceReservedNodeCountHasBeenSet() const { return m_sourceReservedNodeCountHasBeenSet; }
    inline void SetSourceReservedNodeCount(int value) { m_sourceReservedNodeCountHasBeenSet = true; m_sourceReservedNodeCount = value; }
    inline ReservedNodeExchangeStatus& WithSourceReservedNodeCount(int value) { SetSourceReservedNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target reserved node offering.</p>
     */
    inline const Aws::String& GetTargetReservedNodeOfferingId() const { return m_targetReservedNodeOfferingId; }
    inline bool TargetReservedNodeOfferingIdHasBeenSet() const { return m_targetReservedNodeOfferingIdHasBeenSet; }
    template<typename TargetReservedNodeOfferingIdT = Aws::String>
    void SetTargetReservedNodeOfferingId(TargetReservedNodeOfferingIdT&& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = std::forward<TargetReservedNodeOfferingIdT>(value); }
    template<typename TargetReservedNodeOfferingIdT = Aws::String>
    ReservedNodeExchangeStatus& WithTargetReservedNodeOfferingId(TargetReservedNodeOfferingIdT&& value) { SetTargetReservedNodeOfferingId(std::forward<TargetReservedNodeOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type of the target reserved node, for example ra3.4xlarge.</p>
     */
    inline const Aws::String& GetTargetReservedNodeType() const { return m_targetReservedNodeType; }
    inline bool TargetReservedNodeTypeHasBeenSet() const { return m_targetReservedNodeTypeHasBeenSet; }
    template<typename TargetReservedNodeTypeT = Aws::String>
    void SetTargetReservedNodeType(TargetReservedNodeTypeT&& value) { m_targetReservedNodeTypeHasBeenSet = true; m_targetReservedNodeType = std::forward<TargetReservedNodeTypeT>(value); }
    template<typename TargetReservedNodeTypeT = Aws::String>
    ReservedNodeExchangeStatus& WithTargetReservedNodeType(TargetReservedNodeTypeT&& value) { SetTargetReservedNodeType(std::forward<TargetReservedNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of target reserved nodes in the cluster.</p>
     */
    inline int GetTargetReservedNodeCount() const { return m_targetReservedNodeCount; }
    inline bool TargetReservedNodeCountHasBeenSet() const { return m_targetReservedNodeCountHasBeenSet; }
    inline void SetTargetReservedNodeCount(int value) { m_targetReservedNodeCountHasBeenSet = true; m_targetReservedNodeCount = value; }
    inline ReservedNodeExchangeStatus& WithTargetReservedNodeCount(int value) { SetTargetReservedNodeCount(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedNodeExchangeRequestId;
    bool m_reservedNodeExchangeRequestIdHasBeenSet = false;

    ReservedNodeExchangeStatusType m_status{ReservedNodeExchangeStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime{};
    bool m_requestTimeHasBeenSet = false;

    Aws::String m_sourceReservedNodeId;
    bool m_sourceReservedNodeIdHasBeenSet = false;

    Aws::String m_sourceReservedNodeType;
    bool m_sourceReservedNodeTypeHasBeenSet = false;

    int m_sourceReservedNodeCount{0};
    bool m_sourceReservedNodeCountHasBeenSet = false;

    Aws::String m_targetReservedNodeOfferingId;
    bool m_targetReservedNodeOfferingIdHasBeenSet = false;

    Aws::String m_targetReservedNodeType;
    bool m_targetReservedNodeTypeHasBeenSet = false;

    int m_targetReservedNodeCount{0};
    bool m_targetReservedNodeCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
