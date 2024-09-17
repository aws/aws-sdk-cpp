/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class ReturnSavingsPlanRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API ReturnSavingsPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReturnSavingsPlan"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const{ return m_savingsPlanId; }
    inline bool SavingsPlanIdHasBeenSet() const { return m_savingsPlanIdHasBeenSet; }
    inline void SetSavingsPlanId(const Aws::String& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = value; }
    inline void SetSavingsPlanId(Aws::String&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::move(value); }
    inline void SetSavingsPlanId(const char* value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId.assign(value); }
    inline ReturnSavingsPlanRequest& WithSavingsPlanId(const Aws::String& value) { SetSavingsPlanId(value); return *this;}
    inline ReturnSavingsPlanRequest& WithSavingsPlanId(Aws::String&& value) { SetSavingsPlanId(std::move(value)); return *this;}
    inline ReturnSavingsPlanRequest& WithSavingsPlanId(const char* value) { SetSavingsPlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ReturnSavingsPlanRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ReturnSavingsPlanRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ReturnSavingsPlanRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_savingsPlanId;
    bool m_savingsPlanIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
