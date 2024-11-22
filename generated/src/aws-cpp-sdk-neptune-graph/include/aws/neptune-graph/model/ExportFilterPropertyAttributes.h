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
    AWS_NEPTUNEGRAPH_API ExportFilterPropertyAttributes();
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
    inline const Aws::String& GetOutputType() const{ return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    inline void SetOutputType(const Aws::String& value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline void SetOutputType(Aws::String&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::move(value); }
    inline void SetOutputType(const char* value) { m_outputTypeHasBeenSet = true; m_outputType.assign(value); }
    inline ExportFilterPropertyAttributes& WithOutputType(const Aws::String& value) { SetOutputType(value); return *this;}
    inline ExportFilterPropertyAttributes& WithOutputType(Aws::String&& value) { SetOutputType(std::move(value)); return *this;}
    inline ExportFilterPropertyAttributes& WithOutputType(const char* value) { SetOutputType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property as it exists in the original graph data. If not
     * provided, it is assumed that the key matches the desired sourcePropertyName.</p>
     */
    inline const Aws::String& GetSourcePropertyName() const{ return m_sourcePropertyName; }
    inline bool SourcePropertyNameHasBeenSet() const { return m_sourcePropertyNameHasBeenSet; }
    inline void SetSourcePropertyName(const Aws::String& value) { m_sourcePropertyNameHasBeenSet = true; m_sourcePropertyName = value; }
    inline void SetSourcePropertyName(Aws::String&& value) { m_sourcePropertyNameHasBeenSet = true; m_sourcePropertyName = std::move(value); }
    inline void SetSourcePropertyName(const char* value) { m_sourcePropertyNameHasBeenSet = true; m_sourcePropertyName.assign(value); }
    inline ExportFilterPropertyAttributes& WithSourcePropertyName(const Aws::String& value) { SetSourcePropertyName(value); return *this;}
    inline ExportFilterPropertyAttributes& WithSourcePropertyName(Aws::String&& value) { SetSourcePropertyName(std::move(value)); return *this;}
    inline ExportFilterPropertyAttributes& WithSourcePropertyName(const char* value) { SetSourcePropertyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle properties that have multiple values. Can be either
     * <code>TO_LIST</code> to export all values as a list, or <code>PICK_FIRST</code>
     * to export the first value encountered. If not specified, the default value is
     * <code>PICK_FIRST</code>.</p>
     */
    inline const MultiValueHandlingType& GetMultiValueHandling() const{ return m_multiValueHandling; }
    inline bool MultiValueHandlingHasBeenSet() const { return m_multiValueHandlingHasBeenSet; }
    inline void SetMultiValueHandling(const MultiValueHandlingType& value) { m_multiValueHandlingHasBeenSet = true; m_multiValueHandling = value; }
    inline void SetMultiValueHandling(MultiValueHandlingType&& value) { m_multiValueHandlingHasBeenSet = true; m_multiValueHandling = std::move(value); }
    inline ExportFilterPropertyAttributes& WithMultiValueHandling(const MultiValueHandlingType& value) { SetMultiValueHandling(value); return *this;}
    inline ExportFilterPropertyAttributes& WithMultiValueHandling(MultiValueHandlingType&& value) { SetMultiValueHandling(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputType;
    bool m_outputTypeHasBeenSet = false;

    Aws::String m_sourcePropertyName;
    bool m_sourcePropertyNameHasBeenSet = false;

    MultiValueHandlingType m_multiValueHandling;
    bool m_multiValueHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
