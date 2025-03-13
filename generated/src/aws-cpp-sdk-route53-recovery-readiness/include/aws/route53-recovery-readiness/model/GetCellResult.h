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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53RecoveryReadiness
{
namespace Model
{
  class GetCellResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetCellResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API GetCellResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetCellResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cell.</p>
     */
    inline const Aws::String& GetCellArn() const { return m_cellArn; }
    template<typename CellArnT = Aws::String>
    void SetCellArn(CellArnT&& value) { m_cellArnHasBeenSet = true; m_cellArn = std::forward<CellArnT>(value); }
    template<typename CellArnT = Aws::String>
    GetCellResult& WithCellArn(CellArnT&& value) { SetCellArn(std::forward<CellArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cell.</p>
     */
    inline const Aws::String& GetCellName() const { return m_cellName; }
    template<typename CellNameT = Aws::String>
    void SetCellName(CellNameT&& value) { m_cellNameHasBeenSet = true; m_cellName = std::forward<CellNameT>(value); }
    template<typename CellNameT = Aws::String>
    GetCellResult& WithCellName(CellNameT&& value) { SetCellName(std::forward<CellNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cell ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const { return m_cells; }
    template<typename CellsT = Aws::Vector<Aws::String>>
    void SetCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells = std::forward<CellsT>(value); }
    template<typename CellsT = Aws::Vector<Aws::String>>
    GetCellResult& WithCells(CellsT&& value) { SetCells(std::forward<CellsT>(value)); return *this;}
    template<typename CellsT = Aws::String>
    GetCellResult& AddCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells.emplace_back(std::forward<CellsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The readiness scope for the cell, which can be a cell Amazon Resource Name
     * (ARN) or a recovery group ARN. This is a list but currently can have only one
     * element.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentReadinessScopes() const { return m_parentReadinessScopes; }
    template<typename ParentReadinessScopesT = Aws::Vector<Aws::String>>
    void SetParentReadinessScopes(ParentReadinessScopesT&& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes = std::forward<ParentReadinessScopesT>(value); }
    template<typename ParentReadinessScopesT = Aws::Vector<Aws::String>>
    GetCellResult& WithParentReadinessScopes(ParentReadinessScopesT&& value) { SetParentReadinessScopes(std::forward<ParentReadinessScopesT>(value)); return *this;}
    template<typename ParentReadinessScopesT = Aws::String>
    GetCellResult& AddParentReadinessScopes(ParentReadinessScopesT&& value) { m_parentReadinessScopesHasBeenSet = true; m_parentReadinessScopes.emplace_back(std::forward<ParentReadinessScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags on the resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetCellResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetCellResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCellResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
