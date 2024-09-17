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
    AWS_PIPES_API MultiMeasureMapping();
    AWS_PIPES_API MultiMeasureMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API MultiMeasureMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the multiple measurements per record (multi-measure).</p>
     */
    inline const Aws::String& GetMultiMeasureName() const{ return m_multiMeasureName; }
    inline bool MultiMeasureNameHasBeenSet() const { return m_multiMeasureNameHasBeenSet; }
    inline void SetMultiMeasureName(const Aws::String& value) { m_multiMeasureNameHasBeenSet = true; m_multiMeasureName = value; }
    inline void SetMultiMeasureName(Aws::String&& value) { m_multiMeasureNameHasBeenSet = true; m_multiMeasureName = std::move(value); }
    inline void SetMultiMeasureName(const char* value) { m_multiMeasureNameHasBeenSet = true; m_multiMeasureName.assign(value); }
    inline MultiMeasureMapping& WithMultiMeasureName(const Aws::String& value) { SetMultiMeasureName(value); return *this;}
    inline MultiMeasureMapping& WithMultiMeasureName(Aws::String&& value) { SetMultiMeasureName(std::move(value)); return *this;}
    inline MultiMeasureMapping& WithMultiMeasureName(const char* value) { SetMultiMeasureName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mappings that represent multiple source event fields mapped to measures in
     * the same Timestream for LiveAnalytics record.</p>
     */
    inline const Aws::Vector<MultiMeasureAttributeMapping>& GetMultiMeasureAttributeMappings() const{ return m_multiMeasureAttributeMappings; }
    inline bool MultiMeasureAttributeMappingsHasBeenSet() const { return m_multiMeasureAttributeMappingsHasBeenSet; }
    inline void SetMultiMeasureAttributeMappings(const Aws::Vector<MultiMeasureAttributeMapping>& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = value; }
    inline void SetMultiMeasureAttributeMappings(Aws::Vector<MultiMeasureAttributeMapping>&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = std::move(value); }
    inline MultiMeasureMapping& WithMultiMeasureAttributeMappings(const Aws::Vector<MultiMeasureAttributeMapping>& value) { SetMultiMeasureAttributeMappings(value); return *this;}
    inline MultiMeasureMapping& WithMultiMeasureAttributeMappings(Aws::Vector<MultiMeasureAttributeMapping>&& value) { SetMultiMeasureAttributeMappings(std::move(value)); return *this;}
    inline MultiMeasureMapping& AddMultiMeasureAttributeMappings(const MultiMeasureAttributeMapping& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.push_back(value); return *this; }
    inline MultiMeasureMapping& AddMultiMeasureAttributeMappings(MultiMeasureAttributeMapping&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.push_back(std::move(value)); return *this; }
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
