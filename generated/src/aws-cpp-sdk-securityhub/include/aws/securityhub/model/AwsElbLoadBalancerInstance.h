/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides information about an EC2 instance for a load balancer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerInstance">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerInstance
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerInstance();
    AWS_SECURITYHUB_API AwsElbLoadBalancerInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AwsElbLoadBalancerInstance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AwsElbLoadBalancerInstance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AwsElbLoadBalancerInstance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
