/**
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
    AWS_RESILIENCEHUB_API AppComponentCompliance() = default;
    AWS_RESILIENCEHUB_API AppComponentCompliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppComponentCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Application Component.</p>
     */
    inline const Aws::String& GetAppComponentName() const { return m_appComponentName; }
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }
    template<typename AppComponentNameT = Aws::String>
    void SetAppComponentName(AppComponentNameT&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::forward<AppComponentNameT>(value); }
    template<typename AppComponentNameT = Aws::String>
    AppComponentCompliance& WithAppComponentName(AppComponentNameT&& value) { SetAppComponentName(std::forward<AppComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance of the Application Component against the resiliency
     * policy.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetCompliance() const { return m_compliance; }
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }
    template<typename ComplianceT = Aws::Map<DisruptionType, DisruptionCompliance>>
    void SetCompliance(ComplianceT&& value) { m_complianceHasBeenSet = true; m_compliance = std::forward<ComplianceT>(value); }
    template<typename ComplianceT = Aws::Map<DisruptionType, DisruptionCompliance>>
    AppComponentCompliance& WithCompliance(ComplianceT&& value) { SetCompliance(std::forward<ComplianceT>(value)); return *this;}
    inline AppComponentCompliance& AddCompliance(DisruptionType key, DisruptionCompliance value) {
      m_complianceHasBeenSet = true; m_compliance.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The cost for the application.</p>
     */
    inline const Cost& GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    template<typename CostT = Cost>
    void SetCost(CostT&& value) { m_costHasBeenSet = true; m_cost = std::forward<CostT>(value); }
    template<typename CostT = Cost>
    AppComponentCompliance& WithCost(CostT&& value) { SetCost(std::forward<CostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AppComponentCompliance& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current resiliency score for the application.</p>
     */
    inline const ResiliencyScore& GetResiliencyScore() const { return m_resiliencyScore; }
    inline bool ResiliencyScoreHasBeenSet() const { return m_resiliencyScoreHasBeenSet; }
    template<typename ResiliencyScoreT = ResiliencyScore>
    void SetResiliencyScore(ResiliencyScoreT&& value) { m_resiliencyScoreHasBeenSet = true; m_resiliencyScore = std::forward<ResiliencyScoreT>(value); }
    template<typename ResiliencyScoreT = ResiliencyScore>
    AppComponentCompliance& WithResiliencyScore(ResiliencyScoreT&& value) { SetResiliencyScore(std::forward<ResiliencyScoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline ComplianceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ComplianceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AppComponentCompliance& WithStatus(ComplianceStatus value) { SetStatus(value); return *this;}
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

    ComplianceStatus m_status{ComplianceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
