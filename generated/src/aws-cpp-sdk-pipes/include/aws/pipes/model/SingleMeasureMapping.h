/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/MeasureValueType.h>
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
   * <p>Maps a single source data field to a single record in the specified
   * Timestream for LiveAnalytics table.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
   * Timestream for LiveAnalytics concepts</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/SingleMeasureMapping">AWS
   * API Reference</a></p>
   */
  class SingleMeasureMapping
  {
  public:
    AWS_PIPES_API SingleMeasureMapping();
    AWS_PIPES_API SingleMeasureMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API SingleMeasureMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline const Aws::String& GetMeasureValue() const{ return m_measureValue; }

    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline bool MeasureValueHasBeenSet() const { return m_measureValueHasBeenSet; }

    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline void SetMeasureValue(const Aws::String& value) { m_measureValueHasBeenSet = true; m_measureValue = value; }

    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline void SetMeasureValue(Aws::String&& value) { m_measureValueHasBeenSet = true; m_measureValue = std::move(value); }

    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline void SetMeasureValue(const char* value) { m_measureValueHasBeenSet = true; m_measureValue.assign(value); }

    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline SingleMeasureMapping& WithMeasureValue(const Aws::String& value) { SetMeasureValue(value); return *this;}

    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline SingleMeasureMapping& WithMeasureValue(Aws::String&& value) { SetMeasureValue(std::move(value)); return *this;}

    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline SingleMeasureMapping& WithMeasureValue(const char* value) { SetMeasureValue(value); return *this;}


    /**
     * <p>Data type of the source field.</p>
     */
    inline const MeasureValueType& GetMeasureValueType() const{ return m_measureValueType; }

    /**
     * <p>Data type of the source field.</p>
     */
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }

    /**
     * <p>Data type of the source field.</p>
     */
    inline void SetMeasureValueType(const MeasureValueType& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }

    /**
     * <p>Data type of the source field.</p>
     */
    inline void SetMeasureValueType(MeasureValueType&& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = std::move(value); }

    /**
     * <p>Data type of the source field.</p>
     */
    inline SingleMeasureMapping& WithMeasureValueType(const MeasureValueType& value) { SetMeasureValueType(value); return *this;}

    /**
     * <p>Data type of the source field.</p>
     */
    inline SingleMeasureMapping& WithMeasureValueType(MeasureValueType&& value) { SetMeasureValueType(std::move(value)); return *this;}


    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline const Aws::String& GetMeasureName() const{ return m_measureName; }

    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline bool MeasureNameHasBeenSet() const { return m_measureNameHasBeenSet; }

    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline void SetMeasureName(const Aws::String& value) { m_measureNameHasBeenSet = true; m_measureName = value; }

    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline void SetMeasureName(Aws::String&& value) { m_measureNameHasBeenSet = true; m_measureName = std::move(value); }

    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline void SetMeasureName(const char* value) { m_measureNameHasBeenSet = true; m_measureName.assign(value); }

    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline SingleMeasureMapping& WithMeasureName(const Aws::String& value) { SetMeasureName(value); return *this;}

    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline SingleMeasureMapping& WithMeasureName(Aws::String&& value) { SetMeasureName(std::move(value)); return *this;}

    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline SingleMeasureMapping& WithMeasureName(const char* value) { SetMeasureName(value); return *this;}

  private:

    Aws::String m_measureValue;
    bool m_measureValueHasBeenSet = false;

    MeasureValueType m_measureValueType;
    bool m_measureValueTypeHasBeenSet = false;

    Aws::String m_measureName;
    bool m_measureNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
