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
    AWS_SECURITYHUB_API Sequence();
    AWS_SECURITYHUB_API Sequence(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Sequence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Unique identifier of the attack sequence. </p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline Sequence& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline Sequence& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline Sequence& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about the actors involved in the attack sequence. </p>
     */
    inline const Aws::Vector<Actor>& GetActors() const{ return m_actors; }
    inline bool ActorsHasBeenSet() const { return m_actorsHasBeenSet; }
    inline void SetActors(const Aws::Vector<Actor>& value) { m_actorsHasBeenSet = true; m_actors = value; }
    inline void SetActors(Aws::Vector<Actor>&& value) { m_actorsHasBeenSet = true; m_actors = std::move(value); }
    inline Sequence& WithActors(const Aws::Vector<Actor>& value) { SetActors(value); return *this;}
    inline Sequence& WithActors(Aws::Vector<Actor>&& value) { SetActors(std::move(value)); return *this;}
    inline Sequence& AddActors(const Actor& value) { m_actorsHasBeenSet = true; m_actors.push_back(value); return *this; }
    inline Sequence& AddActors(Actor&& value) { m_actorsHasBeenSet = true; m_actors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information about the network endpoints that were used in the
     * attack sequence. </p>
     */
    inline const Aws::Vector<NetworkEndpoint>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<NetworkEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<NetworkEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline Sequence& WithEndpoints(const Aws::Vector<NetworkEndpoint>& value) { SetEndpoints(value); return *this;}
    inline Sequence& WithEndpoints(Aws::Vector<NetworkEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline Sequence& AddEndpoints(const NetworkEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline Sequence& AddEndpoints(NetworkEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information about the signals involved in the attack sequence. </p>
     */
    inline const Aws::Vector<Signal>& GetSignals() const{ return m_signals; }
    inline bool SignalsHasBeenSet() const { return m_signalsHasBeenSet; }
    inline void SetSignals(const Aws::Vector<Signal>& value) { m_signalsHasBeenSet = true; m_signals = value; }
    inline void SetSignals(Aws::Vector<Signal>&& value) { m_signalsHasBeenSet = true; m_signals = std::move(value); }
    inline Sequence& WithSignals(const Aws::Vector<Signal>& value) { SetSignals(value); return *this;}
    inline Sequence& WithSignals(Aws::Vector<Signal>&& value) { SetSignals(std::move(value)); return *this;}
    inline Sequence& AddSignals(const Signal& value) { m_signalsHasBeenSet = true; m_signals.push_back(value); return *this; }
    inline Sequence& AddSignals(Signal&& value) { m_signalsHasBeenSet = true; m_signals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information about the indicators observed in the attack sequence.
     * The values for <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_Signal.html">SignalIndicators</a>
     * are a subset of the values for <code>SequenceIndicators</code>, but the values
     * for these fields don't always match 1:1.</p>
     */
    inline const Aws::Vector<Indicator>& GetSequenceIndicators() const{ return m_sequenceIndicators; }
    inline bool SequenceIndicatorsHasBeenSet() const { return m_sequenceIndicatorsHasBeenSet; }
    inline void SetSequenceIndicators(const Aws::Vector<Indicator>& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators = value; }
    inline void SetSequenceIndicators(Aws::Vector<Indicator>&& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators = std::move(value); }
    inline Sequence& WithSequenceIndicators(const Aws::Vector<Indicator>& value) { SetSequenceIndicators(value); return *this;}
    inline Sequence& WithSequenceIndicators(Aws::Vector<Indicator>&& value) { SetSequenceIndicators(std::move(value)); return *this;}
    inline Sequence& AddSequenceIndicators(const Indicator& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators.push_back(value); return *this; }
    inline Sequence& AddSequenceIndicators(Indicator&& value) { m_sequenceIndicatorsHasBeenSet = true; m_sequenceIndicators.push_back(std::move(value)); return *this; }
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
