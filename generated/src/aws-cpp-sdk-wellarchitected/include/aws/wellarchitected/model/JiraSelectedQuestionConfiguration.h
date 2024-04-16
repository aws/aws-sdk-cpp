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
    AWS_WELLARCHITECTED_API JiraSelectedQuestionConfiguration();
    AWS_WELLARCHITECTED_API JiraSelectedQuestionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API JiraSelectedQuestionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline const Aws::Vector<SelectedPillar>& GetSelectedPillars() const{ return m_selectedPillars; }

    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline bool SelectedPillarsHasBeenSet() const { return m_selectedPillarsHasBeenSet; }

    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline void SetSelectedPillars(const Aws::Vector<SelectedPillar>& value) { m_selectedPillarsHasBeenSet = true; m_selectedPillars = value; }

    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline void SetSelectedPillars(Aws::Vector<SelectedPillar>&& value) { m_selectedPillarsHasBeenSet = true; m_selectedPillars = std::move(value); }

    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline JiraSelectedQuestionConfiguration& WithSelectedPillars(const Aws::Vector<SelectedPillar>& value) { SetSelectedPillars(value); return *this;}

    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline JiraSelectedQuestionConfiguration& WithSelectedPillars(Aws::Vector<SelectedPillar>&& value) { SetSelectedPillars(std::move(value)); return *this;}

    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline JiraSelectedQuestionConfiguration& AddSelectedPillars(const SelectedPillar& value) { m_selectedPillarsHasBeenSet = true; m_selectedPillars.push_back(value); return *this; }

    /**
     * <p>Selected pillars in the workload.</p>
     */
    inline JiraSelectedQuestionConfiguration& AddSelectedPillars(SelectedPillar&& value) { m_selectedPillarsHasBeenSet = true; m_selectedPillars.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SelectedPillar> m_selectedPillars;
    bool m_selectedPillarsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
