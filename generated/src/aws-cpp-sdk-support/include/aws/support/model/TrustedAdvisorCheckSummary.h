/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/TrustedAdvisorResourcesSummary.h>
#include <aws/support/model/TrustedAdvisorCategorySpecificSummary.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>A summary of a Trusted Advisor check result, including the alert status, last
   * refresh, and number of resources examined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCheckSummary">AWS
   * API Reference</a></p>
   */
  class TrustedAdvisorCheckSummary
  {
  public:
    AWS_SUPPORT_API TrustedAdvisorCheckSummary();
    AWS_SUPPORT_API TrustedAdvisorCheckSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API TrustedAdvisorCheckSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }
    inline TrustedAdvisorCheckSummary& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}
    inline TrustedAdvisorCheckSummary& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}
    inline TrustedAdvisorCheckSummary& WithCheckId(const char* value) { SetCheckId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }
    inline TrustedAdvisorCheckSummary& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}
    inline TrustedAdvisorCheckSummary& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}
    inline TrustedAdvisorCheckSummary& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline TrustedAdvisorCheckSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline TrustedAdvisorCheckSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline TrustedAdvisorCheckSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Trusted Advisor check has flagged resources.</p>
     */
    inline bool GetHasFlaggedResources() const{ return m_hasFlaggedResources; }
    inline bool HasFlaggedResourcesHasBeenSet() const { return m_hasFlaggedResourcesHasBeenSet; }
    inline void SetHasFlaggedResources(bool value) { m_hasFlaggedResourcesHasBeenSet = true; m_hasFlaggedResources = value; }
    inline TrustedAdvisorCheckSummary& WithHasFlaggedResources(bool value) { SetHasFlaggedResources(value); return *this;}
    ///@}

    ///@{
    
    inline const TrustedAdvisorResourcesSummary& GetResourcesSummary() const{ return m_resourcesSummary; }
    inline bool ResourcesSummaryHasBeenSet() const { return m_resourcesSummaryHasBeenSet; }
    inline void SetResourcesSummary(const TrustedAdvisorResourcesSummary& value) { m_resourcesSummaryHasBeenSet = true; m_resourcesSummary = value; }
    inline void SetResourcesSummary(TrustedAdvisorResourcesSummary&& value) { m_resourcesSummaryHasBeenSet = true; m_resourcesSummary = std::move(value); }
    inline TrustedAdvisorCheckSummary& WithResourcesSummary(const TrustedAdvisorResourcesSummary& value) { SetResourcesSummary(value); return *this;}
    inline TrustedAdvisorCheckSummary& WithResourcesSummary(TrustedAdvisorResourcesSummary&& value) { SetResourcesSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information that relates to the category of the check. Cost
     * Optimizing is the only category that is currently supported.</p>
     */
    inline const TrustedAdvisorCategorySpecificSummary& GetCategorySpecificSummary() const{ return m_categorySpecificSummary; }
    inline bool CategorySpecificSummaryHasBeenSet() const { return m_categorySpecificSummaryHasBeenSet; }
    inline void SetCategorySpecificSummary(const TrustedAdvisorCategorySpecificSummary& value) { m_categorySpecificSummaryHasBeenSet = true; m_categorySpecificSummary = value; }
    inline void SetCategorySpecificSummary(TrustedAdvisorCategorySpecificSummary&& value) { m_categorySpecificSummaryHasBeenSet = true; m_categorySpecificSummary = std::move(value); }
    inline TrustedAdvisorCheckSummary& WithCategorySpecificSummary(const TrustedAdvisorCategorySpecificSummary& value) { SetCategorySpecificSummary(value); return *this;}
    inline TrustedAdvisorCheckSummary& WithCategorySpecificSummary(TrustedAdvisorCategorySpecificSummary&& value) { SetCategorySpecificSummary(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_hasFlaggedResources;
    bool m_hasFlaggedResourcesHasBeenSet = false;

    TrustedAdvisorResourcesSummary m_resourcesSummary;
    bool m_resourcesSummaryHasBeenSet = false;

    TrustedAdvisorCategorySpecificSummary m_categorySpecificSummary;
    bool m_categorySpecificSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
