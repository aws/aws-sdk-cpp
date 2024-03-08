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
    AWS_SECURITYHUB_API ConfigurationOptions();
    AWS_SECURITYHUB_API ConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The options for customizing a security control parameter that is an integer.
     * </p>
     */
    inline const IntegerConfigurationOptions& GetInteger() const{ return m_integer; }

    /**
     * <p> The options for customizing a security control parameter that is an integer.
     * </p>
     */
    inline bool IntegerHasBeenSet() const { return m_integerHasBeenSet; }

    /**
     * <p> The options for customizing a security control parameter that is an integer.
     * </p>
     */
    inline void SetInteger(const IntegerConfigurationOptions& value) { m_integerHasBeenSet = true; m_integer = value; }

    /**
     * <p> The options for customizing a security control parameter that is an integer.
     * </p>
     */
    inline void SetInteger(IntegerConfigurationOptions&& value) { m_integerHasBeenSet = true; m_integer = std::move(value); }

    /**
     * <p> The options for customizing a security control parameter that is an integer.
     * </p>
     */
    inline ConfigurationOptions& WithInteger(const IntegerConfigurationOptions& value) { SetInteger(value); return *this;}

    /**
     * <p> The options for customizing a security control parameter that is an integer.
     * </p>
     */
    inline ConfigurationOptions& WithInteger(IntegerConfigurationOptions&& value) { SetInteger(std::move(value)); return *this;}


    /**
     * <p> The options for customizing a security control parameter that is a list of
     * integers. </p>
     */
    inline const IntegerListConfigurationOptions& GetIntegerList() const{ return m_integerList; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * integers. </p>
     */
    inline bool IntegerListHasBeenSet() const { return m_integerListHasBeenSet; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * integers. </p>
     */
    inline void SetIntegerList(const IntegerListConfigurationOptions& value) { m_integerListHasBeenSet = true; m_integerList = value; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * integers. </p>
     */
    inline void SetIntegerList(IntegerListConfigurationOptions&& value) { m_integerListHasBeenSet = true; m_integerList = std::move(value); }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * integers. </p>
     */
    inline ConfigurationOptions& WithIntegerList(const IntegerListConfigurationOptions& value) { SetIntegerList(value); return *this;}

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * integers. </p>
     */
    inline ConfigurationOptions& WithIntegerList(IntegerListConfigurationOptions&& value) { SetIntegerList(std::move(value)); return *this;}


    /**
     * <p> The options for customizing a security control parameter that is a double.
     * </p>
     */
    inline const DoubleConfigurationOptions& GetDouble() const{ return m_double; }

    /**
     * <p> The options for customizing a security control parameter that is a double.
     * </p>
     */
    inline bool DoubleHasBeenSet() const { return m_doubleHasBeenSet; }

    /**
     * <p> The options for customizing a security control parameter that is a double.
     * </p>
     */
    inline void SetDouble(const DoubleConfigurationOptions& value) { m_doubleHasBeenSet = true; m_double = value; }

    /**
     * <p> The options for customizing a security control parameter that is a double.
     * </p>
     */
    inline void SetDouble(DoubleConfigurationOptions&& value) { m_doubleHasBeenSet = true; m_double = std::move(value); }

    /**
     * <p> The options for customizing a security control parameter that is a double.
     * </p>
     */
    inline ConfigurationOptions& WithDouble(const DoubleConfigurationOptions& value) { SetDouble(value); return *this;}

    /**
     * <p> The options for customizing a security control parameter that is a double.
     * </p>
     */
    inline ConfigurationOptions& WithDouble(DoubleConfigurationOptions&& value) { SetDouble(std::move(value)); return *this;}


    /**
     * <p> The options for customizing a security control parameter that is a string
     * data type. </p>
     */
    inline const StringConfigurationOptions& GetString() const{ return m_string; }

    /**
     * <p> The options for customizing a security control parameter that is a string
     * data type. </p>
     */
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }

    /**
     * <p> The options for customizing a security control parameter that is a string
     * data type. </p>
     */
    inline void SetString(const StringConfigurationOptions& value) { m_stringHasBeenSet = true; m_string = value; }

    /**
     * <p> The options for customizing a security control parameter that is a string
     * data type. </p>
     */
    inline void SetString(StringConfigurationOptions&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }

    /**
     * <p> The options for customizing a security control parameter that is a string
     * data type. </p>
     */
    inline ConfigurationOptions& WithString(const StringConfigurationOptions& value) { SetString(value); return *this;}

    /**
     * <p> The options for customizing a security control parameter that is a string
     * data type. </p>
     */
    inline ConfigurationOptions& WithString(StringConfigurationOptions&& value) { SetString(std::move(value)); return *this;}


    /**
     * <p> The options for customizing a security control parameter that is a list of
     * strings. </p>
     */
    inline const StringListConfigurationOptions& GetStringList() const{ return m_stringList; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * strings. </p>
     */
    inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * strings. </p>
     */
    inline void SetStringList(const StringListConfigurationOptions& value) { m_stringListHasBeenSet = true; m_stringList = value; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * strings. </p>
     */
    inline void SetStringList(StringListConfigurationOptions&& value) { m_stringListHasBeenSet = true; m_stringList = std::move(value); }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * strings. </p>
     */
    inline ConfigurationOptions& WithStringList(const StringListConfigurationOptions& value) { SetStringList(value); return *this;}

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * strings. </p>
     */
    inline ConfigurationOptions& WithStringList(StringListConfigurationOptions&& value) { SetStringList(std::move(value)); return *this;}


    /**
     * <p> The options for customizing a security control parameter that is a boolean.
     * For a boolean parameter, the options are <code>true</code> and
     * <code>false</code>. </p>
     */
    inline const BooleanConfigurationOptions& GetBoolean() const{ return m_boolean; }

    /**
     * <p> The options for customizing a security control parameter that is a boolean.
     * For a boolean parameter, the options are <code>true</code> and
     * <code>false</code>. </p>
     */
    inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }

    /**
     * <p> The options for customizing a security control parameter that is a boolean.
     * For a boolean parameter, the options are <code>true</code> and
     * <code>false</code>. </p>
     */
    inline void SetBoolean(const BooleanConfigurationOptions& value) { m_booleanHasBeenSet = true; m_boolean = value; }

    /**
     * <p> The options for customizing a security control parameter that is a boolean.
     * For a boolean parameter, the options are <code>true</code> and
     * <code>false</code>. </p>
     */
    inline void SetBoolean(BooleanConfigurationOptions&& value) { m_booleanHasBeenSet = true; m_boolean = std::move(value); }

    /**
     * <p> The options for customizing a security control parameter that is a boolean.
     * For a boolean parameter, the options are <code>true</code> and
     * <code>false</code>. </p>
     */
    inline ConfigurationOptions& WithBoolean(const BooleanConfigurationOptions& value) { SetBoolean(value); return *this;}

    /**
     * <p> The options for customizing a security control parameter that is a boolean.
     * For a boolean parameter, the options are <code>true</code> and
     * <code>false</code>. </p>
     */
    inline ConfigurationOptions& WithBoolean(BooleanConfigurationOptions&& value) { SetBoolean(std::move(value)); return *this;}


    /**
     * <p> The options for customizing a security control parameter that is an enum.
     * </p>
     */
    inline const EnumConfigurationOptions& GetEnum() const{ return m_enum; }

    /**
     * <p> The options for customizing a security control parameter that is an enum.
     * </p>
     */
    inline bool EnumHasBeenSet() const { return m_enumHasBeenSet; }

    /**
     * <p> The options for customizing a security control parameter that is an enum.
     * </p>
     */
    inline void SetEnum(const EnumConfigurationOptions& value) { m_enumHasBeenSet = true; m_enum = value; }

    /**
     * <p> The options for customizing a security control parameter that is an enum.
     * </p>
     */
    inline void SetEnum(EnumConfigurationOptions&& value) { m_enumHasBeenSet = true; m_enum = std::move(value); }

    /**
     * <p> The options for customizing a security control parameter that is an enum.
     * </p>
     */
    inline ConfigurationOptions& WithEnum(const EnumConfigurationOptions& value) { SetEnum(value); return *this;}

    /**
     * <p> The options for customizing a security control parameter that is an enum.
     * </p>
     */
    inline ConfigurationOptions& WithEnum(EnumConfigurationOptions&& value) { SetEnum(std::move(value)); return *this;}


    /**
     * <p> The options for customizing a security control parameter that is a list of
     * enums. </p>
     */
    inline const EnumListConfigurationOptions& GetEnumList() const{ return m_enumList; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * enums. </p>
     */
    inline bool EnumListHasBeenSet() const { return m_enumListHasBeenSet; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * enums. </p>
     */
    inline void SetEnumList(const EnumListConfigurationOptions& value) { m_enumListHasBeenSet = true; m_enumList = value; }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * enums. </p>
     */
    inline void SetEnumList(EnumListConfigurationOptions&& value) { m_enumListHasBeenSet = true; m_enumList = std::move(value); }

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * enums. </p>
     */
    inline ConfigurationOptions& WithEnumList(const EnumListConfigurationOptions& value) { SetEnumList(value); return *this;}

    /**
     * <p> The options for customizing a security control parameter that is a list of
     * enums. </p>
     */
    inline ConfigurationOptions& WithEnumList(EnumListConfigurationOptions&& value) { SetEnumList(std::move(value)); return *this;}

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
