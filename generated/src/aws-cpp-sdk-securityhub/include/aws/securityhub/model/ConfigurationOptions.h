/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/IntegerConfigurationOptions.h>
#include <aws/securityhub/model/IntegerListConfigurationOptions.h>
#include <aws/securityhub/model/DoubleConfigurationOptions.h>
#include <aws/securityhub/model/StringConfigurationOptions.h>
#include <aws/securityhub/model/StringListConfigurationOptions.h>
#include <aws/securityhub/model/BooleanConfigurationOptions.h>
#include <aws/securityhub/model/EnumConfigurationOptions.h>
#include <aws/securityhub/model/EnumListConfigurationOptions.h>
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
   * <p> The options for customizing a security control parameter. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ConfigurationOptions">AWS
   * API Reference</a></p>
   */
  class ConfigurationOptions
  {
  public:
    AWS_SECURITYHUB_API ConfigurationOptions() = default;
    AWS_SECURITYHUB_API ConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The options for customizing a security control parameter that is an integer.
     * </p>
     */
    inline const IntegerConfigurationOptions& GetInteger() const { return m_integer; }
    inline bool IntegerHasBeenSet() const { return m_integerHasBeenSet; }
    template<typename IntegerT = IntegerConfigurationOptions>
    void SetInteger(IntegerT&& value) { m_integerHasBeenSet = true; m_integer = std::forward<IntegerT>(value); }
    template<typename IntegerT = IntegerConfigurationOptions>
    ConfigurationOptions& WithInteger(IntegerT&& value) { SetInteger(std::forward<IntegerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for customizing a security control parameter that is a list of
     * integers. </p>
     */
    inline const IntegerListConfigurationOptions& GetIntegerList() const { return m_integerList; }
    inline bool IntegerListHasBeenSet() const { return m_integerListHasBeenSet; }
    template<typename IntegerListT = IntegerListConfigurationOptions>
    void SetIntegerList(IntegerListT&& value) { m_integerListHasBeenSet = true; m_integerList = std::forward<IntegerListT>(value); }
    template<typename IntegerListT = IntegerListConfigurationOptions>
    ConfigurationOptions& WithIntegerList(IntegerListT&& value) { SetIntegerList(std::forward<IntegerListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for customizing a security control parameter that is a double.
     * </p>
     */
    inline const DoubleConfigurationOptions& GetDouble() const { return m_double; }
    inline bool DoubleHasBeenSet() const { return m_doubleHasBeenSet; }
    template<typename DoubleT = DoubleConfigurationOptions>
    void SetDouble(DoubleT&& value) { m_doubleHasBeenSet = true; m_double = std::forward<DoubleT>(value); }
    template<typename DoubleT = DoubleConfigurationOptions>
    ConfigurationOptions& WithDouble(DoubleT&& value) { SetDouble(std::forward<DoubleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for customizing a security control parameter that is a string
     * data type. </p>
     */
    inline const StringConfigurationOptions& GetString() const { return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    template<typename StringT = StringConfigurationOptions>
    void SetString(StringT&& value) { m_stringHasBeenSet = true; m_string = std::forward<StringT>(value); }
    template<typename StringT = StringConfigurationOptions>
    ConfigurationOptions& WithString(StringT&& value) { SetString(std::forward<StringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for customizing a security control parameter that is a list of
     * strings. </p>
     */
    inline const StringListConfigurationOptions& GetStringList() const { return m_stringList; }
    inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }
    template<typename StringListT = StringListConfigurationOptions>
    void SetStringList(StringListT&& value) { m_stringListHasBeenSet = true; m_stringList = std::forward<StringListT>(value); }
    template<typename StringListT = StringListConfigurationOptions>
    ConfigurationOptions& WithStringList(StringListT&& value) { SetStringList(std::forward<StringListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for customizing a security control parameter that is a boolean.
     * For a boolean parameter, the options are <code>true</code> and
     * <code>false</code>. </p>
     */
    inline const BooleanConfigurationOptions& GetBoolean() const { return m_boolean; }
    inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }
    template<typename BooleanT = BooleanConfigurationOptions>
    void SetBoolean(BooleanT&& value) { m_booleanHasBeenSet = true; m_boolean = std::forward<BooleanT>(value); }
    template<typename BooleanT = BooleanConfigurationOptions>
    ConfigurationOptions& WithBoolean(BooleanT&& value) { SetBoolean(std::forward<BooleanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for customizing a security control parameter that is an enum.
     * </p>
     */
    inline const EnumConfigurationOptions& GetEnum() const { return m_enum; }
    inline bool EnumHasBeenSet() const { return m_enumHasBeenSet; }
    template<typename EnumT = EnumConfigurationOptions>
    void SetEnum(EnumT&& value) { m_enumHasBeenSet = true; m_enum = std::forward<EnumT>(value); }
    template<typename EnumT = EnumConfigurationOptions>
    ConfigurationOptions& WithEnum(EnumT&& value) { SetEnum(std::forward<EnumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for customizing a security control parameter that is a list of
     * enums. </p>
     */
    inline const EnumListConfigurationOptions& GetEnumList() const { return m_enumList; }
    inline bool EnumListHasBeenSet() const { return m_enumListHasBeenSet; }
    template<typename EnumListT = EnumListConfigurationOptions>
    void SetEnumList(EnumListT&& value) { m_enumListHasBeenSet = true; m_enumList = std::forward<EnumListT>(value); }
    template<typename EnumListT = EnumListConfigurationOptions>
    ConfigurationOptions& WithEnumList(EnumListT&& value) { SetEnumList(std::forward<EnumListT>(value)); return *this;}
    ///@}
  private:

    IntegerConfigurationOptions m_integer;
    bool m_integerHasBeenSet = false;

    IntegerListConfigurationOptions m_integerList;
    bool m_integerListHasBeenSet = false;

    DoubleConfigurationOptions m_double;
    bool m_doubleHasBeenSet = false;

    StringConfigurationOptions m_string;
    bool m_stringHasBeenSet = false;

    StringListConfigurationOptions m_stringList;
    bool m_stringListHasBeenSet = false;

    BooleanConfigurationOptions m_boolean;
    bool m_booleanHasBeenSet = false;

    EnumConfigurationOptions m_enum;
    bool m_enumHasBeenSet = false;

    EnumListConfigurationOptions m_enumList;
    bool m_enumListHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
