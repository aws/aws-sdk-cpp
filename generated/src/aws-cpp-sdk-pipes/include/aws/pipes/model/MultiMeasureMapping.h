/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/MultiMeasureAttributeMapping.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>Maps multiple measures from the source event to the same Timestream for
   * LiveAnalytics record.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
   * Timestream for LiveAnalytics concepts</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/MultiMeasureMapping">AWS
   * API Reference</a></p>
   */
  class MultiMeasureMapping
  {
  public:
    AWS_PIPES_API MultiMeasureMapping() = default;
    AWS_PIPES_API MultiMeasureMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API MultiMeasureMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the multiple measurements per record (multi-measure).</p>
     */
    inline const Aws::String& GetMultiMeasureName() const { return m_multiMeasureName; }
    inline bool MultiMeasureNameHasBeenSet() const { return m_multiMeasureNameHasBeenSet; }
    template<typename MultiMeasureNameT = Aws::String>
    void SetMultiMeasureName(MultiMeasureNameT&& value) { m_multiMeasureNameHasBeenSet = true; m_multiMeasureName = std::forward<MultiMeasureNameT>(value); }
    template<typename MultiMeasureNameT = Aws::String>
    MultiMeasureMapping& WithMultiMeasureName(MultiMeasureNameT&& value) { SetMultiMeasureName(std::forward<MultiMeasureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mappings that represent multiple source event fields mapped to measures in
     * the same Timestream for LiveAnalytics record.</p>
     */
    inline const Aws::Vector<MultiMeasureAttributeMapping>& GetMultiMeasureAttributeMappings() const { return m_multiMeasureAttributeMappings; }
    inline bool MultiMeasureAttributeMappingsHasBeenSet() const { return m_multiMeasureAttributeMappingsHasBeenSet; }
    template<typename MultiMeasureAttributeMappingsT = Aws::Vector<MultiMeasureAttributeMapping>>
    void SetMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = std::forward<MultiMeasureAttributeMappingsT>(value); }
    template<typename MultiMeasureAttributeMappingsT = Aws::Vector<MultiMeasureAttributeMapping>>
    MultiMeasureMapping& WithMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { SetMultiMeasureAttributeMappings(std::forward<MultiMeasureAttributeMappingsT>(value)); return *this;}
    template<typename MultiMeasureAttributeMappingsT = MultiMeasureAttributeMapping>
    MultiMeasureMapping& AddMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.emplace_back(std::forward<MultiMeasureAttributeMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_multiMeasureName;
    bool m_multiMeasureNameHasBeenSet = false;

    Aws::Vector<MultiMeasureAttributeMapping> m_multiMeasureAttributeMappings;
    bool m_multiMeasureAttributeMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
