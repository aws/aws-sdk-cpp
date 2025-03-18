/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/ExportFilterElement.h>
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
namespace NeptuneGraph
{
namespace Model
{

  /**
   * <p>This is the top-level field for specifying vertex or edge filters. If the
   * ExportFilter is not provided, then all properties for all labels will be
   * exported. If the ExportFilter is provided but is an empty object, then no data
   * will be exported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ExportFilter">AWS
   * API Reference</a></p>
   */
  class ExportFilter
  {
  public:
    AWS_NEPTUNEGRAPH_API ExportFilter() = default;
    AWS_NEPTUNEGRAPH_API ExportFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API ExportFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Used to specify filters on a per-label basis for vertices. This allows you to
     * control which vertex labels and properties are included in the export.</p>
     */
    inline const Aws::Map<Aws::String, ExportFilterElement>& GetVertexFilter() const { return m_vertexFilter; }
    inline bool VertexFilterHasBeenSet() const { return m_vertexFilterHasBeenSet; }
    template<typename VertexFilterT = Aws::Map<Aws::String, ExportFilterElement>>
    void SetVertexFilter(VertexFilterT&& value) { m_vertexFilterHasBeenSet = true; m_vertexFilter = std::forward<VertexFilterT>(value); }
    template<typename VertexFilterT = Aws::Map<Aws::String, ExportFilterElement>>
    ExportFilter& WithVertexFilter(VertexFilterT&& value) { SetVertexFilter(std::forward<VertexFilterT>(value)); return *this;}
    template<typename VertexFilterKeyT = Aws::String, typename VertexFilterValueT = ExportFilterElement>
    ExportFilter& AddVertexFilter(VertexFilterKeyT&& key, VertexFilterValueT&& value) {
      m_vertexFilterHasBeenSet = true; m_vertexFilter.emplace(std::forward<VertexFilterKeyT>(key), std::forward<VertexFilterValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Used to specify filters on a per-label basis for edges. This allows you to
     * control which edge labels and properties are included in the export.</p>
     */
    inline const Aws::Map<Aws::String, ExportFilterElement>& GetEdgeFilter() const { return m_edgeFilter; }
    inline bool EdgeFilterHasBeenSet() const { return m_edgeFilterHasBeenSet; }
    template<typename EdgeFilterT = Aws::Map<Aws::String, ExportFilterElement>>
    void SetEdgeFilter(EdgeFilterT&& value) { m_edgeFilterHasBeenSet = true; m_edgeFilter = std::forward<EdgeFilterT>(value); }
    template<typename EdgeFilterT = Aws::Map<Aws::String, ExportFilterElement>>
    ExportFilter& WithEdgeFilter(EdgeFilterT&& value) { SetEdgeFilter(std::forward<EdgeFilterT>(value)); return *this;}
    template<typename EdgeFilterKeyT = Aws::String, typename EdgeFilterValueT = ExportFilterElement>
    ExportFilter& AddEdgeFilter(EdgeFilterKeyT&& key, EdgeFilterValueT&& value) {
      m_edgeFilterHasBeenSet = true; m_edgeFilter.emplace(std::forward<EdgeFilterKeyT>(key), std::forward<EdgeFilterValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, ExportFilterElement> m_vertexFilter;
    bool m_vertexFilterHasBeenSet = false;

    Aws::Map<Aws::String, ExportFilterElement> m_edgeFilter;
    bool m_edgeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
