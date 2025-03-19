/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ComplianceStatus.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a disruption compliance recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RecommendationDisruptionCompliance">AWS
   * API Reference</a></p>
   */
  class RecommendationDisruptionCompliance
  {
  public:
    AWS_RESILIENCEHUB_API RecommendationDisruptionCompliance() = default;
    AWS_RESILIENCEHUB_API RecommendationDisruptionCompliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API RecommendationDisruptionCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expected compliance status after applying the recommended configuration
     * change.</p>
     */
    inline ComplianceStatus GetExpectedComplianceStatus() const { return m_expectedComplianceStatus; }
    inline bool ExpectedComplianceStatusHasBeenSet() const { return m_expectedComplianceStatusHasBeenSet; }
    inline void SetExpectedComplianceStatus(ComplianceStatus value) { m_expectedComplianceStatusHasBeenSet = true; m_expectedComplianceStatus = value; }
    inline RecommendationDisruptionCompliance& WithExpectedComplianceStatus(ComplianceStatus value) { SetExpectedComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected Recovery Point Objective (RPO) description after applying the
     * recommended configuration change.</p>
     */
    inline const Aws::String& GetExpectedRpoDescription() const { return m_expectedRpoDescription; }
    inline bool ExpectedRpoDescriptionHasBeenSet() const { return m_expectedRpoDescriptionHasBeenSet; }
    template<typename ExpectedRpoDescriptionT = Aws::String>
    void SetExpectedRpoDescription(ExpectedRpoDescriptionT&& value) { m_expectedRpoDescriptionHasBeenSet = true; m_expectedRpoDescription = std::forward<ExpectedRpoDescriptionT>(value); }
    template<typename ExpectedRpoDescriptionT = Aws::String>
    RecommendationDisruptionCompliance& WithExpectedRpoDescription(ExpectedRpoDescriptionT&& value) { SetExpectedRpoDescription(std::forward<ExpectedRpoDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected RPO after applying the recommended configuration change.</p>
     */
    inline int GetExpectedRpoInSecs() const { return m_expectedRpoInSecs; }
    inline bool ExpectedRpoInSecsHasBeenSet() const { return m_expectedRpoInSecsHasBeenSet; }
    inline void SetExpectedRpoInSecs(int value) { m_expectedRpoInSecsHasBeenSet = true; m_expectedRpoInSecs = value; }
    inline RecommendationDisruptionCompliance& WithExpectedRpoInSecs(int value) { SetExpectedRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected Recovery Time Objective (RTO) description after applying the
     * recommended configuration change.</p>
     */
    inline const Aws::String& GetExpectedRtoDescription() const { return m_expectedRtoDescription; }
    inline bool ExpectedRtoDescriptionHasBeenSet() const { return m_expectedRtoDescriptionHasBeenSet; }
    template<typename ExpectedRtoDescriptionT = Aws::String>
    void SetExpectedRtoDescription(ExpectedRtoDescriptionT&& value) { m_expectedRtoDescriptionHasBeenSet = true; m_expectedRtoDescription = std::forward<ExpectedRtoDescriptionT>(value); }
    template<typename ExpectedRtoDescriptionT = Aws::String>
    RecommendationDisruptionCompliance& WithExpectedRtoDescription(ExpectedRtoDescriptionT&& value) { SetExpectedRtoDescription(std::forward<ExpectedRtoDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected RTO after applying the recommended configuration change.</p>
     */
    inline int GetExpectedRtoInSecs() const { return m_expectedRtoInSecs; }
    inline bool ExpectedRtoInSecsHasBeenSet() const { return m_expectedRtoInSecsHasBeenSet; }
    inline void SetExpectedRtoInSecs(int value) { m_expectedRtoInSecsHasBeenSet = true; m_expectedRtoInSecs = value; }
    inline RecommendationDisruptionCompliance& WithExpectedRtoInSecs(int value) { SetExpectedRtoInSecs(value); return *this;}
    ///@}
  private:

    ComplianceStatus m_expectedComplianceStatus{ComplianceStatus::NOT_SET};
    bool m_expectedComplianceStatusHasBeenSet = false;

    Aws::String m_expectedRpoDescription;
    bool m_expectedRpoDescriptionHasBeenSet = false;

    int m_expectedRpoInSecs{0};
    bool m_expectedRpoInSecsHasBeenSet = false;

    Aws::String m_expectedRtoDescription;
    bool m_expectedRtoDescriptionHasBeenSet = false;

    int m_expectedRtoInSecs{0};
    bool m_expectedRtoInSecsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
