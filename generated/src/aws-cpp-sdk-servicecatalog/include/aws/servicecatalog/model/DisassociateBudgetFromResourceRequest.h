﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class DisassociateBudgetFromResourceRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DisassociateBudgetFromResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateBudgetFromResource"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the budget you want to disassociate.</p>
     */
    inline const Aws::String& GetBudgetName() const { return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    template<typename BudgetNameT = Aws::String>
    void SetBudgetName(BudgetNameT&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::forward<BudgetNameT>(value); }
    template<typename BudgetNameT = Aws::String>
    DisassociateBudgetFromResourceRequest& WithBudgetName(BudgetNameT&& value) { SetBudgetName(std::forward<BudgetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier you want to disassociate from. Either a portfolio-id
     * or a product-id.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    DisassociateBudgetFromResourceRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
