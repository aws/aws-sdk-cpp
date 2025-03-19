/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/Actor.h>
#include <aws/securityhub/model/NetworkEndpoint.h>
#include <aws/securityhub/model/Signal.h>
#include <aws/securityhub/model/Indicator.h>
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
   * <p> Contains information about an Amazon GuardDuty Extended Threat Detection
   * attack sequence finding. GuardDuty generates an attack sequence finding when
   * multiple events align to a potentially suspicious activity. To receive GuardDuty
   * attack sequence findings in Security Hub, you must have GuardDuty enabled. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Sequence">AWS
   * API Reference</a></p>
   */
  class Sequence
  {
  public:
    AWS_SECURITYHUB_API Sequence() = default;
    AWS_SECURITYHUB_API Sequence(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Sequence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Unique identifier of the attack sequence. </p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    Sequence& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about the actors involved in the attack sequence. </p>
     */
    inline const Aws::Vector<Actor>& GetActors() const { return m_actors; }
    inline bool ActorsHasBeenSet() const { return m_actorsHasBeenSet; }
    template<typename ActorsT = Aws::Vector<Actor>>
    void SetActors(ActorsT&& value) { m_actorsHasBeenSet = true; m_actors = std::forward<ActorsT>(value); }
    template<typename ActorsT = Aws::Vector<Actor>>
    Sequence& WithActors(ActorsT&& value) { SetActors(std::forward<ActorsT>(value)); return *this;}
    template<typename ActorsT = Actor>
    Sequence& AddActors(ActorsT&& value) { m_actorsHasBeenSet = true; m_actors.emplace_back(std::forward<ActorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information about the network endpoints that were used in the
     * attack sequence. </p>
     */
    inline const Aws::Vector<NetworkEndpoint>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<NetworkEndpoint>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<NetworkEndpoint>>
    Sequence& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = NetworkEndpoint>
    Sequence& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information about the signals involved in the attack sequence. </p>
     */
    inline const Aws::Vector<Signal>& GetSignals() const { return m_signals; }
    inline bool SignalsHasBeenSet() const { return m_signalsHasBeenSet; }
    template<typename SignalsT = Aws::Vector<Signal>>
    void SetSignals(SignalsT&& value) { m_signalsHasBeenSet = true; m_signals = std::forward<SignalsT>(value); }
    template<typename SignalsT = Aws::Vector<Signal>>
    Sequence& WithSignals(SignalsT&& value) { SetSignals(std::forward<SignalsT>(value)); return *this;}
    template<typename SignalsT = Signal>
    Sequence& AddSignals(SignalsT&& value) { m_signalsHasBeenSet = true; m_signals.emplace_back(std::forward<SignalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information about the indicators observed in the attack sequence.
     * The values for <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_Signal.html">SignalIndicators</a>
     * are a subset of the values for <code>SequenceIndicators</code>, but the values
     * for these fields don't always match 1:1.</p>
     */
    inline const Aws::Vector<Indicator>& GetSequenceIndicators() const { return m_sequenceIndicators; }
    inline bool SequenceIndicatorsHasBeenSet() const { return m_sequenceIndicatorsHasBeenSet; }
    template<typename SequenceIndicatorsT = Aws::Vector<Indicator>>
    void SetSequenceIndicators(SequenceIndicatorsT&& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators = std::forward<SequenceIndicatorsT>(value); }
    template<typename SequenceIndicatorsT = Aws::Vector<Indicator>>
    Sequence& WithSequenceIndicators(SequenceIndicatorsT&& value) { SetSequenceIndicators(std::forward<SequenceIndicatorsT>(value)); return *this;}
    template<typename SequenceIndicatorsT = Indicator>
    Sequence& AddSequenceIndicators(SequenceIndicatorsT&& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators.emplace_back(std::forward<SequenceIndicatorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::Vector<Actor> m_actors;
    bool m_actorsHasBeenSet = false;

    Aws::Vector<NetworkEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::Vector<Signal> m_signals;
    bool m_signalsHasBeenSet = false;

    Aws::Vector<Indicator> m_sequenceIndicators;
    bool m_sequenceIndicatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
