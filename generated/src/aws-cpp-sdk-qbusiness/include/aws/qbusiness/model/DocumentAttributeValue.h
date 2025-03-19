/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The value of a document attribute. You can only provide one value for a
   * document attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAttributeValue">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeValue
  {
  public:
    AWS_QBUSINESS_API DocumentAttributeValue() = default;
    AWS_QBUSINESS_API DocumentAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    DocumentAttributeValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringListValue() const { return m_stringListValue; }
    inline bool StringListValueHasBeenSet() const { return m_stringListValueHasBeenSet; }
    template<typename StringListValueT = Aws::Vector<Aws::String>>
    void SetStringListValue(StringListValueT&& value) { m_stringListValueHasBeenSet = true; m_stringListValue = std::forward<StringListValueT>(value); }
    template<typename StringListValueT = Aws::Vector<Aws::String>>
    DocumentAttributeValue& WithStringListValue(StringListValueT&& value) { SetStringListValue(std::forward<StringListValueT>(value)); return *this;}
    template<typename StringListValueT = Aws::String>
    DocumentAttributeValue& AddStringListValue(StringListValueT&& value) { m_stringListValueHasBeenSet = true; m_stringListValue.emplace_back(std::forward<StringListValueT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A long integer value. </p>
     */
    inline long long GetLongValue() const { return m_longValue; }
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }
    inline DocumentAttributeValue& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A date expressed as an ISO 8601 string.</p> <p>It's important for the time
     * zone to be included in the ISO 8601 date-time format. For example,
     * 2012-03-25T12:30:10+01:00 is the ISO 8601 date-time format for March 25th 2012
     * at 12:30PM (plus 10 seconds) in Central European Time. </p>
     */
    inline const Aws::Utils::DateTime& GetDateValue() const { return m_dateValue; }
    inline bool DateValueHasBeenSet() const { return m_dateValueHasBeenSet; }
    template<typename DateValueT = Aws::Utils::DateTime>
    void SetDateValue(DateValueT&& value) { m_dateValueHasBeenSet = true; m_dateValue = std::forward<DateValueT>(value); }
    template<typename DateValueT = Aws::Utils::DateTime>
    DocumentAttributeValue& WithDateValue(DateValueT&& value) { SetDateValue(std::forward<DateValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringListValue;
    bool m_stringListValueHasBeenSet = false;

    long long m_longValue{0};
    bool m_longValueHasBeenSet = false;

    Aws::Utils::DateTime m_dateValue{};
    bool m_dateValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
