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
    AWS_SECURITYHUB_API ParameterValue();
    AWS_SECURITYHUB_API ParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A control parameter that is an integer. </p>
     */
    inline int GetInteger() const{ return m_integer; }
    inline bool IntegerHasBeenSet() const { return m_integerHasBeenSet; }
    inline void SetInteger(int value) { m_integerHasBeenSet = true; m_integer = value; }
    inline ParameterValue& WithInteger(int value) { SetInteger(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a list of integers. </p>
     */
    inline const Aws::Vector<int>& GetIntegerList() const{ return m_integerList; }
    inline bool IntegerListHasBeenSet() const { return m_integerListHasBeenSet; }
    inline void SetIntegerList(const Aws::Vector<int>& value) { m_integerListHasBeenSet = true; m_integerList = value; }
    inline void SetIntegerList(Aws::Vector<int>&& value) { m_integerListHasBeenSet = true; m_integerList = std::move(value); }
    inline ParameterValue& WithIntegerList(const Aws::Vector<int>& value) { SetIntegerList(value); return *this;}
    inline ParameterValue& WithIntegerList(Aws::Vector<int>&& value) { SetIntegerList(std::move(value)); return *this;}
    inline ParameterValue& AddIntegerList(int value) { m_integerListHasBeenSet = true; m_integerList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a double. </p>
     */
    inline double GetDouble() const{ return m_double; }
    inline bool DoubleHasBeenSet() const { return m_doubleHasBeenSet; }
    inline void SetDouble(double value) { m_doubleHasBeenSet = true; m_double = value; }
    inline ParameterValue& WithDouble(double value) { SetDouble(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a string. </p>
     */
    inline const Aws::String& GetString() const{ return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    inline void SetString(const Aws::String& value) { m_stringHasBeenSet = true; m_string = value; }
    inline void SetString(Aws::String&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }
    inline void SetString(const char* value) { m_stringHasBeenSet = true; m_string.assign(value); }
    inline ParameterValue& WithString(const Aws::String& value) { SetString(value); return *this;}
    inline ParameterValue& WithString(Aws::String&& value) { SetString(std::move(value)); return *this;}
    inline ParameterValue& WithString(const char* value) { SetString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a list of strings. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStringList() const{ return m_stringList; }
    inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }
    inline void SetStringList(const Aws::Vector<Aws::String>& value) { m_stringListHasBeenSet = true; m_stringList = value; }
    inline void SetStringList(Aws::Vector<Aws::String>&& value) { m_stringListHasBeenSet = true; m_stringList = std::move(value); }
    inline ParameterValue& WithStringList(const Aws::Vector<Aws::String>& value) { SetStringList(value); return *this;}
    inline ParameterValue& WithStringList(Aws::Vector<Aws::String>&& value) { SetStringList(std::move(value)); return *this;}
    inline ParameterValue& AddStringList(const Aws::String& value) { m_stringListHasBeenSet = true; m_stringList.push_back(value); return *this; }
    inline ParameterValue& AddStringList(Aws::String&& value) { m_stringListHasBeenSet = true; m_stringList.push_back(std::move(value)); return *this; }
    inline ParameterValue& AddStringList(const char* value) { m_stringListHasBeenSet = true; m_stringList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a boolean. </p>
     */
    inline bool GetBoolean() const{ return m_boolean; }
    inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }
    inline void SetBoolean(bool value) { m_booleanHasBeenSet = true; m_boolean = value; }
    inline ParameterValue& WithBoolean(bool value) { SetBoolean(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is an enum. </p>
     */
    inline const Aws::String& GetEnum() const{ return m_enum; }
    inline bool EnumHasBeenSet() const { return m_enumHasBeenSet; }
    inline void SetEnum(const Aws::String& value) { m_enumHasBeenSet = true; m_enum = value; }
    inline void SetEnum(Aws::String&& value) { m_enumHasBeenSet = true; m_enum = std::move(value); }
    inline void SetEnum(const char* value) { m_enumHasBeenSet = true; m_enum.assign(value); }
    inline ParameterValue& WithEnum(const Aws::String& value) { SetEnum(value); return *this;}
    inline ParameterValue& WithEnum(Aws::String&& value) { SetEnum(std::move(value)); return *this;}
    inline ParameterValue& WithEnum(const char* value) { SetEnum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A control parameter that is a list of enums. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEnumList() const{ return m_enumList; }
    inline bool EnumListHasBeenSet() const { return m_enumListHasBeenSet; }
    inline void SetEnumList(const Aws::Vector<Aws::String>& value) { m_enumListHasBeenSet = true; m_enumList = value; }
    inline void SetEnumList(Aws::Vector<Aws::String>&& value) { m_enumListHasBeenSet = true; m_enumList = std::move(value); }
    inline ParameterValue& WithEnumList(const Aws::Vector<Aws::String>& value) { SetEnumList(value); return *this;}
    inline ParameterValue& WithEnumList(Aws::Vector<Aws::String>&& value) { SetEnumList(std::move(value)); return *this;}
    inline ParameterValue& AddEnumList(const Aws::String& value) { m_enumListHasBeenSet = true; m_enumList.push_back(value); return *this; }
    inline ParameterValue& AddEnumList(Aws::String&& value) { m_enumListHasBeenSet = true; m_enumList.push_back(std::move(value)); return *this; }
    inline ParameterValue& AddEnumList(const char* value) { m_enumListHasBeenSet = true; m_enumList.push_back(value); return *this; }
    ///@}
  private:

    int m_integer;
    bool m_integerHasBeenSet = false;

    Aws::Vector<int> m_integerList;
    bool m_integerListHasBeenSet = false;

    double m_double;
    bool m_doubleHasBeenSet = false;

    Aws::String m_string;
    bool m_stringHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringList;
    bool m_stringListHasBeenSet = false;

    bool m_boolean;
    bool m_booleanHasBeenSet = false;

    Aws::String m_enum;
    bool m_enumHasBeenSet = false;

    Aws::Vector<Aws::String> m_enumList;
    bool m_enumListHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
