/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/model/SavingsPlansFilterName.h>
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
namespace SavingsPlans
{
namespace Model
{

  /**
   * <p>Information about a filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/SavingsPlanFilter">AWS
   * API Reference</a></p>
   */
  class SavingsPlanFilter
  {
  public:
    AWS_SAVINGSPLANS_API SavingsPlanFilter();
    AWS_SAVINGSPLANS_API SavingsPlanFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlanFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter name.</p>
     */
    inline const SavingsPlansFilterName& GetName() const{ return m_name; }

    /**
     * <p>The filter name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The filter name.</p>
     */
    inline void SetName(const SavingsPlansFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The filter name.</p>
     */
    inline void SetName(SavingsPlansFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The filter name.</p>
     */
    inline SavingsPlanFilter& WithName(const SavingsPlansFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The filter name.</p>
     */
    inline SavingsPlanFilter& WithName(SavingsPlansFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The filter value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The filter value.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The filter value.</p>
     */
    inline SavingsPlanFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline SavingsPlanFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline SavingsPlanFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The filter value.</p>
     */
    inline SavingsPlanFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter value.</p>
     */
    inline SavingsPlanFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    SavingsPlansFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
