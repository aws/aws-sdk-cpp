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
    AWS_ROUTE53RECOVERYREADINESS_API TargetResource() = default;
    AWS_ROUTE53RECOVERYREADINESS_API TargetResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API TargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Network Load Balancer Resource.</p>
     */
    inline const NLBResource& GetNLBResource() const { return m_nLBResource; }
    inline bool NLBResourceHasBeenSet() const { return m_nLBResourceHasBeenSet; }
    template<typename NLBResourceT = NLBResource>
    void SetNLBResource(NLBResourceT&& value) { m_nLBResourceHasBeenSet = true; m_nLBResource = std::forward<NLBResourceT>(value); }
    template<typename NLBResourceT = NLBResource>
    TargetResource& WithNLBResource(NLBResourceT&& value) { SetNLBResource(std::forward<NLBResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Route 53 resource.</p>
     */
    inline const R53ResourceRecord& GetR53Resource() const { return m_r53Resource; }
    inline bool R53ResourceHasBeenSet() const { return m_r53ResourceHasBeenSet; }
    template<typename R53ResourceT = R53ResourceRecord>
    void SetR53Resource(R53ResourceT&& value) { m_r53ResourceHasBeenSet = true; m_r53Resource = std::forward<R53ResourceT>(value); }
    template<typename R53ResourceT = R53ResourceRecord>
    TargetResource& WithR53Resource(R53ResourceT&& value) { SetR53Resource(std::forward<R53ResourceT>(value)); return *this;}
    ///@}
  private:

    NLBResource m_nLBResource;
    bool m_nLBResourceHasBeenSet = false;

    R53ResourceRecord m_r53Resource;
    bool m_r53ResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
