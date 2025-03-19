/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/MultiValueHandlingType.h>
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
   * <p>A structure representing a property's attributes. It is a map object of
   * outputType, sourcePropertyName and multiValueHandling.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ExportFilterPropertyAttributes">AWS
   * API Reference</a></p>
   */
  class ExportFilterPropertyAttributes
  {
  public:
    AWS_NEPTUNEGRAPH_API ExportFilterPropertyAttributes() = default;
    AWS_NEPTUNEGRAPH_API ExportFilterPropertyAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API ExportFilterPropertyAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the data type to use for the property in the exported data (e.g.
     * "String", "Int", "Float"). If a type is not provided, the export process will
     * determine the type. If a given property is present as multiple types (e.g. one
     * vertex has "height" stored as a double, and another edge has it stored as a
     * string), the type will be of Any type, otherwise, it will be the type of the
     * property as present in vertices.</p>
     */
    inline const Aws::String& GetOutputType() const { return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    template<typename OutputTypeT = Aws::String>
    void SetOutputType(OutputTypeT&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::forward<OutputTypeT>(value); }
    template<typename OutputTypeT = Aws::String>
    ExportFilterPropertyAttributes& WithOutputType(OutputTypeT&& value) { SetOutputType(std::forward<OutputTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property as it exists in the original graph data. If not
     * provided, it is assumed that the key matches the desired sourcePropertyName.</p>
     */
    inline const Aws::String& GetSourcePropertyName() const { return m_sourcePropertyName; }
    inline bool SourcePropertyNameHasBeenSet() const { return m_sourcePropertyNameHasBeenSet; }
    template<typename SourcePropertyNameT = Aws::String>
    void SetSourcePropertyName(SourcePropertyNameT&& value) { m_sourcePropertyNameHasBeenSet = true; m_sourcePropertyName = std::forward<SourcePropertyNameT>(value); }
    template<typename SourcePropertyNameT = Aws::String>
    ExportFilterPropertyAttributes& WithSourcePropertyName(SourcePropertyNameT&& value) { SetSourcePropertyName(std::forward<SourcePropertyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle properties that have multiple values. Can be either
     * <code>TO_LIST</code> to export all values as a list, or <code>PICK_FIRST</code>
     * to export the first value encountered. If not specified, the default value is
     * <code>PICK_FIRST</code>.</p>
     */
    inline MultiValueHandlingType GetMultiValueHandling() const { return m_multiValueHandling; }
    inline bool MultiValueHandlingHasBeenSet() const { return m_multiValueHandlingHasBeenSet; }
    inline void SetMultiValueHandling(MultiValueHandlingType value) { m_multiValueHandlingHasBeenSet = true; m_multiValueHandling = value; }
    inline ExportFilterPropertyAttributes& WithMultiValueHandling(MultiValueHandlingType value) { SetMultiValueHandling(value); return *this;}
    ///@}
  private:

    Aws::String m_outputType;
    bool m_outputTypeHasBeenSet = false;

    Aws::String m_sourcePropertyName;
    bool m_sourcePropertyNameHasBeenSet = false;

    MultiValueHandlingType m_multiValueHandling{MultiValueHandlingType::NOT_SET};
    bool m_multiValueHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
