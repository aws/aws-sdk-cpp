/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ExascaleDbStorageDetails.h>
#include <aws/odb/model/ResourceStatus.h>
#include <aws/odb/model/ShapeAttribute.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>Summary information about an Exascale storage vault.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ExascaleDbStorageVaultSummary">AWS
 * API Reference</a></p>
 */
class ExascaleDbStorageVaultSummary {
 public:
  AWS_ODB_API ExascaleDbStorageVaultSummary() = default;
  AWS_ODB_API ExascaleDbStorageVaultSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API ExascaleDbStorageVaultSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Exascale storage vault.</p>
   */
  inline const Aws::String& GetExascaleDbStorageVaultId() const { return m_exascaleDbStorageVaultId; }
  inline bool ExascaleDbStorageVaultIdHasBeenSet() const { return m_exascaleDbStorageVaultIdHasBeenSet; }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  void SetExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    m_exascaleDbStorageVaultIdHasBeenSet = true;
    m_exascaleDbStorageVaultId = std::forward<ExascaleDbStorageVaultIdT>(value);
  }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  ExascaleDbStorageVaultSummary& WithExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    SetExascaleDbStorageVaultId(std::forward<ExascaleDbStorageVaultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional flash cache percentage for the Exascale storage vault.</p>
   */
  inline int GetAdditionalFlashCacheInPercent() const { return m_additionalFlashCacheInPercent; }
  inline bool AdditionalFlashCacheInPercentHasBeenSet() const { return m_additionalFlashCacheInPercentHasBeenSet; }
  inline void SetAdditionalFlashCacheInPercent(int value) {
    m_additionalFlashCacheInPercentHasBeenSet = true;
    m_additionalFlashCacheInPercent = value;
  }
  inline ExascaleDbStorageVaultSummary& WithAdditionalFlashCacheInPercent(int value) {
    SetAdditionalFlashCacheInPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of shape attributes attached to the Exascale storage vault.</p>
   */
  inline const Aws::Vector<ShapeAttribute>& GetAttachedShapeAttributes() const { return m_attachedShapeAttributes; }
  inline bool AttachedShapeAttributesHasBeenSet() const { return m_attachedShapeAttributesHasBeenSet; }
  template <typename AttachedShapeAttributesT = Aws::Vector<ShapeAttribute>>
  void SetAttachedShapeAttributes(AttachedShapeAttributesT&& value) {
    m_attachedShapeAttributesHasBeenSet = true;
    m_attachedShapeAttributes = std::forward<AttachedShapeAttributesT>(value);
  }
  template <typename AttachedShapeAttributesT = Aws::Vector<ShapeAttribute>>
  ExascaleDbStorageVaultSummary& WithAttachedShapeAttributes(AttachedShapeAttributesT&& value) {
    SetAttachedShapeAttributes(std::forward<AttachedShapeAttributesT>(value));
    return *this;
  }
  inline ExascaleDbStorageVaultSummary& AddAttachedShapeAttributes(ShapeAttribute value) {
    m_attachedShapeAttributesHasBeenSet = true;
    m_attachedShapeAttributes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The autoscale limit in gigabytes (GB) for the Exascale storage vault.</p>
   */
  inline int GetAutoscaleLimitInGBs() const { return m_autoscaleLimitInGBs; }
  inline bool AutoscaleLimitInGBsHasBeenSet() const { return m_autoscaleLimitInGBsHasBeenSet; }
  inline void SetAutoscaleLimitInGBs(int value) {
    m_autoscaleLimitInGBsHasBeenSet = true;
    m_autoscaleLimitInGBs = value;
  }
  inline ExascaleDbStorageVaultSummary& WithAutoscaleLimitInGBs(int value) {
    SetAutoscaleLimitInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  ExascaleDbStorageVaultSummary& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  ExascaleDbStorageVaultSummary& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Exascale storage vault was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ExascaleDbStorageVaultSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the Exascale storage vault.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ExascaleDbStorageVaultSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-friendly name for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  ExascaleDbStorageVaultSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Resource Names (ARNs) of the VM clusters associated with
   * this Exascale storage vault.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVmClusterArns() const { return m_vmClusterArns; }
  inline bool VmClusterArnsHasBeenSet() const { return m_vmClusterArnsHasBeenSet; }
  template <typename VmClusterArnsT = Aws::Vector<Aws::String>>
  void SetVmClusterArns(VmClusterArnsT&& value) {
    m_vmClusterArnsHasBeenSet = true;
    m_vmClusterArns = std::forward<VmClusterArnsT>(value);
  }
  template <typename VmClusterArnsT = Aws::Vector<Aws::String>>
  ExascaleDbStorageVaultSummary& WithVmClusterArns(VmClusterArnsT&& value) {
    SetVmClusterArns(std::forward<VmClusterArnsT>(value));
    return *this;
  }
  template <typename VmClusterArnsT = Aws::String>
  ExascaleDbStorageVaultSummary& AddVmClusterArns(VmClusterArnsT&& value) {
    m_vmClusterArnsHasBeenSet = true;
    m_vmClusterArns.emplace_back(std::forward<VmClusterArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of VM clusters associated with this Exascale storage vault.</p>
   */
  inline int GetVmClusterCount() const { return m_vmClusterCount; }
  inline bool VmClusterCountHasBeenSet() const { return m_vmClusterCountHasBeenSet; }
  inline void SetVmClusterCount(int value) {
    m_vmClusterCountHasBeenSet = true;
    m_vmClusterCount = value;
  }
  inline ExascaleDbStorageVaultSummary& WithVmClusterCount(int value) {
    SetVmClusterCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of unique identifiers of the VM clusters associated with this
   * Exascale storage vault.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVmClusterIds() const { return m_vmClusterIds; }
  inline bool VmClusterIdsHasBeenSet() const { return m_vmClusterIdsHasBeenSet; }
  template <typename VmClusterIdsT = Aws::Vector<Aws::String>>
  void SetVmClusterIds(VmClusterIdsT&& value) {
    m_vmClusterIdsHasBeenSet = true;
    m_vmClusterIds = std::forward<VmClusterIdsT>(value);
  }
  template <typename VmClusterIdsT = Aws::Vector<Aws::String>>
  ExascaleDbStorageVaultSummary& WithVmClusterIds(VmClusterIdsT&& value) {
    SetVmClusterIds(std::forward<VmClusterIdsT>(value));
    return *this;
  }
  template <typename VmClusterIdsT = Aws::String>
  ExascaleDbStorageVaultSummary& AddVmClusterIds(VmClusterIdsT&& value) {
    m_vmClusterIdsHasBeenSet = true;
    m_vmClusterIds.emplace_back(std::forward<VmClusterIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Exascale storage vault.</p>
   */
  inline const Aws::String& GetExascaleDbStorageVaultArn() const { return m_exascaleDbStorageVaultArn; }
  inline bool ExascaleDbStorageVaultArnHasBeenSet() const { return m_exascaleDbStorageVaultArnHasBeenSet; }
  template <typename ExascaleDbStorageVaultArnT = Aws::String>
  void SetExascaleDbStorageVaultArn(ExascaleDbStorageVaultArnT&& value) {
    m_exascaleDbStorageVaultArnHasBeenSet = true;
    m_exascaleDbStorageVaultArn = std::forward<ExascaleDbStorageVaultArnT>(value);
  }
  template <typename ExascaleDbStorageVaultArnT = Aws::String>
  ExascaleDbStorageVaultSummary& WithExascaleDbStorageVaultArn(ExascaleDbStorageVaultArnT&& value) {
    SetExascaleDbStorageVaultArn(std::forward<ExascaleDbStorageVaultArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The high-capacity database storage details for the Exascale storage
   * vault.</p>
   */
  inline const ExascaleDbStorageDetails& GetHighCapacityDatabaseStorage() const { return m_highCapacityDatabaseStorage; }
  inline bool HighCapacityDatabaseStorageHasBeenSet() const { return m_highCapacityDatabaseStorageHasBeenSet; }
  template <typename HighCapacityDatabaseStorageT = ExascaleDbStorageDetails>
  void SetHighCapacityDatabaseStorage(HighCapacityDatabaseStorageT&& value) {
    m_highCapacityDatabaseStorageHasBeenSet = true;
    m_highCapacityDatabaseStorage = std::forward<HighCapacityDatabaseStorageT>(value);
  }
  template <typename HighCapacityDatabaseStorageT = ExascaleDbStorageDetails>
  ExascaleDbStorageVaultSummary& WithHighCapacityDatabaseStorage(HighCapacityDatabaseStorageT&& value) {
    SetHighCapacityDatabaseStorage(std::forward<HighCapacityDatabaseStorageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether autoscaling is enabled for the Exascale storage vault.</p>
   */
  inline bool GetIsAutoscaleEnabled() const { return m_isAutoscaleEnabled; }
  inline bool IsAutoscaleEnabledHasBeenSet() const { return m_isAutoscaleEnabledHasBeenSet; }
  inline void SetIsAutoscaleEnabled(bool value) {
    m_isAutoscaleEnabledHasBeenSet = true;
    m_isAutoscaleEnabled = value;
  }
  inline ExascaleDbStorageVaultSummary& WithIsAutoscaleEnabled(bool value) {
    SetIsAutoscaleEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCID of the Exascale storage vault.</p>
   */
  inline const Aws::String& GetOcid() const { return m_ocid; }
  inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
  template <typename OcidT = Aws::String>
  void SetOcid(OcidT&& value) {
    m_ocidHasBeenSet = true;
    m_ocid = std::forward<OcidT>(value);
  }
  template <typename OcidT = Aws::String>
  ExascaleDbStorageVaultSummary& WithOcid(OcidT&& value) {
    SetOcid(std::forward<OcidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the OCI resource anchor for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
  inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
  template <typename OciResourceAnchorNameT = Aws::String>
  void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) {
    m_ociResourceAnchorNameHasBeenSet = true;
    m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value);
  }
  template <typename OciResourceAnchorNameT = Aws::String>
  ExascaleDbStorageVaultSummary& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) {
    SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTPS link to the Exascale storage vault in Oracle Cloud Infrastructure
   * (OCI).</p>
   */
  inline const Aws::String& GetOciUrl() const { return m_ociUrl; }
  inline bool OciUrlHasBeenSet() const { return m_ociUrlHasBeenSet; }
  template <typename OciUrlT = Aws::String>
  void SetOciUrl(OciUrlT&& value) {
    m_ociUrlHasBeenSet = true;
    m_ociUrl = std::forward<OciUrlT>(value);
  }
  template <typename OciUrlT = Aws::String>
  ExascaleDbStorageVaultSummary& WithOciUrl(OciUrlT&& value) {
    SetOciUrl(std::forward<OciUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of progress made on the current operation on the Exascale storage
   * vault, expressed as a percentage.</p>
   */
  inline double GetPercentProgress() const { return m_percentProgress; }
  inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
  inline void SetPercentProgress(double value) {
    m_percentProgressHasBeenSet = true;
    m_percentProgress = value;
  }
  inline ExascaleDbStorageVaultSummary& WithPercentProgress(double value) {
    SetPercentProgress(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Exascale storage vault.</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExascaleDbStorageVaultSummary& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the status of the Exascale storage vault.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  ExascaleDbStorageVaultSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone of the Exascale storage vault.</p>
   */
  inline const Aws::String& GetTimeZone() const { return m_timeZone; }
  inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
  template <typename TimeZoneT = Aws::String>
  void SetTimeZone(TimeZoneT&& value) {
    m_timeZoneHasBeenSet = true;
    m_timeZone = std::forward<TimeZoneT>(value);
  }
  template <typename TimeZoneT = Aws::String>
  ExascaleDbStorageVaultSummary& WithTimeZone(TimeZoneT&& value) {
    SetTimeZone(std::forward<TimeZoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exascaleDbStorageVaultId;

  int m_additionalFlashCacheInPercent{0};

  Aws::Vector<ShapeAttribute> m_attachedShapeAttributes;

  int m_autoscaleLimitInGBs{0};

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_description;

  Aws::String m_displayName;

  Aws::Vector<Aws::String> m_vmClusterArns;

  int m_vmClusterCount{0};

  Aws::Vector<Aws::String> m_vmClusterIds;

  Aws::String m_exascaleDbStorageVaultArn;

  ExascaleDbStorageDetails m_highCapacityDatabaseStorage;

  bool m_isAutoscaleEnabled{false};

  Aws::String m_ocid;

  Aws::String m_ociResourceAnchorName;

  Aws::String m_ociUrl;

  double m_percentProgress{0.0};

  ResourceStatus m_status{ResourceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::String m_timeZone;
  bool m_exascaleDbStorageVaultIdHasBeenSet = false;
  bool m_additionalFlashCacheInPercentHasBeenSet = false;
  bool m_attachedShapeAttributesHasBeenSet = false;
  bool m_autoscaleLimitInGBsHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_vmClusterArnsHasBeenSet = false;
  bool m_vmClusterCountHasBeenSet = false;
  bool m_vmClusterIdsHasBeenSet = false;
  bool m_exascaleDbStorageVaultArnHasBeenSet = false;
  bool m_highCapacityDatabaseStorageHasBeenSet = false;
  bool m_isAutoscaleEnabledHasBeenSet = false;
  bool m_ocidHasBeenSet = false;
  bool m_ociResourceAnchorNameHasBeenSet = false;
  bool m_ociUrlHasBeenSet = false;
  bool m_percentProgressHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_timeZoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
