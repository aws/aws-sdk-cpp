/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Information about a cell.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CellOutput">AWS
   * API Reference</a></p>
   */
  class CellOutput
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CellOutput() = default;
    AWS_ROUTE53RECOVERYREADINESS_API CellOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API CellOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline const Aws::String& GetCellArn() const { return m_cellArn; }
    inline bool CellArnHasBeenSet() const { return m_cellArnHasBeenSet; }
    template<typename CellArnT = Aws::String>
    void SetCellArn(CellArnT&& value) { m_cellArnHasBeenSet = true; m_cellArn = std::forward<CellArnT>(value); }
    template<typename CellArnT = Aws::String>
    CellOutput& WithCellArn(CellArnT&& value) { SetCellArn(std::forward<CellArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cell.</p>
     */
    inline const Aws::String& GetCellName() const { return m_cellName; }
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }
    template<typename CellNameT = Aws::String>
    void SetCellName(CellNameT&& value) { m_cellNameHasBeenSet = true; m_cellName = std::forward<CellNameT>(value); }
    template<typename CellNameT = Aws::String>
    CellOutput& WithCellName(CellNameT&& value) { SetCellName(std::forward<CellNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cell ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const { return m_cells; }
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }
    template<typename CellsT = Aws::Vector<Aws::String>>
    void SetCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells = std::forward<CellsT>(value); }
    template<typename CellsT = Aws::Vector<Aws::String>>
    CellOutput& WithCells(CellsT&& value) { SetCells(std::forward<CellsT>(value)); return *this;}
    template<typename CellsT = Aws::String>
    CellOutput& AddCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells.emplace_back(std::forward<CellsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentReadinessScopes() const { return m_parentReadinessScopes; }
    inline bool ParentReadinessScopesHasBeenSet() const { return m_parentReadinessScopesHasBeenSet; }
    template<typename ParentReadinessScopesT = Aws::Vector<Aws::String>>
    void SetParentReadinessScopes(ParentReadinessScopesT&& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes = std::forward<ParentReadinessScopesT>(value); }
    template<typename ParentReadinessScopesT = Aws::Vector<Aws::String>>
    CellOutput& WithParentReadinessScopes(ParentReadinessScopesT&& value) { SetParentReadinessScopes(std::forward<ParentReadinessScopesT>(value)); return *this;}
    template<typename ParentReadinessScopesT = Aws::String>
    CellOutput& AddParentReadinessScopes(ParentReadinessScopesT&& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes.emplace_back(std::forward<ParentReadinessScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags on the resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CellOutput& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CellOutput& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_cellArn;
    bool m_cellArnHasBeenSet = false;

    Aws::String m_cellName;
    bool m_cellNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet = false;

    Aws::Vector<Aws::String> m_parentReadinessScopes;
    bool m_parentReadinessScopesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
