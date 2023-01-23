/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>The Network Load Balancer resource that a DNS target resource points
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/NLBResource">AWS
   * API Reference</a></p>
   */
  class NLBResource
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API NLBResource();
    AWS_ROUTE53RECOVERYREADINESS_API NLBResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API NLBResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Network Load Balancer resource Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Network Load Balancer resource Amazon Resource Name (ARN).</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Network Load Balancer resource Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Network Load Balancer resource Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Network Load Balancer resource Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Network Load Balancer resource Amazon Resource Name (ARN).</p>
     */
    inline NLBResource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Network Load Balancer resource Amazon Resource Name (ARN).</p>
     */
    inline NLBResource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Network Load Balancer resource Amazon Resource Name (ARN).</p>
     */
    inline NLBResource& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
