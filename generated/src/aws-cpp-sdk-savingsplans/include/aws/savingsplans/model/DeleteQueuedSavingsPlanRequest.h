/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class DeleteQueuedSavingsPlanRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API DeleteQueuedSavingsPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteQueuedSavingsPlan"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const{ return m_savingsPlanId; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline bool SavingsPlanIdHasBeenSet() const { return m_savingsPlanIdHasBeenSet; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const Aws::String& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = value; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(Aws::String&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::move(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const char* value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId.assign(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DeleteQueuedSavingsPlanRequest& WithSavingsPlanId(const Aws::String& value) { SetSavingsPlanId(value); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DeleteQueuedSavingsPlanRequest& WithSavingsPlanId(Aws::String&& value) { SetSavingsPlanId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline DeleteQueuedSavingsPlanRequest& WithSavingsPlanId(const char* value) { SetSavingsPlanId(value); return *this;}

  private:

    Aws::String m_savingsPlanId;
    bool m_savingsPlanIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
