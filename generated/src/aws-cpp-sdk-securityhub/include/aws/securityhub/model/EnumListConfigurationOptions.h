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
   * <p> The options for customizing a security control parameter that is a list of
   * enums. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnumListConfigurationOptions">AWS
   * API Reference</a></p>
   */
  class EnumListConfigurationOptions
  {
  public:
    AWS_SECURITYHUB_API EnumListConfigurationOptions();
    AWS_SECURITYHUB_API EnumListConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API EnumListConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline void SetDefaultValue(const Aws::Vector<Aws::String>& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline void SetDefaultValue(Aws::Vector<Aws::String>&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline EnumListConfigurationOptions& WithDefaultValue(const Aws::Vector<Aws::String>& value) { SetDefaultValue(value); return *this;}

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline EnumListConfigurationOptions& WithDefaultValue(Aws::Vector<Aws::String>&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline EnumListConfigurationOptions& AddDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline EnumListConfigurationOptions& AddDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(std::move(value)); return *this; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * enums. </p>
     */
    inline EnumListConfigurationOptions& AddDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }


    /**
     * <p> The maximum number of list items that an enum list control parameter can
     * accept. </p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p> The maximum number of list items that an enum list control parameter can
     * accept. </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p> The maximum number of list items that an enum list control parameter can
     * accept. </p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p> The maximum number of list items that an enum list control parameter can
     * accept. </p>
     */
    inline EnumListConfigurationOptions& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline EnumListConfigurationOptions& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline EnumListConfigurationOptions& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline EnumListConfigurationOptions& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline EnumListConfigurationOptions& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }

    /**
     * <p> The valid values for a control parameter that is a list of enums. </p>
     */
    inline EnumListConfigurationOptions& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
