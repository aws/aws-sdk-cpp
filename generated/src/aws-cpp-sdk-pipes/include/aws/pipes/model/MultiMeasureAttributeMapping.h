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
   * <p>A mapping of a source event data field to a measure in a Timestream for
   * LiveAnalytics record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/MultiMeasureAttributeMapping">AWS
   * API Reference</a></p>
   */
  class MultiMeasureAttributeMapping
  {
  public:
    AWS_PIPES_API MultiMeasureAttributeMapping();
    AWS_PIPES_API MultiMeasureAttributeMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API MultiMeasureAttributeMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dynamic path to the measurement attribute in the source event.</p>
     */
    inline const Aws::String& GetMeasureValue() const{ return m_measureValue; }
    inline bool MeasureValueHasBeenSet() const { return m_measureValueHasBeenSet; }
    inline void SetMeasureValue(const Aws::String& value) { m_measureValueHasBeenSet = true; m_measureValue = value; }
    inline void SetMeasureValue(Aws::String&& value) { m_measureValueHasBeenSet = true; m_measureValue = std::move(value); }
    inline void SetMeasureValue(const char* value) { m_measureValueHasBeenSet = true; m_measureValue.assign(value); }
    inline MultiMeasureAttributeMapping& WithMeasureValue(const Aws::String& value) { SetMeasureValue(value); return *this;}
    inline MultiMeasureAttributeMapping& WithMeasureValue(Aws::String&& value) { SetMeasureValue(std::move(value)); return *this;}
    inline MultiMeasureAttributeMapping& WithMeasureValue(const char* value) { SetMeasureValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data type of the measurement attribute in the source event.</p>
     */
    inline const MeasureValueType& GetMeasureValueType() const{ return m_measureValueType; }
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }
    inline void SetMeasureValueType(const MeasureValueType& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }
    inline void SetMeasureValueType(MeasureValueType&& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = std::move(value); }
    inline MultiMeasureAttributeMapping& WithMeasureValueType(const MeasureValueType& value) { SetMeasureValueType(value); return *this;}
    inline MultiMeasureAttributeMapping& WithMeasureValueType(MeasureValueType&& value) { SetMeasureValueType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target measure name to be used.</p>
     */
    inline const Aws::String& GetMultiMeasureAttributeName() const{ return m_multiMeasureAttributeName; }
    inline bool MultiMeasureAttributeNameHasBeenSet() const { return m_multiMeasureAttributeNameHasBeenSet; }
    inline void SetMultiMeasureAttributeName(const Aws::String& value) { m_multiMeasureAttributeNameHasBeenSet = true; m_multiMeasureAttributeName = value; }
    inline void SetMultiMeasureAttributeName(Aws::String&& value) { m_multiMeasureAttributeNameHasBeenSet = true; m_multiMeasureAttributeName = std::move(value); }
    inline void SetMultiMeasureAttributeName(const char* value) { m_multiMeasureAttributeNameHasBeenSet = true; m_multiMeasureAttributeName.assign(value); }
    inline MultiMeasureAttributeMapping& WithMultiMeasureAttributeName(const Aws::String& value) { SetMultiMeasureAttributeName(value); return *this;}
    inline MultiMeasureAttributeMapping& WithMultiMeasureAttributeName(Aws::String&& value) { SetMultiMeasureAttributeName(std::move(value)); return *this;}
    inline MultiMeasureAttributeMapping& WithMultiMeasureAttributeName(const char* value) { SetMultiMeasureAttributeName(value); return *this;}
    ///@}
  private:

    Aws::String m_measureValue;
    bool m_measureValueHasBeenSet = false;

    MeasureValueType m_measureValueType;
    bool m_measureValueTypeHasBeenSet = false;

    Aws::String m_multiMeasureAttributeName;
    bool m_multiMeasureAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
