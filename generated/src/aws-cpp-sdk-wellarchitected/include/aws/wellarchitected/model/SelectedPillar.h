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
    AWS_WELLARCHITECTED_API SelectedPillar();
    AWS_WELLARCHITECTED_API SelectedPillar(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API SelectedPillar& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline SelectedPillar& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline SelectedPillar& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline SelectedPillar& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedQuestionIds() const{ return m_selectedQuestionIds; }

    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline bool SelectedQuestionIdsHasBeenSet() const { return m_selectedQuestionIdsHasBeenSet; }

    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline void SetSelectedQuestionIds(const Aws::Vector<Aws::String>& value) { m_selectedQuestionIdsHasBeenSet = true; m_selectedQuestionIds = value; }

    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline void SetSelectedQuestionIds(Aws::Vector<Aws::String>&& value) { m_selectedQuestionIdsHasBeenSet = true; m_selectedQuestionIds = std::move(value); }

    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline SelectedPillar& WithSelectedQuestionIds(const Aws::Vector<Aws::String>& value) { SetSelectedQuestionIds(value); return *this;}

    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline SelectedPillar& WithSelectedQuestionIds(Aws::Vector<Aws::String>&& value) { SetSelectedQuestionIds(std::move(value)); return *this;}

    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline SelectedPillar& AddSelectedQuestionIds(const Aws::String& value) { m_selectedQuestionIdsHasBeenSet = true; m_selectedQuestionIds.push_back(value); return *this; }

    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline SelectedPillar& AddSelectedQuestionIds(Aws::String&& value) { m_selectedQuestionIdsHasBeenSet = true; m_selectedQuestionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Selected question IDs in the selected pillar.</p>
     */
    inline SelectedPillar& AddSelectedQuestionIds(const char* value) { m_selectedQuestionIdsHasBeenSet = true; m_selectedQuestionIds.push_back(value); return *this; }

  private:

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedQuestionIds;
    bool m_selectedQuestionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
