/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/model/SavingsPlanRatePropertyKey.h>
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
namespace SavingsPlans
{
namespace Model
{

  /**
   * <p>Information about a property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/SavingsPlanRateProperty">AWS
   * API Reference</a></p>
   */
  class SavingsPlanRateProperty
  {
  public:
    AWS_SAVINGSPLANS_API SavingsPlanRateProperty();
    AWS_SAVINGSPLANS_API SavingsPlanRateProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlanRateProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property name.</p>
     */
    inline const SavingsPlanRatePropertyKey& GetName() const{ return m_name; }

    /**
     * <p>The property name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The property name.</p>
     */
    inline void SetName(const SavingsPlanRatePropertyKey& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The property name.</p>
     */
    inline void SetName(SavingsPlanRatePropertyKey&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The property name.</p>
     */
    inline SavingsPlanRateProperty& WithName(const SavingsPlanRatePropertyKey& value) { SetName(value); return *this;}

    /**
     * <p>The property name.</p>
     */
    inline SavingsPlanRateProperty& WithName(SavingsPlanRatePropertyKey&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The property value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The property value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The property value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The property value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The property value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The property value.</p>
     */
    inline SavingsPlanRateProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The property value.</p>
     */
    inline SavingsPlanRateProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The property value.</p>
     */
    inline SavingsPlanRateProperty& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    SavingsPlanRatePropertyKey m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
