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
    AWS_NEPTUNEDATA_API EdgeStructure();
    AWS_NEPTUNEDATA_API EdgeStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API EdgeStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of edges that have this specific structure.</p>
     */
    inline long long GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline EdgeStructure& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of edge properties present in this specific structure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeProperties() const{ return m_edgeProperties; }
    inline bool EdgePropertiesHasBeenSet() const { return m_edgePropertiesHasBeenSet; }
    inline void SetEdgeProperties(const Aws::Vector<Aws::String>& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties = value; }
    inline void SetEdgeProperties(Aws::Vector<Aws::String>&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties = std::move(value); }
    inline EdgeStructure& WithEdgeProperties(const Aws::Vector<Aws::String>& value) { SetEdgeProperties(value); return *this;}
    inline EdgeStructure& WithEdgeProperties(Aws::Vector<Aws::String>&& value) { SetEdgeProperties(std::move(value)); return *this;}
    inline EdgeStructure& AddEdgeProperties(const Aws::String& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.push_back(value); return *this; }
    inline EdgeStructure& AddEdgeProperties(Aws::String&& value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.push_back(std::move(value)); return *this; }
    inline EdgeStructure& AddEdgeProperties(const char* value) { m_edgePropertiesHasBeenSet = true; m_edgeProperties.push_back(value); return *this; }
    ///@}
  private:

    long long m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeProperties;
    bool m_edgePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
