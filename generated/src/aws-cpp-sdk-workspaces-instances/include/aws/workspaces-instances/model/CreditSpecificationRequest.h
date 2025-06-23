/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/CpuCreditsEnum.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines CPU credit configuration for burstable instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CreditSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class CreditSpecificationRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API CreditSpecificationRequest() = default;
    AWS_WORKSPACESINSTANCES_API CreditSpecificationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API CreditSpecificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>CPU credit specification mode.</p>
     */
    inline CpuCreditsEnum GetCpuCredits() const { return m_cpuCredits; }
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }
    inline void SetCpuCredits(CpuCreditsEnum value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = value; }
    inline CreditSpecificationRequest& WithCpuCredits(CpuCreditsEnum value) { SetCpuCredits(value); return *this;}
    ///@}
  private:

    CpuCreditsEnum m_cpuCredits{CpuCreditsEnum::NOT_SET};
    bool m_cpuCreditsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
