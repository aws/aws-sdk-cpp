/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a budget.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BudgetDetail">AWS
   * API Reference</a></p>
   */
  class BudgetDetail
  {
  public:
    AWS_SERVICECATALOG_API BudgetDetail();
    AWS_SERVICECATALOG_API BudgetDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API BudgetDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the associated budget.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    /**
     * <p>Name of the associated budget.</p>
     */
    inline BudgetDetail& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    /**
     * <p>Name of the associated budget.</p>
     */
    inline BudgetDetail& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    /**
     * <p>Name of the associated budget.</p>
     */
    inline BudgetDetail& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}

  private:

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
