/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/DateTime.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A structure that describes a property of a resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ResourceProperty">AWS
   * API Reference</a></p>
   */
  class ResourceProperty
  {
  public:
    AWS_RESOURCEEXPLORER2_API ResourceProperty() = default;
    AWS_RESOURCEEXPLORER2_API ResourceProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API ResourceProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about this property. The content of this field is a JSON object that
     * varies based on the resource type.</p>
     */
    inline Aws::Utils::DocumentView GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::Document>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::Document>
    ResourceProperty& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the information about this resource property was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReportedAt() const { return m_lastReportedAt; }
    inline bool LastReportedAtHasBeenSet() const { return m_lastReportedAtHasBeenSet; }
    template<typename LastReportedAtT = Aws::Utils::DateTime>
    void SetLastReportedAt(LastReportedAtT&& value) { m_lastReportedAtHasBeenSet = true; m_lastReportedAt = std::forward<LastReportedAtT>(value); }
    template<typename LastReportedAtT = Aws::Utils::DateTime>
    ResourceProperty& WithLastReportedAt(LastReportedAtT&& value) { SetLastReportedAt(std::forward<LastReportedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this property of the resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResourceProperty& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_data;
    bool m_dataHasBeenSet = false;

    Aws::Utils::DateTime m_lastReportedAt{};
    bool m_lastReportedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
