/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/DifferenceType.h>
#include <aws/resiliencehub/model/DriftType.h>
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
   * <p>Indicates the compliance drifts (recovery time objective (RTO) and recovery
   * point objective (RPO)) that were detected for an assessed entity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ComplianceDrift">AWS
   * API Reference</a></p>
   */
  class ComplianceDrift
  {
  public:
    AWS_RESILIENCEHUB_API ComplianceDrift() = default;
    AWS_RESILIENCEHUB_API ComplianceDrift(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ComplianceDrift& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Assessment identifier that is associated with this drift item.</p>
     */
    inline const Aws::String& GetActualReferenceId() const { return m_actualReferenceId; }
    inline bool ActualReferenceIdHasBeenSet() const { return m_actualReferenceIdHasBeenSet; }
    template<typename ActualReferenceIdT = Aws::String>
    void SetActualReferenceId(ActualReferenceIdT&& value) { m_actualReferenceIdHasBeenSet = true; m_actualReferenceId = std::forward<ActualReferenceIdT>(value); }
    template<typename ActualReferenceIdT = Aws::String>
    ComplianceDrift& WithActualReferenceId(ActualReferenceIdT&& value) { SetActualReferenceId(std::forward<ActualReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Actual compliance value of the entity.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetActualValue() const { return m_actualValue; }
    inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
    template<typename ActualValueT = Aws::Map<DisruptionType, DisruptionCompliance>>
    void SetActualValue(ActualValueT&& value) { m_actualValueHasBeenSet = true; m_actualValue = std::forward<ActualValueT>(value); }
    template<typename ActualValueT = Aws::Map<DisruptionType, DisruptionCompliance>>
    ComplianceDrift& WithActualValue(ActualValueT&& value) { SetActualValue(std::forward<ActualValueT>(value)); return *this;}
    inline ComplianceDrift& AddActualValue(DisruptionType key, DisruptionCompliance value) {
      m_actualValueHasBeenSet = true; m_actualValue.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Identifier of your application.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    ComplianceDrift& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Published version of your application on which drift was detected.</p>
     */
    inline const Aws::String& GetAppVersion() const { return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    template<typename AppVersionT = Aws::String>
    void SetAppVersion(AppVersionT&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::forward<AppVersionT>(value); }
    template<typename AppVersionT = Aws::String>
    ComplianceDrift& WithAppVersion(AppVersionT&& value) { SetAppVersion(std::forward<AppVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Difference type between actual and expected recovery point objective (RPO)
     * and recovery time objective (RTO) values. Currently, Resilience Hub supports
     * only <code>NotEqual</code> difference type.</p>
     */
    inline DifferenceType GetDiffType() const { return m_diffType; }
    inline bool DiffTypeHasBeenSet() const { return m_diffTypeHasBeenSet; }
    inline void SetDiffType(DifferenceType value) { m_diffTypeHasBeenSet = true; m_diffType = value; }
    inline ComplianceDrift& WithDiffType(DifferenceType value) { SetDiffType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of drift detected. Currently, Resilience Hub supports only
     * <b>ApplicationCompliance</b> drift type.</p>
     */
    inline DriftType GetDriftType() const { return m_driftType; }
    inline bool DriftTypeHasBeenSet() const { return m_driftTypeHasBeenSet; }
    inline void SetDriftType(DriftType value) { m_driftTypeHasBeenSet = true; m_driftType = value; }
    inline ComplianceDrift& WithDriftType(DriftType value) { SetDriftType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of an entity in which drift was detected. For compliance drift,
     * the entity ID can be either application ID or the AppComponent ID.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    ComplianceDrift& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entity in which drift was detected. For compliance drifts,
     * Resilience Hub supports <code>AWS::ResilienceHub::AppComponent</code> and
     * <code>AWS::ResilienceHub::Application</code>.</p>
     */
    inline const Aws::String& GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    template<typename EntityTypeT = Aws::String>
    void SetEntityType(EntityTypeT&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::forward<EntityTypeT>(value); }
    template<typename EntityTypeT = Aws::String>
    ComplianceDrift& WithEntityType(EntityTypeT&& value) { SetEntityType(std::forward<EntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assessment identifier of a previous assessment of the same application
     * version. Resilience Hub uses the previous assessment (associated with the
     * reference identifier) to compare the compliance with the current assessment to
     * identify drifts.</p>
     */
    inline const Aws::String& GetExpectedReferenceId() const { return m_expectedReferenceId; }
    inline bool ExpectedReferenceIdHasBeenSet() const { return m_expectedReferenceIdHasBeenSet; }
    template<typename ExpectedReferenceIdT = Aws::String>
    void SetExpectedReferenceId(ExpectedReferenceIdT&& value) { m_expectedReferenceIdHasBeenSet = true; m_expectedReferenceId = std::forward<ExpectedReferenceIdT>(value); }
    template<typename ExpectedReferenceIdT = Aws::String>
    ComplianceDrift& WithExpectedReferenceId(ExpectedReferenceIdT&& value) { SetExpectedReferenceId(std::forward<ExpectedReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected compliance value of an entity.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetExpectedValue() const { return m_expectedValue; }
    inline bool ExpectedValueHasBeenSet() const { return m_expectedValueHasBeenSet; }
    template<typename ExpectedValueT = Aws::Map<DisruptionType, DisruptionCompliance>>
    void SetExpectedValue(ExpectedValueT&& value) { m_expectedValueHasBeenSet = true; m_expectedValue = std::forward<ExpectedValueT>(value); }
    template<typename ExpectedValueT = Aws::Map<DisruptionType, DisruptionCompliance>>
    ComplianceDrift& WithExpectedValue(ExpectedValueT&& value) { SetExpectedValue(std::forward<ExpectedValueT>(value)); return *this;}
    inline ComplianceDrift& AddExpectedValue(DisruptionType key, DisruptionCompliance value) {
      m_expectedValueHasBeenSet = true; m_expectedValue.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_actualReferenceId;
    bool m_actualReferenceIdHasBeenSet = false;

    Aws::Map<DisruptionType, DisruptionCompliance> m_actualValue;
    bool m_actualValueHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    DifferenceType m_diffType{DifferenceType::NOT_SET};
    bool m_diffTypeHasBeenSet = false;

    DriftType m_driftType{DriftType::NOT_SET};
    bool m_driftTypeHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_expectedReferenceId;
    bool m_expectedReferenceIdHasBeenSet = false;

    Aws::Map<DisruptionType, DisruptionCompliance> m_expectedValue;
    bool m_expectedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
