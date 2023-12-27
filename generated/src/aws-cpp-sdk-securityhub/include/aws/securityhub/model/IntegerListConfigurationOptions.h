/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * integers. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/IntegerListConfigurationOptions">AWS
   * API Reference</a></p>
   */
  class IntegerListConfigurationOptions
  {
  public:
    AWS_SECURITYHUB_API IntegerListConfigurationOptions();
    AWS_SECURITYHUB_API IntegerListConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API IntegerListConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * integers. </p>
     */
    inline const Aws::Vector<int>& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * integers. </p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * integers. </p>
     */
    inline void SetDefaultValue(const Aws::Vector<int>& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * integers. </p>
     */
    inline void SetDefaultValue(Aws::Vector<int>&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * integers. </p>
     */
    inline IntegerListConfigurationOptions& WithDefaultValue(const Aws::Vector<int>& value) { SetDefaultValue(value); return *this;}

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * integers. </p>
     */
    inline IntegerListConfigurationOptions& WithDefaultValue(Aws::Vector<int>&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p> The Security Hub default value for a control parameter that is a list of
     * integers. </p>
     */
    inline IntegerListConfigurationOptions& AddDefaultValue(int value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }


    /**
     * <p> The minimum valid value for a control parameter that is a list of integers.
     * </p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p> The minimum valid value for a control parameter that is a list of integers.
     * </p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p> The minimum valid value for a control parameter that is a list of integers.
     * </p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p> The minimum valid value for a control parameter that is a list of integers.
     * </p>
     */
    inline IntegerListConfigurationOptions& WithMin(int value) { SetMin(value); return *this;}


    /**
     * <p> The maximum valid value for a control parameter that is a list of integers.
     * </p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p> The maximum valid value for a control parameter that is a list of integers.
     * </p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p> The maximum valid value for a control parameter that is a list of integers.
     * </p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p> The maximum valid value for a control parameter that is a list of integers.
     * </p>
     */
    inline IntegerListConfigurationOptions& WithMax(int value) { SetMax(value); return *this;}


    /**
     * <p> The maximum number of list items that an interger list control parameter can
     * accept. </p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p> The maximum number of list items that an interger list control parameter can
     * accept. </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p> The maximum number of list items that an interger list control parameter can
     * accept. </p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p> The maximum number of list items that an interger list control parameter can
     * accept. </p>
     */
    inline IntegerListConfigurationOptions& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::Vector<int> m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    int m_min;
    bool m_minHasBeenSet = false;

    int m_max;
    bool m_maxHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
