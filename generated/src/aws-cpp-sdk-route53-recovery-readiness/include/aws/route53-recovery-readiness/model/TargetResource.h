/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/model/NLBResource.h>
#include <aws/route53-recovery-readiness/model/R53ResourceRecord.h>
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
   * <p>The target resource that the Route 53 record points to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/TargetResource">AWS
   * API Reference</a></p>
   */
  class TargetResource
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API TargetResource();
    AWS_ROUTE53RECOVERYREADINESS_API TargetResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API TargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Network Load Balancer Resource.</p>
     */
    inline const NLBResource& GetNLBResource() const{ return m_nLBResource; }

    /**
     * <p>The Network Load Balancer Resource.</p>
     */
    inline bool NLBResourceHasBeenSet() const { return m_nLBResourceHasBeenSet; }

    /**
     * <p>The Network Load Balancer Resource.</p>
     */
    inline void SetNLBResource(const NLBResource& value) { m_nLBResourceHasBeenSet = true; m_nLBResource = value; }

    /**
     * <p>The Network Load Balancer Resource.</p>
     */
    inline void SetNLBResource(NLBResource&& value) { m_nLBResourceHasBeenSet = true; m_nLBResource = std::move(value); }

    /**
     * <p>The Network Load Balancer Resource.</p>
     */
    inline TargetResource& WithNLBResource(const NLBResource& value) { SetNLBResource(value); return *this;}

    /**
     * <p>The Network Load Balancer Resource.</p>
     */
    inline TargetResource& WithNLBResource(NLBResource&& value) { SetNLBResource(std::move(value)); return *this;}


    /**
     * <p>The Route 53 resource.</p>
     */
    inline const R53ResourceRecord& GetR53Resource() const{ return m_r53Resource; }

    /**
     * <p>The Route 53 resource.</p>
     */
    inline bool R53ResourceHasBeenSet() const { return m_r53ResourceHasBeenSet; }

    /**
     * <p>The Route 53 resource.</p>
     */
    inline void SetR53Resource(const R53ResourceRecord& value) { m_r53ResourceHasBeenSet = true; m_r53Resource = value; }

    /**
     * <p>The Route 53 resource.</p>
     */
    inline void SetR53Resource(R53ResourceRecord&& value) { m_r53ResourceHasBeenSet = true; m_r53Resource = std::move(value); }

    /**
     * <p>The Route 53 resource.</p>
     */
    inline TargetResource& WithR53Resource(const R53ResourceRecord& value) { SetR53Resource(value); return *this;}

    /**
     * <p>The Route 53 resource.</p>
     */
    inline TargetResource& WithR53Resource(R53ResourceRecord&& value) { SetR53Resource(std::move(value)); return *this;}

  private:

    NLBResource m_nLBResource;
    bool m_nLBResourceHasBeenSet = false;

    R53ResourceRecord m_r53Resource;
    bool m_r53ResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
