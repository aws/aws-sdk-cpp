/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains settings for the new traffic policy
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TrafficPolicyInstance">AWS
   * API Reference</a></p>
   */
  class TrafficPolicyInstance
  {
  public:
    AWS_ROUTE53_API TrafficPolicyInstance() = default;
    AWS_ROUTE53_API TrafficPolicyInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API TrafficPolicyInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID that Amazon Route 53 assigned to the new traffic policy instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TrafficPolicyInstance& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the hosted zone that Amazon Route 53 created resource record sets
     * in.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    TrafficPolicyInstance& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name, such as www.example.com, for which Amazon Route 53 responds to
     * queries by using the resource record sets that are associated with this traffic
     * policy instance. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TrafficPolicyInstance& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TTL that Amazon Route 53 assigned to all of the resource record sets that
     * it created in the specified hosted zone.</p>
     */
    inline long long GetTTL() const { return m_tTL; }
    inline bool TTLHasBeenSet() const { return m_tTLHasBeenSet; }
    inline void SetTTL(long long value) { m_tTLHasBeenSet = true; m_tTL = value; }
    inline TrafficPolicyInstance& WithTTL(long long value) { SetTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of <code>State</code> is one of the following values:</p> <dl>
     * <dt>Applied</dt> <dd> <p>Amazon Route 53 has finished creating resource record
     * sets, and changes have propagated to all Route 53 edge locations.</p> </dd>
     * <dt>Creating</dt> <dd> <p>Route 53 is creating the resource record sets. Use
     * <code>GetTrafficPolicyInstance</code> to confirm that the
     * <code>CreateTrafficPolicyInstance</code> request completed successfully.</p>
     * </dd> <dt>Failed</dt> <dd> <p>Route 53 wasn't able to create or update the
     * resource record sets. When the value of <code>State</code> is
     * <code>Failed</code>, see <code>Message</code> for an explanation of what caused
     * the request to fail.</p> </dd> </dl>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    TrafficPolicyInstance& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>State</code> is <code>Failed</code>, an explanation of the reason
     * for the failure. If <code>State</code> is another value, <code>Message</code> is
     * empty.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TrafficPolicyInstance& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the traffic policy that Amazon Route 53 used to create resource
     * record sets in the specified hosted zone.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const { return m_trafficPolicyId; }
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
    template<typename TrafficPolicyIdT = Aws::String>
    void SetTrafficPolicyId(TrafficPolicyIdT&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::forward<TrafficPolicyIdT>(value); }
    template<typename TrafficPolicyIdT = Aws::String>
    TrafficPolicyInstance& WithTrafficPolicyId(TrafficPolicyIdT&& value) { SetTrafficPolicyId(std::forward<TrafficPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the traffic policy that Amazon Route 53 used to create
     * resource record sets in the specified hosted zone.</p>
     */
    inline int GetTrafficPolicyVersion() const { return m_trafficPolicyVersion; }
    inline bool TrafficPolicyVersionHasBeenSet() const { return m_trafficPolicyVersionHasBeenSet; }
    inline void SetTrafficPolicyVersion(int value) { m_trafficPolicyVersionHasBeenSet = true; m_trafficPolicyVersion = value; }
    inline TrafficPolicyInstance& WithTrafficPolicyVersion(int value) { SetTrafficPolicyVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS type that Amazon Route 53 assigned to all of the resource record sets
     * that it created for this traffic policy instance. </p>
     */
    inline RRType GetTrafficPolicyType() const { return m_trafficPolicyType; }
    inline bool TrafficPolicyTypeHasBeenSet() const { return m_trafficPolicyTypeHasBeenSet; }
    inline void SetTrafficPolicyType(RRType value) { m_trafficPolicyTypeHasBeenSet = true; m_trafficPolicyType = value; }
    inline TrafficPolicyInstance& WithTrafficPolicyType(RRType value) { SetTrafficPolicyType(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_tTL{0};
    bool m_tTLHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    int m_trafficPolicyVersion{0};
    bool m_trafficPolicyVersionHasBeenSet = false;

    RRType m_trafficPolicyType{RRType::NOT_SET};
    bool m_trafficPolicyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
