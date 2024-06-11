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
    AWS_ROUTE53_API TrafficPolicyInstance();
    AWS_ROUTE53_API TrafficPolicyInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API TrafficPolicyInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID that Amazon Route 53 assigned to the new traffic policy instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TrafficPolicyInstance& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TrafficPolicyInstance& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TrafficPolicyInstance& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the hosted zone that Amazon Route 53 created resource record sets
     * in.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline TrafficPolicyInstance& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline TrafficPolicyInstance& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline TrafficPolicyInstance& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name, such as www.example.com, for which Amazon Route 53 responds to
     * queries by using the resource record sets that are associated with this traffic
     * policy instance. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrafficPolicyInstance& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrafficPolicyInstance& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrafficPolicyInstance& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TTL that Amazon Route 53 assigned to all of the resource record sets that
     * it created in the specified hosted zone.</p>
     */
    inline long long GetTTL() const{ return m_tTL; }
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
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline TrafficPolicyInstance& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline TrafficPolicyInstance& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline TrafficPolicyInstance& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>State</code> is <code>Failed</code>, an explanation of the reason
     * for the failure. If <code>State</code> is another value, <code>Message</code> is
     * empty.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline TrafficPolicyInstance& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline TrafficPolicyInstance& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline TrafficPolicyInstance& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the traffic policy that Amazon Route 53 used to create resource
     * record sets in the specified hosted zone.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::move(value); }
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }
    inline TrafficPolicyInstance& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}
    inline TrafficPolicyInstance& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}
    inline TrafficPolicyInstance& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the traffic policy that Amazon Route 53 used to create
     * resource record sets in the specified hosted zone.</p>
     */
    inline int GetTrafficPolicyVersion() const{ return m_trafficPolicyVersion; }
    inline bool TrafficPolicyVersionHasBeenSet() const { return m_trafficPolicyVersionHasBeenSet; }
    inline void SetTrafficPolicyVersion(int value) { m_trafficPolicyVersionHasBeenSet = true; m_trafficPolicyVersion = value; }
    inline TrafficPolicyInstance& WithTrafficPolicyVersion(int value) { SetTrafficPolicyVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS type that Amazon Route 53 assigned to all of the resource record sets
     * that it created for this traffic policy instance. </p>
     */
    inline const RRType& GetTrafficPolicyType() const{ return m_trafficPolicyType; }
    inline bool TrafficPolicyTypeHasBeenSet() const { return m_trafficPolicyTypeHasBeenSet; }
    inline void SetTrafficPolicyType(const RRType& value) { m_trafficPolicyTypeHasBeenSet = true; m_trafficPolicyType = value; }
    inline void SetTrafficPolicyType(RRType&& value) { m_trafficPolicyTypeHasBeenSet = true; m_trafficPolicyType = std::move(value); }
    inline TrafficPolicyInstance& WithTrafficPolicyType(const RRType& value) { SetTrafficPolicyType(value); return *this;}
    inline TrafficPolicyInstance& WithTrafficPolicyType(RRType&& value) { SetTrafficPolicyType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_tTL;
    bool m_tTLHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    int m_trafficPolicyVersion;
    bool m_trafficPolicyVersionHasBeenSet = false;

    RRType m_trafficPolicyType;
    bool m_trafficPolicyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
