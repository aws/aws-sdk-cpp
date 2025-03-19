/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the resource record sets that
   * you want to update based on a specified traffic policy instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateTrafficPolicyInstanceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateTrafficPolicyInstanceRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API UpdateTrafficPolicyInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrafficPolicyInstance"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the traffic policy instance that you want to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateTrafficPolicyInstanceRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TTL that you want Amazon Route 53 to assign to all of the updated
     * resource record sets.</p>
     */
    inline long long GetTTL() const { return m_tTL; }
    inline bool TTLHasBeenSet() const { return m_tTLHasBeenSet; }
    inline void SetTTL(long long value) { m_tTLHasBeenSet = true; m_tTL = value; }
    inline UpdateTrafficPolicyInstanceRequest& WithTTL(long long value) { SetTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the traffic policy that you want Amazon Route 53 to use to update
     * resource record sets for the specified traffic policy instance.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const { return m_trafficPolicyId; }
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
    template<typename TrafficPolicyIdT = Aws::String>
    void SetTrafficPolicyId(TrafficPolicyIdT&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::forward<TrafficPolicyIdT>(value); }
    template<typename TrafficPolicyIdT = Aws::String>
    UpdateTrafficPolicyInstanceRequest& WithTrafficPolicyId(TrafficPolicyIdT&& value) { SetTrafficPolicyId(std::forward<TrafficPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the traffic policy that you want Amazon Route 53 to use to
     * update resource record sets for the specified traffic policy instance.</p>
     */
    inline int GetTrafficPolicyVersion() const { return m_trafficPolicyVersion; }
    inline bool TrafficPolicyVersionHasBeenSet() const { return m_trafficPolicyVersionHasBeenSet; }
    inline void SetTrafficPolicyVersion(int value) { m_trafficPolicyVersionHasBeenSet = true; m_trafficPolicyVersion = value; }
    inline UpdateTrafficPolicyInstanceRequest& WithTrafficPolicyVersion(int value) { SetTrafficPolicyVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_tTL{0};
    bool m_tTLHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    int m_trafficPolicyVersion{0};
    bool m_trafficPolicyVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
