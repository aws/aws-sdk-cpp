/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about an edge in a Neptune Analytics
   * graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/EdgeStructure">AWS
   * API Reference</a></p>
   */
  class EdgeStructure
  {
  public:
    AWS_NEPTUNEGRAPH_API EdgeStructure();
    AWS_NEPTUNEGRAPH_API EdgeStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API EdgeStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of instances of the edge in the graph.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The number of instances of the edge in the graph.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of instances of the edge in the graph.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of instances of the edge in the graph.</p>
     */
    inline EdgeStructure& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeProperties() const{ return m_edgeProperties; }

    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline bool EdgePropertiesHasBeenSet() const { return m_edgePropertiesHasBeenSet; }

    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline void SetEdgeProperties(const Aws::Vector<Aws::String>& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties = value; }

    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline void SetEdgeProperties(Aws::Vector<Aws::String>&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties = std::move(value); }

    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline EdgeStructure& WithEdgeProperties(const Aws::Vector<Aws::String>& value) { SetEdgeProperties(value); return *this;}

    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline EdgeStructure& WithEdgeProperties(Aws::Vector<Aws::String>&& value) { SetEdgeProperties(std::move(value)); return *this;}

    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline EdgeStructure& AddEdgeProperties(const Aws::String& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.push_back(value); return *this; }

    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline EdgeStructure& AddEdgeProperties(Aws::String&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the properties associated with the edge.</p>
     */
    inline EdgeStructure& AddEdgeProperties(const char* value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.push_back(value); return *this; }

  private:

    long long m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeProperties;
    bool m_edgePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
