﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/Cost.h>
#include <aws/resiliencehub/model/ResiliencyScore.h>
#include <aws/resiliencehub/model/ComplianceStatus.h>
#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/resiliencehub/model/DisruptionCompliance.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines the compliance of an Application Component against the resiliency
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppComponentCompliance">AWS
   * API Reference</a></p>
   */
  class AppComponentCompliance
  {
  public:
    AWS_RESILIENCEHUB_API AppComponentCompliance();
    AWS_RESILIENCEHUB_API AppComponentCompliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppComponentCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Application Component.</p>
     */
    inline const Aws::String& GetAppComponentName() const{ return m_appComponentName; }
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }
    inline void SetAppComponentName(const Aws::String& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = value; }
    inline void SetAppComponentName(Aws::String&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::move(value); }
    inline void SetAppComponentName(const char* value) { m_appComponentNameHasBeenSet = true; m_appComponentName.assign(value); }
    inline AppComponentCompliance& WithAppComponentName(const Aws::String& value) { SetAppComponentName(value); return *this;}
    inline AppComponentCompliance& WithAppComponentName(Aws::String&& value) { SetAppComponentName(std::move(value)); return *this;}
    inline AppComponentCompliance& WithAppComponentName(const char* value) { SetAppComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance of the Application Component against the resiliency
     * policy.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetCompliance() const{ return m_compliance; }
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }
    inline void SetCompliance(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { m_complianceHasBeenSet = true; m_compliance = value; }
    inline void SetCompliance(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }
    inline AppComponentCompliance& WithCompliance(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { SetCompliance(value); return *this;}
    inline AppComponentCompliance& WithCompliance(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { SetCompliance(std::move(value)); return *this;}
    inline AppComponentCompliance& AddCompliance(const DisruptionType& key, const DisruptionCompliance& value) { m_complianceHasBeenSet = true; m_compliance.emplace(key, value); return *this; }
    inline AppComponentCompliance& AddCompliance(DisruptionType&& key, const DisruptionCompliance& value) { m_complianceHasBeenSet = true; m_compliance.emplace(std::move(key), value); return *this; }
    inline AppComponentCompliance& AddCompliance(const DisruptionType& key, DisruptionCompliance&& value) { m_complianceHasBeenSet = true; m_compliance.emplace(key, std::move(value)); return *this; }
    inline AppComponentCompliance& AddCompliance(DisruptionType&& key, DisruptionCompliance&& value) { m_complianceHasBeenSet = true; m_compliance.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cost for the application.</p>
     */
    inline const Cost& GetCost() const{ return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    inline void SetCost(const Cost& value) { m_costHasBeenSet = true; m_cost = value; }
    inline void SetCost(Cost&& value) { m_costHasBeenSet = true; m_cost = std::move(value); }
    inline AppComponentCompliance& WithCost(const Cost& value) { SetCost(value); return *this;}
    inline AppComponentCompliance& WithCost(Cost&& value) { SetCost(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AppComponentCompliance& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AppComponentCompliance& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AppComponentCompliance& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current resiliency score for the application.</p>
     */
    inline const ResiliencyScore& GetResiliencyScore() const{ return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    inline void SetResiliencyScore(const ResiliencyScore& value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = value; }
    inline void SetResiliencyScore(ResiliencyScore&& value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = std::move(value); }
    inline AppComponentCompliance& WithResiliencyScore(const ResiliencyScore& value) { SetResiliencyScore(value); return *this;}
    inline AppComponentCompliance& WithResiliencyScore(ResiliencyScore&& value) { SetResiliencyScore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline const ComplianceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ComplianceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ComplianceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AppComponentCompliance& WithStatus(const ComplianceStatus& value) { SetStatus(value); return *this;}
    inline AppComponentCompliance& WithStatus(ComplianceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appComponentName;
    bool m_appComponentNameHasBeenSet = false;

    Aws::Map<DisruptionType, DisruptionCompliance> m_compliance;
    bool m_complianceHasBeenSet = false;

    Cost m_cost;
    bool m_costHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResiliencyScore m_resiliencyScore;
    bool m_resiliencyScoreHasBeenSet = false;

    ComplianceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
