/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <memory>

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
namespace RDSDataService
{
namespace Model
{
  class StructValue;

  /**
   * <p>Contains the value of a column.</p>  <p>This data structure is only
   * used with the deprecated <code>ExecuteSql</code> operation. Use the
   * <code>BatchExecuteStatement</code> or <code>ExecuteStatement</code> operation
   * instead.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/Value">AWS API
   * Reference</a></p>
   */
  class Value
  {
  public:
    AWS_RDSDATASERVICE_API Value();
    AWS_RDSDATASERVICE_API Value(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Value& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A NULL value.</p>
     */
    inline bool GetIsNull() const{ return m_isNull; }
    inline bool IsNullHasBeenSet() const { return m_isNullHasBeenSet; }
    inline void SetIsNull(bool value) { m_isNullHasBeenSet = true; m_isNull = value; }
    inline Value& WithIsNull(bool value) { SetIsNull(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value for a column of BIT data type.</p>
     */
    inline bool GetBitValue() const{ return m_bitValue; }
    inline bool BitValueHasBeenSet() const { return m_bitValueHasBeenSet; }
    inline void SetBitValue(bool value) { m_bitValueHasBeenSet = true; m_bitValue = value; }
    inline Value& WithBitValue(bool value) { SetBitValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value for a column of big integer data type.</p>
     */
    inline long long GetBigIntValue() const{ return m_bigIntValue; }
    inline bool BigIntValueHasBeenSet() const { return m_bigIntValueHasBeenSet; }
    inline void SetBigIntValue(long long value) { m_bigIntValueHasBeenSet = true; m_bigIntValue = value; }
    inline Value& WithBigIntValue(long long value) { SetBigIntValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value for a column of integer data type.</p>
     */
    inline int GetIntValue() const{ return m_intValue; }
    inline bool IntValueHasBeenSet() const { return m_intValueHasBeenSet; }
    inline void SetIntValue(int value) { m_intValueHasBeenSet = true; m_intValue = value; }
    inline Value& WithIntValue(int value) { SetIntValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value for a column of double data type.</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline Value& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value for a column of real data type.</p>
     */
    inline double GetRealValue() const{ return m_realValue; }
    inline bool RealValueHasBeenSet() const { return m_realValueHasBeenSet; }
    inline void SetRealValue(double value) { m_realValueHasBeenSet = true; m_realValue = value; }
    inline Value& WithRealValue(double value) { SetRealValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value for a column of string data type.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline Value& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline Value& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline Value& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value for a column of BLOB data type.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlobValue() const{ return m_blobValue; }
    inline bool BlobValueHasBeenSet() const { return m_blobValueHasBeenSet; }
    inline void SetBlobValue(const Aws::Utils::ByteBuffer& value) { m_blobValueHasBeenSet = true; m_blobValue = value; }
    inline void SetBlobValue(Aws::Utils::ByteBuffer&& value) { m_blobValueHasBeenSet = true; m_blobValue = std::move(value); }
    inline Value& WithBlobValue(const Aws::Utils::ByteBuffer& value) { SetBlobValue(value); return *this;}
    inline Value& WithBlobValue(Aws::Utils::ByteBuffer&& value) { SetBlobValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of column values.</p>
     */
    inline const Aws::Vector<Value>& GetArrayValues() const{ return m_arrayValues; }
    inline bool ArrayValuesHasBeenSet() const { return m_arrayValuesHasBeenSet; }
    inline void SetArrayValues(const Aws::Vector<Value>& value) { m_arrayValuesHasBeenSet = true; m_arrayValues = value; }
    inline void SetArrayValues(Aws::Vector<Value>&& value) { m_arrayValuesHasBeenSet = true; m_arrayValues = std::move(value); }
    inline Value& WithArrayValues(const Aws::Vector<Value>& value) { SetArrayValues(value); return *this;}
    inline Value& WithArrayValues(Aws::Vector<Value>&& value) { SetArrayValues(std::move(value)); return *this;}
    inline Value& AddArrayValues(const Value& value) { m_arrayValuesHasBeenSet = true; m_arrayValues.push_back(value); return *this; }
    inline Value& AddArrayValues(Value&& value) { m_arrayValuesHasBeenSet = true; m_arrayValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value for a column of STRUCT data type.</p>
     */
    AWS_RDSDATASERVICE_API const StructValue& GetStructValue() const;
    AWS_RDSDATASERVICE_API bool StructValueHasBeenSet() const;
    AWS_RDSDATASERVICE_API void SetStructValue(const StructValue& value);
    AWS_RDSDATASERVICE_API void SetStructValue(StructValue&& value);
    AWS_RDSDATASERVICE_API Value& WithStructValue(const StructValue& value);
    AWS_RDSDATASERVICE_API Value& WithStructValue(StructValue&& value);
    ///@}
  private:

    bool m_isNull;
    bool m_isNullHasBeenSet = false;

    bool m_bitValue;
    bool m_bitValueHasBeenSet = false;

    long long m_bigIntValue;
    bool m_bigIntValueHasBeenSet = false;

    int m_intValue;
    bool m_intValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    double m_realValue;
    bool m_realValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blobValue;
    bool m_blobValueHasBeenSet = false;

    Aws::Vector<Value> m_arrayValues;
    bool m_arrayValuesHasBeenSet = false;

    std::shared_ptr<StructValue> m_structValue;
    bool m_structValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
