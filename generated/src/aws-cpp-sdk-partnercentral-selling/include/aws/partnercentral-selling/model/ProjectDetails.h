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
    AWS_PARTNERCENTRALSELLING_API ProjectDetails();
    AWS_PARTNERCENTRALSELLING_API ProjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ProjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the business problem that the project aims to solve. This
     * information is crucial for understanding the project’s goals and objectives.</p>
     */
    inline const Aws::String& GetBusinessProblem() const{ return m_businessProblem; }
    inline bool BusinessProblemHasBeenSet() const { return m_businessProblemHasBeenSet; }
    inline void SetBusinessProblem(const Aws::String& value) { m_businessProblemHasBeenSet = true; m_businessProblem = value; }
    inline void SetBusinessProblem(Aws::String&& value) { m_businessProblemHasBeenSet = true; m_businessProblem = std::move(value); }
    inline void SetBusinessProblem(const char* value) { m_businessProblemHasBeenSet = true; m_businessProblem.assign(value); }
    inline ProjectDetails& WithBusinessProblem(const Aws::String& value) { SetBusinessProblem(value); return *this;}
    inline ProjectDetails& WithBusinessProblem(Aws::String&& value) { SetBusinessProblem(std::move(value)); return *this;}
    inline ProjectDetails& WithBusinessProblem(const char* value) { SetBusinessProblem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains revenue estimates for the partner related to the project. This field
     * provides an idea of the financial potential of the opportunity for the
     * partner.</p>
     */
    inline const Aws::Vector<ExpectedCustomerSpend>& GetExpectedCustomerSpend() const{ return m_expectedCustomerSpend; }
    inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
    inline void SetExpectedCustomerSpend(const Aws::Vector<ExpectedCustomerSpend>& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = value; }
    inline void SetExpectedCustomerSpend(Aws::Vector<ExpectedCustomerSpend>&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = std::move(value); }
    inline ProjectDetails& WithExpectedCustomerSpend(const Aws::Vector<ExpectedCustomerSpend>& value) { SetExpectedCustomerSpend(value); return *this;}
    inline ProjectDetails& WithExpectedCustomerSpend(Aws::Vector<ExpectedCustomerSpend>&& value) { SetExpectedCustomerSpend(std::move(value)); return *this;}
    inline ProjectDetails& AddExpectedCustomerSpend(const ExpectedCustomerSpend& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.push_back(value); return *this; }
    inline ProjectDetails& AddExpectedCustomerSpend(ExpectedCustomerSpend&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the estimated date of project completion. This field helps track
     * the project timeline and manage expectations.</p>
     */
    inline const Aws::String& GetTargetCompletionDate() const{ return m_targetCompletionDate; }
    inline bool TargetCompletionDateHasBeenSet() const { return m_targetCompletionDateHasBeenSet; }
    inline void SetTargetCompletionDate(const Aws::String& value) { m_targetCompletionDateHasBeenSet = true; m_targetCompletionDate = value; }
    inline void SetTargetCompletionDate(Aws::String&& value) { m_targetCompletionDateHasBeenSet = true; m_targetCompletionDate = std::move(value); }
    inline void SetTargetCompletionDate(const char* value) { m_targetCompletionDateHasBeenSet = true; m_targetCompletionDate.assign(value); }
    inline ProjectDetails& WithTargetCompletionDate(const Aws::String& value) { SetTargetCompletionDate(value); return *this;}
    inline ProjectDetails& WithTargetCompletionDate(Aws::String&& value) { SetTargetCompletionDate(std::move(value)); return *this;}
    inline ProjectDetails& WithTargetCompletionDate(const char* value) { SetTargetCompletionDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the title of the project. This title helps partners quickly
     * identify and understand the focus of the project.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ProjectDetails& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ProjectDetails& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ProjectDetails& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_businessProblem;
    bool m_businessProblemHasBeenSet = false;

    Aws::Vector<ExpectedCustomerSpend> m_expectedCustomerSpend;
    bool m_expectedCustomerSpendHasBeenSet = false;

    Aws::String m_targetCompletionDate;
    bool m_targetCompletionDateHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
