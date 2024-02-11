/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>

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
   * <p>Specifies the number of dimensions for vector embeddings loaded into the
   * graph. Max = 65535</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/VectorSearchConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorSearchConfiguration
  {
  public:
    AWS_NEPTUNEGRAPH_API VectorSearchConfiguration();
    AWS_NEPTUNEGRAPH_API VectorSearchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API VectorSearchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of dimensions.</p>
     */
    inline int GetDimension() const{ return m_dimension; }

    /**
     * <p>The number of dimensions.</p>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>The number of dimensions.</p>
     */
    inline void SetDimension(int value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>The number of dimensions.</p>
     */
    inline VectorSearchConfiguration& WithDimension(int value) { SetDimension(value); return *this;}

  private:

    int m_dimension;
    bool m_dimensionHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
