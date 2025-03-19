/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchFilter.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A set of patch filters, typically used for approval rules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchFilterGroup">AWS
   * API Reference</a></p>
   */
  class PatchFilterGroup
  {
  public:
    AWS_SSM_API PatchFilterGroup() = default;
    AWS_SSM_API PatchFilterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchFilterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline const Aws::Vector<PatchFilter>& GetPatchFilters() const { return m_patchFilters; }
    inline bool PatchFiltersHasBeenSet() const { return m_patchFiltersHasBeenSet; }
    template<typename PatchFiltersT = Aws::Vector<PatchFilter>>
    void SetPatchFilters(PatchFiltersT&& value) { m_patchFiltersHasBeenSet = true; m_patchFilters = std::forward<PatchFiltersT>(value); }
    template<typename PatchFiltersT = Aws::Vector<PatchFilter>>
    PatchFilterGroup& WithPatchFilters(PatchFiltersT&& value) { SetPatchFilters(std::forward<PatchFiltersT>(value)); return *this;}
    template<typename PatchFiltersT = PatchFilter>
    PatchFilterGroup& AddPatchFilters(PatchFiltersT&& value) { m_patchFiltersHasBeenSet = true; m_patchFilters.emplace_back(std::forward<PatchFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PatchFilter> m_patchFilters;
    bool m_patchFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
