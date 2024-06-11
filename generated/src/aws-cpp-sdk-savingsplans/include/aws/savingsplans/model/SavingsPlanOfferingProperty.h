﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/model/SavingsPlanOfferingPropertyKey.h>
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
   * <p>Information about a Savings Plan offering property.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/SavingsPlanOfferingProperty">AWS
   * API Reference</a></p>
   */
  class SavingsPlanOfferingProperty
  {
  public:
    AWS_SAVINGSPLANS_API SavingsPlanOfferingProperty();
    AWS_SAVINGSPLANS_API SavingsPlanOfferingProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API SavingsPlanOfferingProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAVINGSPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property name.</p>
     */
    inline const SavingsPlanOfferingPropertyKey& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const SavingsPlanOfferingPropertyKey& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(SavingsPlanOfferingPropertyKey&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline SavingsPlanOfferingProperty& WithName(const SavingsPlanOfferingPropertyKey& value) { SetName(value); return *this;}
    inline SavingsPlanOfferingProperty& WithName(SavingsPlanOfferingPropertyKey&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline SavingsPlanOfferingProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline SavingsPlanOfferingProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline SavingsPlanOfferingProperty& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    SavingsPlanOfferingPropertyKey m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
