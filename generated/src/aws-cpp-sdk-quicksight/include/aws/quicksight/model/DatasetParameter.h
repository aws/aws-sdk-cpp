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
   * <p>A parameter that is created in a dataset. The parameter can be a string,
   * integer, decimal, or datetime data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DatasetParameter">AWS
   * API Reference</a></p>
   */
  class DatasetParameter
  {
  public:
    AWS_QUICKSIGHT_API DatasetParameter() = default;
    AWS_QUICKSIGHT_API DatasetParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DatasetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string parameter that is created in the dataset.</p>
     */
    inline const StringDatasetParameter& GetStringDatasetParameter() const { return m_stringDatasetParameter; }
    inline bool StringDatasetParameterHasBeenSet() const { return m_stringDatasetParameterHasBeenSet; }
    template<typename StringDatasetParameterT = StringDatasetParameter>
    void SetStringDatasetParameter(StringDatasetParameterT&& value) { m_stringDatasetParameterHasBeenSet = true; m_stringDatasetParameter = std::forward<StringDatasetParameterT>(value); }
    template<typename StringDatasetParameterT = StringDatasetParameter>
    DatasetParameter& WithStringDatasetParameter(StringDatasetParameterT&& value) { SetStringDatasetParameter(std::forward<StringDatasetParameterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A decimal parameter that is created in the dataset.</p>
     */
    inline const DecimalDatasetParameter& GetDecimalDatasetParameter() const { return m_decimalDatasetParameter; }
    inline bool DecimalDatasetParameterHasBeenSet() const { return m_decimalDatasetParameterHasBeenSet; }
    template<typename DecimalDatasetParameterT = DecimalDatasetParameter>
    void SetDecimalDatasetParameter(DecimalDatasetParameterT&& value) { m_decimalDatasetParameterHasBeenSet = true; m_decimalDatasetParameter = std::forward<DecimalDatasetParameterT>(value); }
    template<typename DecimalDatasetParameterT = DecimalDatasetParameter>
    DatasetParameter& WithDecimalDatasetParameter(DecimalDatasetParameterT&& value) { SetDecimalDatasetParameter(std::forward<DecimalDatasetParameterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer parameter that is created in the dataset.</p>
     */
    inline const IntegerDatasetParameter& GetIntegerDatasetParameter() const { return m_integerDatasetParameter; }
    inline bool IntegerDatasetParameterHasBeenSet() const { return m_integerDatasetParameterHasBeenSet; }
    template<typename IntegerDatasetParameterT = IntegerDatasetParameter>
    void SetIntegerDatasetParameter(IntegerDatasetParameterT&& value) { m_integerDatasetParameterHasBeenSet = true; m_integerDatasetParameter = std::forward<IntegerDatasetParameterT>(value); }
    template<typename IntegerDatasetParameterT = IntegerDatasetParameter>
    DatasetParameter& WithIntegerDatasetParameter(IntegerDatasetParameterT&& value) { SetIntegerDatasetParameter(std::forward<IntegerDatasetParameterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A date time parameter that is created in the dataset.</p>
     */
    inline const DateTimeDatasetParameter& GetDateTimeDatasetParameter() const { return m_dateTimeDatasetParameter; }
    inline bool DateTimeDatasetParameterHasBeenSet() const { return m_dateTimeDatasetParameterHasBeenSet; }
    template<typename DateTimeDatasetParameterT = DateTimeDatasetParameter>
    void SetDateTimeDatasetParameter(DateTimeDatasetParameterT&& value) { m_dateTimeDatasetParameterHasBeenSet = true; m_dateTimeDatasetParameter = std::forward<DateTimeDatasetParameterT>(value); }
    template<typename DateTimeDatasetParameterT = DateTimeDatasetParameter>
    DatasetParameter& WithDateTimeDatasetParameter(DateTimeDatasetParameterT&& value) { SetDateTimeDatasetParameter(std::forward<DateTimeDatasetParameterT>(value)); return *this;}
    ///@}
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
