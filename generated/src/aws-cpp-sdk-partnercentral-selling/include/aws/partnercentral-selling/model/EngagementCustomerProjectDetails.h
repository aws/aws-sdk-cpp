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
    AWS_PARTNERCENTRALSELLING_API EngagementCustomerProjectDetails();
    AWS_PARTNERCENTRALSELLING_API EngagementCustomerProjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementCustomerProjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the business problem the project aims to solve.</p>
     */
    inline const Aws::String& GetBusinessProblem() const{ return m_businessProblem; }
    inline bool BusinessProblemHasBeenSet() const { return m_businessProblemHasBeenSet; }
    inline void SetBusinessProblem(const Aws::String& value) { m_businessProblemHasBeenSet = true; m_businessProblem = value; }
    inline void SetBusinessProblem(Aws::String&& value) { m_businessProblemHasBeenSet = true; m_businessProblem = std::move(value); }
    inline void SetBusinessProblem(const char* value) { m_businessProblemHasBeenSet = true; m_businessProblem.assign(value); }
    inline EngagementCustomerProjectDetails& WithBusinessProblem(const Aws::String& value) { SetBusinessProblem(value); return *this;}
    inline EngagementCustomerProjectDetails& WithBusinessProblem(Aws::String&& value) { SetBusinessProblem(std::move(value)); return *this;}
    inline EngagementCustomerProjectDetails& WithBusinessProblem(const char* value) { SetBusinessProblem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target completion date for the customer's project.</p>
     */
    inline const Aws::String& GetTargetCompletionDate() const{ return m_targetCompletionDate; }
    inline bool TargetCompletionDateHasBeenSet() const { return m_targetCompletionDateHasBeenSet; }
    inline void SetTargetCompletionDate(const Aws::String& value) { m_targetCompletionDateHasBeenSet = true; m_targetCompletionDate = value; }
    inline void SetTargetCompletionDate(Aws::String&& value) { m_targetCompletionDateHasBeenSet = true; m_targetCompletionDate = std::move(value); }
    inline void SetTargetCompletionDate(const char* value) { m_targetCompletionDateHasBeenSet = true; m_targetCompletionDate.assign(value); }
    inline EngagementCustomerProjectDetails& WithTargetCompletionDate(const Aws::String& value) { SetTargetCompletionDate(value); return *this;}
    inline EngagementCustomerProjectDetails& WithTargetCompletionDate(Aws::String&& value) { SetTargetCompletionDate(std::move(value)); return *this;}
    inline EngagementCustomerProjectDetails& WithTargetCompletionDate(const char* value) { SetTargetCompletionDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the project.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline EngagementCustomerProjectDetails& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline EngagementCustomerProjectDetails& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline EngagementCustomerProjectDetails& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_businessProblem;
    bool m_businessProblemHasBeenSet = false;

    Aws::String m_targetCompletionDate;
    bool m_targetCompletionDateHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
