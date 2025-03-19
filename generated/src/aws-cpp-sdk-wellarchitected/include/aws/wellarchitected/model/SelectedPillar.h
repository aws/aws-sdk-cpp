/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The selected pillar.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/SelectedPillar">AWS
   * API Reference</a></p>
   */
  class SelectedPillar
  {
  public:
    AWS_WELLARCHITECTED_API SelectedPillar() = default;
    AWS_WELLARCHITECTED_API SelectedPillar(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API SelectedPillar& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    SelectedPillar& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedQuestionIds() const { return m_selectedQuestionIds; }
    inline bool SelectedQuestionIdsHasBeenSet() const { return m_selectedQuestionIdsHasBeenSet; }
    template<typename SelectedQuestionIdsT = Aws::Vector<Aws::String>>
    void SetSelectedQuestionIds(SelectedQuestionIdsT&& value) { m_selectedQuestionIdsHasBeenSet = true; m_selectedQuestionIds = std::forward<SelectedQuestionIdsT>(value); }
    template<typename SelectedQuestionIdsT = Aws::Vector<Aws::String>>
    SelectedPillar& WithSelectedQuestionIds(SelectedQuestionIdsT&& value) { SetSelectedQuestionIds(std::forward<SelectedQuestionIdsT>(value)); return *this;}
    template<typename SelectedQuestionIdsT = Aws::String>
    SelectedPillar& AddSelectedQuestionIds(SelectedQuestionIdsT&& value) { m_selectedQuestionIdsHasBeenSet = true; m_selectedQuestionIds.emplace_back(std::forward<SelectedQuestionIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedQuestionIds;
    bool m_selectedQuestionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
