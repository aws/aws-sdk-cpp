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
    AWS_TIMESTREAMWRITE_API MultiMeasureMappings();
    AWS_TIMESTREAMWRITE_API MultiMeasureMappings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MultiMeasureMappings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetTargetMultiMeasureName() const{ return m_targetMultiMeasureName; }

    /**
     * <p/>
     */
    inline bool TargetMultiMeasureNameHasBeenSet() const { return m_targetMultiMeasureNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetMultiMeasureName(const Aws::String& value) { m_targetMultiMeasureNameHasBeenSet = true; m_targetMultiMeasureName = value; }

    /**
     * <p/>
     */
    inline void SetTargetMultiMeasureName(Aws::String&& value) { m_targetMultiMeasureNameHasBeenSet = true; m_targetMultiMeasureName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetTargetMultiMeasureName(const char* value) { m_targetMultiMeasureNameHasBeenSet = true; m_targetMultiMeasureName.assign(value); }

    /**
     * <p/>
     */
    inline MultiMeasureMappings& WithTargetMultiMeasureName(const Aws::String& value) { SetTargetMultiMeasureName(value); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureMappings& WithTargetMultiMeasureName(Aws::String&& value) { SetTargetMultiMeasureName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureMappings& WithTargetMultiMeasureName(const char* value) { SetTargetMultiMeasureName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<MultiMeasureAttributeMapping>& GetMultiMeasureAttributeMappings() const{ return m_multiMeasureAttributeMappings; }

    /**
     * <p/>
     */
    inline bool MultiMeasureAttributeMappingsHasBeenSet() const { return m_multiMeasureAttributeMappingsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMultiMeasureAttributeMappings(const Aws::Vector<MultiMeasureAttributeMapping>& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = value; }

    /**
     * <p/>
     */
    inline void SetMultiMeasureAttributeMappings(Aws::Vector<MultiMeasureAttributeMapping>&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = std::move(value); }

    /**
     * <p/>
     */
    inline MultiMeasureMappings& WithMultiMeasureAttributeMappings(const Aws::Vector<MultiMeasureAttributeMapping>& value) { SetMultiMeasureAttributeMappings(value); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureMappings& WithMultiMeasureAttributeMappings(Aws::Vector<MultiMeasureAttributeMapping>&& value) { SetMultiMeasureAttributeMappings(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureMappings& AddMultiMeasureAttributeMappings(const MultiMeasureAttributeMapping& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline MultiMeasureMappings& AddMultiMeasureAttributeMappings(MultiMeasureAttributeMapping&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_targetMultiMeasureName;
    bool m_targetMultiMeasureNameHasBeenSet = false;

    Aws::Vector<MultiMeasureAttributeMapping> m_multiMeasureAttributeMappings;
    bool m_multiMeasureAttributeMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
