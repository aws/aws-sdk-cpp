/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes a target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_VPCLATTICE_API Target();
    AWS_VPCLATTICE_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline Target& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline Target& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline Target& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The port on which the target is listening. For HTTP, the default is
     * <code>80</code>. For HTTPS, the default is <code>443</code>.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the target is listening. For HTTP, the default is
     * <code>80</code>. For HTTPS, the default is <code>443</code>.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port on which the target is listening. For HTTP, the default is
     * <code>80</code>. For HTTPS, the default is <code>443</code>.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the target is listening. For HTTP, the default is
     * <code>80</code>. For HTTPS, the default is <code>443</code>.</p>
     */
    inline Target& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
