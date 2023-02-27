/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/ScalarMeasureValueType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/MultiMeasureAttributeMapping">AWS
   * API Reference</a></p>
   */
  class MultiMeasureAttributeMapping
  {
  public:
    AWS_TIMESTREAMWRITE_API MultiMeasureAttributeMapping();
    AWS_TIMESTREAMWRITE_API MultiMeasureAttributeMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MultiMeasureAttributeMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetSourceColumn() const{ return m_sourceColumn; }

    /**
     * <p/>
     */
    inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSourceColumn(const Aws::String& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = value; }

    /**
     * <p/>
     */
    inline void SetSourceColumn(Aws::String&& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSourceColumn(const char* value) { m_sourceColumnHasBeenSet = true; m_sourceColumn.assign(value); }

    /**
     * <p/>
     */
    inline MultiMeasureAttributeMapping& WithSourceColumn(const Aws::String& value) { SetSourceColumn(value); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureAttributeMapping& WithSourceColumn(Aws::String&& value) { SetSourceColumn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureAttributeMapping& WithSourceColumn(const char* value) { SetSourceColumn(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetTargetMultiMeasureAttributeName() const{ return m_targetMultiMeasureAttributeName; }

    /**
     * <p/>
     */
    inline bool TargetMultiMeasureAttributeNameHasBeenSet() const { return m_targetMultiMeasureAttributeNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetMultiMeasureAttributeName(const Aws::String& value) { m_targetMultiMeasureAttributeNameHasBeenSet = true; m_targetMultiMeasureAttributeName = value; }

    /**
     * <p/>
     */
    inline void SetTargetMultiMeasureAttributeName(Aws::String&& value) { m_targetMultiMeasureAttributeNameHasBeenSet = true; m_targetMultiMeasureAttributeName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetTargetMultiMeasureAttributeName(const char* value) { m_targetMultiMeasureAttributeNameHasBeenSet = true; m_targetMultiMeasureAttributeName.assign(value); }

    /**
     * <p/>
     */
    inline MultiMeasureAttributeMapping& WithTargetMultiMeasureAttributeName(const Aws::String& value) { SetTargetMultiMeasureAttributeName(value); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureAttributeMapping& WithTargetMultiMeasureAttributeName(Aws::String&& value) { SetTargetMultiMeasureAttributeName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureAttributeMapping& WithTargetMultiMeasureAttributeName(const char* value) { SetTargetMultiMeasureAttributeName(value); return *this;}


    /**
     * <p/>
     */
    inline const ScalarMeasureValueType& GetMeasureValueType() const{ return m_measureValueType; }

    /**
     * <p/>
     */
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMeasureValueType(const ScalarMeasureValueType& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }

    /**
     * <p/>
     */
    inline void SetMeasureValueType(ScalarMeasureValueType&& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = std::move(value); }

    /**
     * <p/>
     */
    inline MultiMeasureAttributeMapping& WithMeasureValueType(const ScalarMeasureValueType& value) { SetMeasureValueType(value); return *this;}

    /**
     * <p/>
     */
    inline MultiMeasureAttributeMapping& WithMeasureValueType(ScalarMeasureValueType&& value) { SetMeasureValueType(std::move(value)); return *this;}

  private:

    Aws::String m_sourceColumn;
    bool m_sourceColumnHasBeenSet = false;

    Aws::String m_targetMultiMeasureAttributeName;
    bool m_targetMultiMeasureAttributeNameHasBeenSet = false;

    ScalarMeasureValueType m_measureValueType;
    bool m_measureValueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
