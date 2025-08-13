/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/ExpectedCustomerSpend.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Contains details about the project associated with the Engagement Invitation,
   * including the business problem and expected outcomes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProjectDetails">AWS
   * API Reference</a></p>
   */
  class ProjectDetails
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ProjectDetails() = default;
    AWS_PARTNERCENTRALSELLING_API ProjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ProjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the business problem that the project aims to solve. This
     * information is crucial for understanding the project’s goals and objectives.</p>
     */
    inline const Aws::String& GetBusinessProblem() const { return m_businessProblem; }
    inline bool BusinessProblemHasBeenSet() const { return m_businessProblemHasBeenSet; }
    template<typename BusinessProblemT = Aws::String>
    void SetBusinessProblem(BusinessProblemT&& value) { m_businessProblemHasBeenSet = true; m_businessProblem = std::forward<BusinessProblemT>(value); }
    template<typename BusinessProblemT = Aws::String>
    ProjectDetails& WithBusinessProblem(BusinessProblemT&& value) { SetBusinessProblem(std::forward<BusinessProblemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the title of the project. This title helps partners quickly
     * identify and understand the focus of the project.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ProjectDetails& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the estimated date of project completion. This field helps track
     * the project timeline and manage expectations.</p>
     */
    inline const Aws::String& GetTargetCompletionDate() const { return m_targetCompletionDate; }
    inline bool TargetCompletionDateHasBeenSet() const { return m_targetCompletionDateHasBeenSet; }
    template<typename TargetCompletionDateT = Aws::String>
    void SetTargetCompletionDate(TargetCompletionDateT&& value) { m_targetCompletionDateHasBeenSet = true; m_targetCompletionDate = std::forward<TargetCompletionDateT>(value); }
    template<typename TargetCompletionDateT = Aws::String>
    ProjectDetails& WithTargetCompletionDate(TargetCompletionDateT&& value) { SetTargetCompletionDate(std::forward<TargetCompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains revenue estimates for the partner related to the project. This field
     * provides an idea of the financial potential of the opportunity for the
     * partner.</p>
     */
    inline const Aws::Vector<ExpectedCustomerSpend>& GetExpectedCustomerSpend() const { return m_expectedCustomerSpend; }
    inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
    template<typename ExpectedCustomerSpendT = Aws::Vector<ExpectedCustomerSpend>>
    void SetExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = std::forward<ExpectedCustomerSpendT>(value); }
    template<typename ExpectedCustomerSpendT = Aws::Vector<ExpectedCustomerSpend>>
    ProjectDetails& WithExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { SetExpectedCustomerSpend(std::forward<ExpectedCustomerSpendT>(value)); return *this;}
    template<typename ExpectedCustomerSpendT = ExpectedCustomerSpend>
    ProjectDetails& AddExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.emplace_back(std::forward<ExpectedCustomerSpendT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_businessProblem;
    bool m_businessProblemHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_targetCompletionDate;
    bool m_targetCompletionDateHasBeenSet = false;

    Aws::Vector<ExpectedCustomerSpend> m_expectedCustomerSpend;
    bool m_expectedCustomerSpendHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
