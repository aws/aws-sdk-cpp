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
   * <p>Describes a target failure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/TargetFailure">AWS
   * API Reference</a></p>
   */
  class TargetFailure
  {
  public:
    AWS_VPCLATTICE_API TargetFailure();
    AWS_VPCLATTICE_API TargetFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API TargetFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }

    /**
     * <p>The failure code.</p>
     */
    inline TargetFailure& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline TargetFailure& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline TargetFailure& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p>The failure message.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>The failure message.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>The failure message.</p>
     */
    inline TargetFailure& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>The failure message.</p>
     */
    inline TargetFailure& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The failure message.</p>
     */
    inline TargetFailure& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


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
    inline TargetFailure& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline TargetFailure& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline TargetFailure& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The port on which the target is listening. This parameter doesn't apply if
     * the target is a Lambda function.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the target is listening. This parameter doesn't apply if
     * the target is a Lambda function.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port on which the target is listening. This parameter doesn't apply if
     * the target is a Lambda function.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the target is listening. This parameter doesn't apply if
     * the target is a Lambda function.</p>
     */
    inline TargetFailure& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
