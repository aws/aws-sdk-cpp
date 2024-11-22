/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/ExportFilterPropertyAttributes.h>
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
   * <p>Specifies whihc properties of that label should be included in the
   * export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ExportFilterElement">AWS
   * API Reference</a></p>
   */
  class ExportFilterElement
  {
  public:
    AWS_NEPTUNEGRAPH_API ExportFilterElement();
    AWS_NEPTUNEGRAPH_API ExportFilterElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API ExportFilterElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Each property is defined by a key-value pair, where the key is the desired
     * output property name (e.g. "name"), and the value is an object.</p>
     */
    inline const Aws::Map<Aws::String, ExportFilterPropertyAttributes>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, ExportFilterPropertyAttributes>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, ExportFilterPropertyAttributes>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline ExportFilterElement& WithProperties(const Aws::Map<Aws::String, ExportFilterPropertyAttributes>& value) { SetProperties(value); return *this;}
    inline ExportFilterElement& WithProperties(Aws::Map<Aws::String, ExportFilterPropertyAttributes>&& value) { SetProperties(std::move(value)); return *this;}
    inline ExportFilterElement& AddProperties(const Aws::String& key, const ExportFilterPropertyAttributes& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline ExportFilterElement& AddProperties(Aws::String&& key, const ExportFilterPropertyAttributes& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline ExportFilterElement& AddProperties(const Aws::String& key, ExportFilterPropertyAttributes&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline ExportFilterElement& AddProperties(Aws::String&& key, ExportFilterPropertyAttributes&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline ExportFilterElement& AddProperties(const char* key, ExportFilterPropertyAttributes&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline ExportFilterElement& AddProperties(const char* key, const ExportFilterPropertyAttributes& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, ExportFilterPropertyAttributes> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
