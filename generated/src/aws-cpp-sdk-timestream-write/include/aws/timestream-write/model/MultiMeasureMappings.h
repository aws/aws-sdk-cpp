/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/MultiMeasureAttributeMapping.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/MultiMeasureMappings">AWS
   * API Reference</a></p>
   */
  class MultiMeasureMappings
  {
  public:
    AWS_TIMESTREAMWRITE_API MultiMeasureMappings() = default;
    AWS_TIMESTREAMWRITE_API MultiMeasureMappings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MultiMeasureMappings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetTargetMultiMeasureName() const { return m_targetMultiMeasureName; }
    inline bool TargetMultiMeasureNameHasBeenSet() const { return m_targetMultiMeasureNameHasBeenSet; }
    template<typename TargetMultiMeasureNameT = Aws::String>
    void SetTargetMultiMeasureName(TargetMultiMeasureNameT&& value) { m_targetMultiMeasureNameHasBeenSet = true; m_targetMultiMeasureName = std::forward<TargetMultiMeasureNameT>(value); }
    template<typename TargetMultiMeasureNameT = Aws::String>
    MultiMeasureMappings& WithTargetMultiMeasureName(TargetMultiMeasureNameT&& value) { SetTargetMultiMeasureName(std::forward<TargetMultiMeasureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<MultiMeasureAttributeMapping>& GetMultiMeasureAttributeMappings() const { return m_multiMeasureAttributeMappings; }
    inline bool MultiMeasureAttributeMappingsHasBeenSet() const { return m_multiMeasureAttributeMappingsHasBeenSet; }
    template<typename MultiMeasureAttributeMappingsT = Aws::Vector<MultiMeasureAttributeMapping>>
    void SetMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = std::forward<MultiMeasureAttributeMappingsT>(value); }
    template<typename MultiMeasureAttributeMappingsT = Aws::Vector<MultiMeasureAttributeMapping>>
    MultiMeasureMappings& WithMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { SetMultiMeasureAttributeMappings(std::forward<MultiMeasureAttributeMappingsT>(value)); return *this;}
    template<typename MultiMeasureAttributeMappingsT = MultiMeasureAttributeMapping>
    MultiMeasureMappings& AddMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.emplace_back(std::forward<MultiMeasureAttributeMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_targetMultiMeasureName;
    bool m_targetMultiMeasureNameHasBeenSet = false;

    Aws::Vector<MultiMeasureAttributeMapping> m_multiMeasureAttributeMappings;
    bool m_multiMeasureAttributeMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
