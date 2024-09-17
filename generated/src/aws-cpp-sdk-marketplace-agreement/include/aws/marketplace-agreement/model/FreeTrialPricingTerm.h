/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/GrantItem.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Defines a short-term free pricing model where the buyers aren’t charged
   * anything within a specified limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/FreeTrialPricingTerm">AWS
   * API Reference</a></p>
   */
  class FreeTrialPricingTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API FreeTrialPricingTerm();
    AWS_AGREEMENTSERVICE_API FreeTrialPricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API FreeTrialPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration of the free trial period (5–31 days). </p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }
    inline FreeTrialPricingTerm& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}
    inline FreeTrialPricingTerm& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}
    inline FreeTrialPricingTerm& WithDuration(const char* value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entitlements granted to the acceptor of a free trial as part of an agreement
     * execution.</p>
     */
    inline const Aws::Vector<GrantItem>& GetGrants() const{ return m_grants; }
    inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }
    inline void SetGrants(const Aws::Vector<GrantItem>& value) { m_grantsHasBeenSet = true; m_grants = value; }
    inline void SetGrants(Aws::Vector<GrantItem>&& value) { m_grantsHasBeenSet = true; m_grants = std::move(value); }
    inline FreeTrialPricingTerm& WithGrants(const Aws::Vector<GrantItem>& value) { SetGrants(value); return *this;}
    inline FreeTrialPricingTerm& WithGrants(Aws::Vector<GrantItem>&& value) { SetGrants(std::move(value)); return *this;}
    inline FreeTrialPricingTerm& AddGrants(const GrantItem& value) { m_grantsHasBeenSet = true; m_grants.push_back(value); return *this; }
    inline FreeTrialPricingTerm& AddGrants(GrantItem&& value) { m_grantsHasBeenSet = true; m_grants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Category of the term.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline FreeTrialPricingTerm& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline FreeTrialPricingTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline FreeTrialPricingTerm& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<GrantItem> m_grants;
    bool m_grantsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
