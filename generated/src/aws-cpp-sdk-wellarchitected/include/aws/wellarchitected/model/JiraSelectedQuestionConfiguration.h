/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/SelectedPillar.h>
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
   * <p>Selected questions in the workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/JiraSelectedQuestionConfiguration">AWS
   * API Reference</a></p>
   */
  class JiraSelectedQuestionConfiguration
  {
  public:
    AWS_WELLARCHITECTED_API JiraSelectedQuestionConfiguration() = default;
    AWS_WELLARCHITECTED_API JiraSelectedQuestionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API JiraSelectedQuestionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline const Aws::Vector<SelectedPillar>& GetSelectedPillars() const { return m_selectedPillars; }
    inline bool SelectedPillarsHasBeenSet() const { return m_selectedPillarsHasBeenSet; }
    template<typename SelectedPillarsT = Aws::Vector<SelectedPillar>>
    void SetSelectedPillars(SelectedPillarsT&& value) { m_selectedPillarsHasBeenSet = true; m_selectedPillars = std::forward<SelectedPillarsT>(value); }
    template<typename SelectedPillarsT = Aws::Vector<SelectedPillar>>
    JiraSelectedQuestionConfiguration& WithSelectedPillars(SelectedPillarsT&& value) { SetSelectedPillars(std::forward<SelectedPillarsT>(value)); return *this;}
    template<typename SelectedPillarsT = SelectedPillar>
    JiraSelectedQuestionConfiguration& AddSelectedPillars(SelectedPillarsT&& value) { m_selectedPillarsHasBeenSet = true; m_selectedPillars.emplace_back(std::forward<SelectedPillarsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SelectedPillar> m_selectedPillars;
    bool m_selectedPillarsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
