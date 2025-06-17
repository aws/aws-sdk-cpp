/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/MofNApprovalStrategy.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains details for how an approval team grants approval.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ApprovalStrategyResponse">AWS
   * API Reference</a></p>
   */
  class ApprovalStrategyResponse
  {
  public:
    AWS_MPA_API ApprovalStrategyResponse() = default;
    AWS_MPA_API ApprovalStrategyResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API ApprovalStrategyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Minimum number of approvals (M) required for a total number of approvers
     * (N).</p>
     */
    inline const MofNApprovalStrategy& GetMofN() const { return m_mofN; }
    inline bool MofNHasBeenSet() const { return m_mofNHasBeenSet; }
    template<typename MofNT = MofNApprovalStrategy>
    void SetMofN(MofNT&& value) { m_mofNHasBeenSet = true; m_mofN = std::forward<MofNT>(value); }
    template<typename MofNT = MofNApprovalStrategy>
    ApprovalStrategyResponse& WithMofN(MofNT&& value) { SetMofN(std::forward<MofNT>(value)); return *this;}
    ///@}
  private:

    MofNApprovalStrategy m_mofN;
    bool m_mofNHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
