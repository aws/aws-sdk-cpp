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
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateEntry();
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const{ return m_routingControlArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline void SetRoutingControlArn(const Aws::String& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline void SetRoutingControlArn(Aws::String&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline void SetRoutingControlArn(const char* value) { m_routingControlArnHasBeenSet = true; m_routingControlArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline UpdateRoutingControlStateEntry& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline UpdateRoutingControlStateEntry& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a routing control state entry.</p>
     */
    inline UpdateRoutingControlStateEntry& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}


    /**
     * <p>The routing control state in a set of routing control state entries.</p>
     */
    inline const RoutingControlState& GetRoutingControlState() const{ return m_routingControlState; }

    /**
     * <p>The routing control state in a set of routing control state entries.</p>
     */
    inline bool RoutingControlStateHasBeenSet() const { return m_routingControlStateHasBeenSet; }

    /**
     * <p>The routing control state in a set of routing control state entries.</p>
     */
    inline void SetRoutingControlState(const RoutingControlState& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }

    /**
     * <p>The routing control state in a set of routing control state entries.</p>
     */
    inline void SetRoutingControlState(RoutingControlState&& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = std::move(value); }

    /**
     * <p>The routing control state in a set of routing control state entries.</p>
     */
    inline UpdateRoutingControlStateEntry& WithRoutingControlState(const RoutingControlState& value) { SetRoutingControlState(value); return *this;}

    /**
     * <p>The routing control state in a set of routing control state entries.</p>
     */
    inline UpdateRoutingControlStateEntry& WithRoutingControlState(RoutingControlState&& value) { SetRoutingControlState(std::move(value)); return *this;}

  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    RoutingControlState m_routingControlState;
    bool m_routingControlStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
