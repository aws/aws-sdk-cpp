/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>A data value in a column. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/Field">AWS
   * API Reference</a></p>
   */
  class Field
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API Field();
    AWS_REDSHIFTDATAAPISERVICE_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value of the BLOB data type. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlobValue() const{ return m_blobValue; }

    /**
     * <p>A value of the BLOB data type. </p>
     */
    inline bool BlobValueHasBeenSet() const { return m_blobValueHasBeenSet; }

    /**
     * <p>A value of the BLOB data type. </p>
     */
    inline void SetBlobValue(const Aws::Utils::ByteBuffer& value) { m_blobValueHasBeenSet = true; m_blobValue = value; }

    /**
     * <p>A value of the BLOB data type. </p>
     */
    inline void SetBlobValue(Aws::Utils::ByteBuffer&& value) { m_blobValueHasBeenSet = true; m_blobValue = std::move(value); }

    /**
     * <p>A value of the BLOB data type. </p>
     */
    inline Field& WithBlobValue(const Aws::Utils::ByteBuffer& value) { SetBlobValue(value); return *this;}

    /**
     * <p>A value of the BLOB data type. </p>
     */
    inline Field& WithBlobValue(Aws::Utils::ByteBuffer&& value) { SetBlobValue(std::move(value)); return *this;}


    /**
     * <p>A value of the Boolean data type. </p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>A value of the Boolean data type. </p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>A value of the Boolean data type. </p>
     */
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>A value of the Boolean data type. </p>
     */
    inline Field& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}


    /**
     * <p>A value of the double data type. </p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>A value of the double data type. </p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>A value of the double data type. </p>
     */
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>A value of the double data type. </p>
     */
    inline Field& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}


    /**
     * <p>A value that indicates whether the data is NULL. </p>
     */
    inline bool GetIsNull() const{ return m_isNull; }

    /**
     * <p>A value that indicates whether the data is NULL. </p>
     */
    inline bool IsNullHasBeenSet() const { return m_isNullHasBeenSet; }

    /**
     * <p>A value that indicates whether the data is NULL. </p>
     */
    inline void SetIsNull(bool value) { m_isNullHasBeenSet = true; m_isNull = value; }

    /**
     * <p>A value that indicates whether the data is NULL. </p>
     */
    inline Field& WithIsNull(bool value) { SetIsNull(value); return *this;}


    /**
     * <p>A value of the long data type. </p>
     */
    inline long long GetLongValue() const{ return m_longValue; }

    /**
     * <p>A value of the long data type. </p>
     */
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }

    /**
     * <p>A value of the long data type. </p>
     */
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }

    /**
     * <p>A value of the long data type. </p>
     */
    inline Field& WithLongValue(long long value) { SetLongValue(value); return *this;}


    /**
     * <p>A value of the string data type. </p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>A value of the string data type. </p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>A value of the string data type. </p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>A value of the string data type. </p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>A value of the string data type. </p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>A value of the string data type. </p>
     */
    inline Field& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>A value of the string data type. </p>
     */
    inline Field& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>A value of the string data type. </p>
     */
    inline Field& WithStringValue(const char* value) { SetStringValue(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_blobValue;
    bool m_blobValueHasBeenSet = false;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    bool m_isNull;
    bool m_isNullHasBeenSet = false;

    long long m_longValue;
    bool m_longValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
