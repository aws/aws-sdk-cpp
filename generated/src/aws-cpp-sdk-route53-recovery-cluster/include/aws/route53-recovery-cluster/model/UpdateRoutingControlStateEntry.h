/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-cluster/model/RoutingControlState.h>
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
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   * <p>A routing control state entry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/UpdateRoutingControlStateEntry">AWS
   * API Reference</a></p>
   */
  class UpdateRoutingControlStateEntry
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateEntry() = default;
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const { return m_routingControlArn; }
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }
    template<typename RoutingControlArnT = Aws::String>
    void SetRoutingControlArn(RoutingControlArnT&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::forward<RoutingControlArnT>(value); }
    template<typename RoutingControlArnT = Aws::String>
    UpdateRoutingControlStateEntry& WithRoutingControlArn(RoutingControlArnT&& value) { SetRoutingControlArn(std::forward<RoutingControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing control state in a set of routing control state entries.</p>
     */
    inline RoutingControlState GetRoutingControlState() const { return m_routingControlState; }
    inline bool RoutingControlStateHasBeenSet() const { return m_routingControlStateHasBeenSet; }
    inline void SetRoutingControlState(RoutingControlState value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }
    inline UpdateRoutingControlStateEntry& WithRoutingControlState(RoutingControlState value) { SetRoutingControlState(value); return *this;}
    ///@}
  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    RoutingControlState m_routingControlState{RoutingControlState::NOT_SET};
    bool m_routingControlStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
