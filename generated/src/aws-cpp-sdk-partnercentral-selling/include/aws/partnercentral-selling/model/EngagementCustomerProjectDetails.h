/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Provides comprehensive details about a customer project associated with an
   * Engagement. This may include information such as project goals, timelines, and
   * specific customer requirements. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementCustomerProjectDetails">AWS
   * API Reference</a></p>
   */
  class EngagementCustomerProjectDetails
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementCustomerProjectDetails() = default;
    AWS_PARTNERCENTRALSELLING_API EngagementCustomerProjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementCustomerProjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the project.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    EngagementCustomerProjectDetails& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the business problem the project aims to solve.</p>
     */
    inline const Aws::String& GetBusinessProblem() const { return m_businessProblem; }
    inline bool BusinessProblemHasBeenSet() const { return m_businessProblemHasBeenSet; }
    template<typename BusinessProblemT = Aws::String>
    void SetBusinessProblem(BusinessProblemT&& value) { m_businessProblemHasBeenSet = true; m_businessProblem = std::forward<BusinessProblemT>(value); }
    template<typename BusinessProblemT = Aws::String>
    EngagementCustomerProjectDetails& WithBusinessProblem(BusinessProblemT&& value) { SetBusinessProblem(std::forward<BusinessProblemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target completion date for the customer's project.</p>
     */
    inline const Aws::String& GetTargetCompletionDate() const { return m_targetCompletionDate; }
    inline bool TargetCompletionDateHasBeenSet() const { return m_targetCompletionDateHasBeenSet; }
    template<typename TargetCompletionDateT = Aws::String>
    void SetTargetCompletionDate(TargetCompletionDateT&& value) { m_targetCompletionDateHasBeenSet = true; m_targetCompletionDate = std::forward<TargetCompletionDateT>(value); }
    template<typename TargetCompletionDateT = Aws::String>
    EngagementCustomerProjectDetails& WithTargetCompletionDate(TargetCompletionDateT&& value) { SetTargetCompletionDate(std::forward<TargetCompletionDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_businessProblem;
    bool m_businessProblemHasBeenSet = false;

    Aws::String m_targetCompletionDate;
    bool m_targetCompletionDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
