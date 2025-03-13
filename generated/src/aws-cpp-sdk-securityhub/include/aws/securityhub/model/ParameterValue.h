/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> An object that includes the data type of a security control parameter and
   * its current value. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ParameterValue">AWS
   * API Reference</a></p>
   */
  class ParameterValue
  {
  public:
    AWS_SECURITYHUB_API ParameterValue() = default;
    AWS_SECURITYHUB_API ParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A control parameter that is an integer. </p>
     */
    inline int GetInteger() const { return m_integer; }
    inline bool IntegerHasBeenSet() const { return m_integerHasBeenSet; }
    inline void SetInteger(int value) { m_integerHasBeenSet = true; m_integer = value; }
    inline ParameterValue& WithInteger(int value) { SetInteger(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a list of integers. </p>
     */
    inline const Aws::Vector<int>& GetIntegerList() const { return m_integerList; }
    inline bool IntegerListHasBeenSet() const { return m_integerListHasBeenSet; }
    template<typename IntegerListT = Aws::Vector<int>>
    void SetIntegerList(IntegerListT&& value) { m_integerListHasBeenSet = true; m_integerList = std::forward<IntegerListT>(value); }
    template<typename IntegerListT = Aws::Vector<int>>
    ParameterValue& WithIntegerList(IntegerListT&& value) { SetIntegerList(std::forward<IntegerListT>(value)); return *this;}
    inline ParameterValue& AddIntegerList(int value) { m_integerListHasBeenSet = true; m_integerList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a double. </p>
     */
    inline double GetDouble() const { return m_double; }
    inline bool DoubleHasBeenSet() const { return m_doubleHasBeenSet; }
    inline void SetDouble(double value) { m_doubleHasBeenSet = true; m_double = value; }
    inline ParameterValue& WithDouble(double value) { SetDouble(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a string. </p>
     */
    inline const Aws::String& GetString() const { return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    template<typename StringT = Aws::String>
    void SetString(StringT&& value) { m_stringHasBeenSet = true; m_string = std::forward<StringT>(value); }
    template<typename StringT = Aws::String>
    ParameterValue& WithString(StringT&& value) { SetString(std::forward<StringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a list of strings. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStringList() const { return m_stringList; }
    inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }
    template<typename StringListT = Aws::Vector<Aws::String>>
    void SetStringList(StringListT&& value) { m_stringListHasBeenSet = true; m_stringList = std::forward<StringListT>(value); }
    template<typename StringListT = Aws::Vector<Aws::String>>
    ParameterValue& WithStringList(StringListT&& value) { SetStringList(std::forward<StringListT>(value)); return *this;}
    template<typename StringListT = Aws::String>
    ParameterValue& AddStringList(StringListT&& value) { m_stringListHasBeenSet = true; m_stringList.emplace_back(std::forward<StringListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a boolean. </p>
     */
    inline bool GetBoolean() const { return m_boolean; }
    inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }
    inline void SetBoolean(bool value) { m_booleanHasBeenSet = true; m_boolean = value; }
    inline ParameterValue& WithBoolean(bool value) { SetBoolean(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is an enum. </p>
     */
    inline const Aws::String& GetEnum() const { return m_enum; }
    inline bool EnumHasBeenSet() const { return m_enumHasBeenSet; }
    template<typename EnumT = Aws::String>
    void SetEnum(EnumT&& value) { m_enumHasBeenSet = true; m_enum = std::forward<EnumT>(value); }
    template<typename EnumT = Aws::String>
    ParameterValue& WithEnum(EnumT&& value) { SetEnum(std::forward<EnumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a list of enums. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEnumList() const { return m_enumList; }
    inline bool EnumListHasBeenSet() const { return m_enumListHasBeenSet; }
    template<typename EnumListT = Aws::Vector<Aws::String>>
    void SetEnumList(EnumListT&& value) { m_enumListHasBeenSet = true; m_enumList = std::forward<EnumListT>(value); }
    template<typename EnumListT = Aws::Vector<Aws::String>>
    ParameterValue& WithEnumList(EnumListT&& value) { SetEnumList(std::forward<EnumListT>(value)); return *this;}
    template<typename EnumListT = Aws::String>
    ParameterValue& AddEnumList(EnumListT&& value) { m_enumListHasBeenSet = true; m_enumList.emplace_back(std::forward<EnumListT>(value)); return *this; }
    ///@}
  private:

    int m_integer{0};
    bool m_integerHasBeenSet = false;

    Aws::Vector<int> m_integerList;
    bool m_integerListHasBeenSet = false;

    double m_double{0.0};
    bool m_doubleHasBeenSet = false;

    Aws::String m_string;
    bool m_stringHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringList;
    bool m_stringListHasBeenSet = false;

    bool m_boolean{false};
    bool m_booleanHasBeenSet = false;

    Aws::String m_enum;
    bool m_enumHasBeenSet = false;

    Aws::Vector<Aws::String> m_enumList;
    bool m_enumListHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
