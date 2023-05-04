/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StringDatasetParameter.h>
#include <aws/quicksight/model/DecimalDatasetParameter.h>
#include <aws/quicksight/model/IntegerDatasetParameter.h>
#include <aws/quicksight/model/DateTimeDatasetParameter.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A dataset parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DatasetParameter">AWS
   * API Reference</a></p>
   */
  class DatasetParameter
  {
  public:
    AWS_QUICKSIGHT_API DatasetParameter();
    AWS_QUICKSIGHT_API DatasetParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DatasetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string parameter that is created in the dataset.</p>
     */
    inline const StringDatasetParameter& GetStringDatasetParameter() const{ return m_stringDatasetParameter; }

    /**
     * <p>A string parameter that is created in the dataset.</p>
     */
    inline bool StringDatasetParameterHasBeenSet() const { return m_stringDatasetParameterHasBeenSet; }

    /**
     * <p>A string parameter that is created in the dataset.</p>
     */
    inline void SetStringDatasetParameter(const StringDatasetParameter& value) { m_stringDatasetParameterHasBeenSet = true; m_stringDatasetParameter = value; }

    /**
     * <p>A string parameter that is created in the dataset.</p>
     */
    inline void SetStringDatasetParameter(StringDatasetParameter&& value) { m_stringDatasetParameterHasBeenSet = true; m_stringDatasetParameter = std::move(value); }

    /**
     * <p>A string parameter that is created in the dataset.</p>
     */
    inline DatasetParameter& WithStringDatasetParameter(const StringDatasetParameter& value) { SetStringDatasetParameter(value); return *this;}

    /**
     * <p>A string parameter that is created in the dataset.</p>
     */
    inline DatasetParameter& WithStringDatasetParameter(StringDatasetParameter&& value) { SetStringDatasetParameter(std::move(value)); return *this;}


    /**
     * <p>A decimal parameter that is created in the dataset.</p>
     */
    inline const DecimalDatasetParameter& GetDecimalDatasetParameter() const{ return m_decimalDatasetParameter; }

    /**
     * <p>A decimal parameter that is created in the dataset.</p>
     */
    inline bool DecimalDatasetParameterHasBeenSet() const { return m_decimalDatasetParameterHasBeenSet; }

    /**
     * <p>A decimal parameter that is created in the dataset.</p>
     */
    inline void SetDecimalDatasetParameter(const DecimalDatasetParameter& value) { m_decimalDatasetParameterHasBeenSet = true; m_decimalDatasetParameter = value; }

    /**
     * <p>A decimal parameter that is created in the dataset.</p>
     */
    inline void SetDecimalDatasetParameter(DecimalDatasetParameter&& value) { m_decimalDatasetParameterHasBeenSet = true; m_decimalDatasetParameter = std::move(value); }

    /**
     * <p>A decimal parameter that is created in the dataset.</p>
     */
    inline DatasetParameter& WithDecimalDatasetParameter(const DecimalDatasetParameter& value) { SetDecimalDatasetParameter(value); return *this;}

    /**
     * <p>A decimal parameter that is created in the dataset.</p>
     */
    inline DatasetParameter& WithDecimalDatasetParameter(DecimalDatasetParameter&& value) { SetDecimalDatasetParameter(std::move(value)); return *this;}


    /**
     * <p>An integer parameter that is created in the dataset.</p>
     */
    inline const IntegerDatasetParameter& GetIntegerDatasetParameter() const{ return m_integerDatasetParameter; }

    /**
     * <p>An integer parameter that is created in the dataset.</p>
     */
    inline bool IntegerDatasetParameterHasBeenSet() const { return m_integerDatasetParameterHasBeenSet; }

    /**
     * <p>An integer parameter that is created in the dataset.</p>
     */
    inline void SetIntegerDatasetParameter(const IntegerDatasetParameter& value) { m_integerDatasetParameterHasBeenSet = true; m_integerDatasetParameter = value; }

    /**
     * <p>An integer parameter that is created in the dataset.</p>
     */
    inline void SetIntegerDatasetParameter(IntegerDatasetParameter&& value) { m_integerDatasetParameterHasBeenSet = true; m_integerDatasetParameter = std::move(value); }

    /**
     * <p>An integer parameter that is created in the dataset.</p>
     */
    inline DatasetParameter& WithIntegerDatasetParameter(const IntegerDatasetParameter& value) { SetIntegerDatasetParameter(value); return *this;}

    /**
     * <p>An integer parameter that is created in the dataset.</p>
     */
    inline DatasetParameter& WithIntegerDatasetParameter(IntegerDatasetParameter&& value) { SetIntegerDatasetParameter(std::move(value)); return *this;}


    /**
     * <p>A date time parameter that is created in the dataset.</p>
     */
    inline const DateTimeDatasetParameter& GetDateTimeDatasetParameter() const{ return m_dateTimeDatasetParameter; }

    /**
     * <p>A date time parameter that is created in the dataset.</p>
     */
    inline bool DateTimeDatasetParameterHasBeenSet() const { return m_dateTimeDatasetParameterHasBeenSet; }

    /**
     * <p>A date time parameter that is created in the dataset.</p>
     */
    inline void SetDateTimeDatasetParameter(const DateTimeDatasetParameter& value) { m_dateTimeDatasetParameterHasBeenSet = true; m_dateTimeDatasetParameter = value; }

    /**
     * <p>A date time parameter that is created in the dataset.</p>
     */
    inline void SetDateTimeDatasetParameter(DateTimeDatasetParameter&& value) { m_dateTimeDatasetParameterHasBeenSet = true; m_dateTimeDatasetParameter = std::move(value); }

    /**
     * <p>A date time parameter that is created in the dataset.</p>
     */
    inline DatasetParameter& WithDateTimeDatasetParameter(const DateTimeDatasetParameter& value) { SetDateTimeDatasetParameter(value); return *this;}

    /**
     * <p>A date time parameter that is created in the dataset.</p>
     */
    inline DatasetParameter& WithDateTimeDatasetParameter(DateTimeDatasetParameter&& value) { SetDateTimeDatasetParameter(std::move(value)); return *this;}

  private:

    StringDatasetParameter m_stringDatasetParameter;
    bool m_stringDatasetParameterHasBeenSet = false;

    DecimalDatasetParameter m_decimalDatasetParameter;
    bool m_decimalDatasetParameterHasBeenSet = false;

    IntegerDatasetParameter m_integerDatasetParameter;
    bool m_integerDatasetParameterHasBeenSet = false;

    DateTimeDatasetParameter m_dateTimeDatasetParameter;
    bool m_dateTimeDatasetParameterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
