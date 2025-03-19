/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>An edge structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/EdgeStructure">AWS
   * API Reference</a></p>
   */
  class EdgeStructure
  {
  public:
    AWS_NEPTUNEDATA_API EdgeStructure() = default;
    AWS_NEPTUNEDATA_API EdgeStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API EdgeStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of edges that have this specific structure.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline EdgeStructure& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of edge properties present in this specific structure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeProperties() const { return m_edgeProperties; }
    inline bool EdgePropertiesHasBeenSet() const { return m_edgePropertiesHasBeenSet; }
    template<typename EdgePropertiesT = Aws::Vector<Aws::String>>
    void SetEdgeProperties(EdgePropertiesT&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties = std::forward<EdgePropertiesT>(value); }
    template<typename EdgePropertiesT = Aws::Vector<Aws::String>>
    EdgeStructure& WithEdgeProperties(EdgePropertiesT&& value) { SetEdgeProperties(std::forward<EdgePropertiesT>(value)); return *this;}
    template<typename EdgePropertiesT = Aws::String>
    EdgeStructure& AddEdgeProperties(EdgePropertiesT&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.emplace_back(std::forward<EdgePropertiesT>(value)); return *this; }
    ///@}
  private:

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeProperties;
    bool m_edgePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
