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
    AWS_RESILIENCEHUB_API ComplianceDrift();
    AWS_RESILIENCEHUB_API ComplianceDrift(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ComplianceDrift& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Assessment identifier that is associated with this drift item.</p>
     */
    inline const Aws::String& GetActualReferenceId() const{ return m_actualReferenceId; }
    inline bool ActualReferenceIdHasBeenSet() const { return m_actualReferenceIdHasBeenSet; }
    inline void SetActualReferenceId(const Aws::String& value) { m_actualReferenceIdHasBeenSet = true; m_actualReferenceId = value; }
    inline void SetActualReferenceId(Aws::String&& value) { m_actualReferenceIdHasBeenSet = true; m_actualReferenceId = std::move(value); }
    inline void SetActualReferenceId(const char* value) { m_actualReferenceIdHasBeenSet = true; m_actualReferenceId.assign(value); }
    inline ComplianceDrift& WithActualReferenceId(const Aws::String& value) { SetActualReferenceId(value); return *this;}
    inline ComplianceDrift& WithActualReferenceId(Aws::String&& value) { SetActualReferenceId(std::move(value)); return *this;}
    inline ComplianceDrift& WithActualReferenceId(const char* value) { SetActualReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Actual compliance value of the entity.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetActualValue() const{ return m_actualValue; }
    inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
    inline void SetActualValue(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { m_actualValueHasBeenSet = true; m_actualValue = value; }
    inline void SetActualValue(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { m_actualValueHasBeenSet = true; m_actualValue = std::move(value); }
    inline ComplianceDrift& WithActualValue(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { SetActualValue(value); return *this;}
    inline ComplianceDrift& WithActualValue(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { SetActualValue(std::move(value)); return *this;}
    inline ComplianceDrift& AddActualValue(const DisruptionType& key, const DisruptionCompliance& value) { m_actualValueHasBeenSet = true; m_actualValue.emplace(key, value); return *this; }
    inline ComplianceDrift& AddActualValue(DisruptionType&& key, const DisruptionCompliance& value) { m_actualValueHasBeenSet = true; m_actualValue.emplace(std::move(key), value); return *this; }
    inline ComplianceDrift& AddActualValue(const DisruptionType& key, DisruptionCompliance&& value) { m_actualValueHasBeenSet = true; m_actualValue.emplace(key, std::move(value)); return *this; }
    inline ComplianceDrift& AddActualValue(DisruptionType&& key, DisruptionCompliance&& value) { m_actualValueHasBeenSet = true; m_actualValue.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifier of your application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline ComplianceDrift& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline ComplianceDrift& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline ComplianceDrift& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Published version of your application on which drift was detected.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }
    inline ComplianceDrift& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline ComplianceDrift& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline ComplianceDrift& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Difference type between actual and expected recovery point objective (RPO)
     * and recovery time objective (RTO) values. Currently, Resilience Hub supports
     * only <code>NotEqual</code> difference type.</p>
     */
    inline const DifferenceType& GetDiffType() const{ return m_diffType; }
    inline bool DiffTypeHasBeenSet() const { return m_diffTypeHasBeenSet; }
    inline void SetDiffType(const DifferenceType& value) { m_diffTypeHasBeenSet = true; m_diffType = value; }
    inline void SetDiffType(DifferenceType&& value) { m_diffTypeHasBeenSet = true; m_diffType = std::move(value); }
    inline ComplianceDrift& WithDiffType(const DifferenceType& value) { SetDiffType(value); return *this;}
    inline ComplianceDrift& WithDiffType(DifferenceType&& value) { SetDiffType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of drift detected. Currently, Resilience Hub supports only
     * <b>ApplicationCompliance</b> drift type.</p>
     */
    inline const DriftType& GetDriftType() const{ return m_driftType; }
    inline bool DriftTypeHasBeenSet() const { return m_driftTypeHasBeenSet; }
    inline void SetDriftType(const DriftType& value) { m_driftTypeHasBeenSet = true; m_driftType = value; }
    inline void SetDriftType(DriftType&& value) { m_driftTypeHasBeenSet = true; m_driftType = std::move(value); }
    inline ComplianceDrift& WithDriftType(const DriftType& value) { SetDriftType(value); return *this;}
    inline ComplianceDrift& WithDriftType(DriftType&& value) { SetDriftType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of an entity in which drift was detected. For compliance drift,
     * the entity ID can be either application ID or the AppComponent ID.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline ComplianceDrift& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline ComplianceDrift& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline ComplianceDrift& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entity in which drift was detected. For compliance drifts,
     * Resilience Hub supports <code>AWS::ResilienceHub::AppComponent</code> and
     * <code>AWS::ResilienceHub::Application</code>.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }
    inline ComplianceDrift& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}
    inline ComplianceDrift& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}
    inline ComplianceDrift& WithEntityType(const char* value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assessment identifier of a previous assessment of the same application
     * version. Resilience Hub uses the previous assessment (associated with the
     * reference identifier) to compare the compliance with the current assessment to
     * identify drifts.</p>
     */
    inline const Aws::String& GetExpectedReferenceId() const{ return m_expectedReferenceId; }
    inline bool ExpectedReferenceIdHasBeenSet() const { return m_expectedReferenceIdHasBeenSet; }
    inline void SetExpectedReferenceId(const Aws::String& value) { m_expectedReferenceIdHasBeenSet = true; m_expectedReferenceId = value; }
    inline void SetExpectedReferenceId(Aws::String&& value) { m_expectedReferenceIdHasBeenSet = true; m_expectedReferenceId = std::move(value); }
    inline void SetExpectedReferenceId(const char* value) { m_expectedReferenceIdHasBeenSet = true; m_expectedReferenceId.assign(value); }
    inline ComplianceDrift& WithExpectedReferenceId(const Aws::String& value) { SetExpectedReferenceId(value); return *this;}
    inline ComplianceDrift& WithExpectedReferenceId(Aws::String&& value) { SetExpectedReferenceId(std::move(value)); return *this;}
    inline ComplianceDrift& WithExpectedReferenceId(const char* value) { SetExpectedReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected compliance value of an entity.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetExpectedValue() const{ return m_expectedValue; }
    inline bool ExpectedValueHasBeenSet() const { return m_expectedValueHasBeenSet; }
    inline void SetExpectedValue(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { m_expectedValueHasBeenSet = true; m_expectedValue = value; }
    inline void SetExpectedValue(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { m_expectedValueHasBeenSet = true; m_expectedValue = std::move(value); }
    inline ComplianceDrift& WithExpectedValue(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { SetExpectedValue(value); return *this;}
    inline ComplianceDrift& WithExpectedValue(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { SetExpectedValue(std::move(value)); return *this;}
    inline ComplianceDrift& AddExpectedValue(const DisruptionType& key, const DisruptionCompliance& value) { m_expectedValueHasBeenSet = true; m_expectedValue.emplace(key, value); return *this; }
    inline ComplianceDrift& AddExpectedValue(DisruptionType&& key, const DisruptionCompliance& value) { m_expectedValueHasBeenSet = true; m_expectedValue.emplace(std::move(key), value); return *this; }
    inline ComplianceDrift& AddExpectedValue(const DisruptionType& key, DisruptionCompliance&& value) { m_expectedValueHasBeenSet = true; m_expectedValue.emplace(key, std::move(value)); return *this; }
    inline ComplianceDrift& AddExpectedValue(DisruptionType&& key, DisruptionCompliance&& value) { m_expectedValueHasBeenSet = true; m_expectedValue.emplace(std::move(key), std::move(value)); return *this; }
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

    DifferenceType m_diffType;
    bool m_diffTypeHasBeenSet = false;

    DriftType m_driftType;
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
