/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to associate lens reviews.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AssociateLensesInput">AWS
   * API Reference</a></p>
   */
  class AssociateLensesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API AssociateLensesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateLenses"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    AssociateLensesRequest& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetLensAliases() const { return m_lensAliases; }
    inline bool LensAliasesHasBeenSet() const { return m_lensAliasesHasBeenSet; }
    template<typename LensAliasesT = Aws::Vector<Aws::String>>
    void SetLensAliases(LensAliasesT&& value) { m_lensAliasesHasBeenSet = true; m_lensAliases = std::forward<LensAliasesT>(value); }
    template<typename LensAliasesT = Aws::Vector<Aws::String>>
    AssociateLensesRequest& WithLensAliases(LensAliasesT&& value) { SetLensAliases(std::forward<LensAliasesT>(value)); return *this;}
    template<typename LensAliasesT = Aws::String>
    AssociateLensesRequest& AddLensAliases(LensAliasesT&& value) { m_lensAliasesHasBeenSet = true; m_lensAliases.emplace_back(std::forward<LensAliasesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_lensAliases;
    bool m_lensAliasesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
