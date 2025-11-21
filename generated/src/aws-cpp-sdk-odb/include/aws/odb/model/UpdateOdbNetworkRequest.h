/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/Access.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class UpdateOdbNetworkRequest : public OdbRequest {
 public:
  AWS_ODB_API UpdateOdbNetworkRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateOdbNetwork"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the ODB network to update.</p>
   */
  inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
  inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
  template <typename OdbNetworkIdT = Aws::String>
  void SetOdbNetworkId(OdbNetworkIdT&& value) {
    m_odbNetworkIdHasBeenSet = true;
    m_odbNetworkId = std::forward<OdbNetworkIdT>(value);
  }
  template <typename OdbNetworkIdT = Aws::String>
  UpdateOdbNetworkRequest& WithOdbNetworkId(OdbNetworkIdT&& value) {
    SetOdbNetworkId(std::forward<OdbNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new user-friendly name of the ODB network.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateOdbNetworkRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of CIDR ranges from the peered VPC that allow access to the ODB
   * network.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPeeredCidrsToBeAdded() const { return m_peeredCidrsToBeAdded; }
  inline bool PeeredCidrsToBeAddedHasBeenSet() const { return m_peeredCidrsToBeAddedHasBeenSet; }
  template <typename PeeredCidrsToBeAddedT = Aws::Vector<Aws::String>>
  void SetPeeredCidrsToBeAdded(PeeredCidrsToBeAddedT&& value) {
    m_peeredCidrsToBeAddedHasBeenSet = true;
    m_peeredCidrsToBeAdded = std::forward<PeeredCidrsToBeAddedT>(value);
  }
  template <typename PeeredCidrsToBeAddedT = Aws::Vector<Aws::String>>
  UpdateOdbNetworkRequest& WithPeeredCidrsToBeAdded(PeeredCidrsToBeAddedT&& value) {
    SetPeeredCidrsToBeAdded(std::forward<PeeredCidrsToBeAddedT>(value));
    return *this;
  }
  template <typename PeeredCidrsToBeAddedT = Aws::String>
  UpdateOdbNetworkRequest& AddPeeredCidrsToBeAdded(PeeredCidrsToBeAddedT&& value) {
    m_peeredCidrsToBeAddedHasBeenSet = true;
    m_peeredCidrsToBeAdded.emplace_back(std::forward<PeeredCidrsToBeAddedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of CIDR ranges from the peered VPC to remove from the ODB
   * network.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPeeredCidrsToBeRemoved() const { return m_peeredCidrsToBeRemoved; }
  inline bool PeeredCidrsToBeRemovedHasBeenSet() const { return m_peeredCidrsToBeRemovedHasBeenSet; }
  template <typename PeeredCidrsToBeRemovedT = Aws::Vector<Aws::String>>
  void SetPeeredCidrsToBeRemoved(PeeredCidrsToBeRemovedT&& value) {
    m_peeredCidrsToBeRemovedHasBeenSet = true;
    m_peeredCidrsToBeRemoved = std::forward<PeeredCidrsToBeRemovedT>(value);
  }
  template <typename PeeredCidrsToBeRemovedT = Aws::Vector<Aws::String>>
  UpdateOdbNetworkRequest& WithPeeredCidrsToBeRemoved(PeeredCidrsToBeRemovedT&& value) {
    SetPeeredCidrsToBeRemoved(std::forward<PeeredCidrsToBeRemovedT>(value));
    return *this;
  }
  template <typename PeeredCidrsToBeRemovedT = Aws::String>
  UpdateOdbNetworkRequest& AddPeeredCidrsToBeRemoved(PeeredCidrsToBeRemovedT&& value) {
    m_peeredCidrsToBeRemovedHasBeenSet = true;
    m_peeredCidrsToBeRemoved.emplace_back(std::forward<PeeredCidrsToBeRemovedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the updated configuration for Amazon S3 access from the ODB
   * network.</p>
   */
  inline Access GetS3Access() const { return m_s3Access; }
  inline bool S3AccessHasBeenSet() const { return m_s3AccessHasBeenSet; }
  inline void SetS3Access(Access value) {
    m_s3AccessHasBeenSet = true;
    m_s3Access = value;
  }
  inline UpdateOdbNetworkRequest& WithS3Access(Access value) {
    SetS3Access(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the updated configuration for Zero-ETL access from the ODB
   * network.</p>
   */
  inline Access GetZeroEtlAccess() const { return m_zeroEtlAccess; }
  inline bool ZeroEtlAccessHasBeenSet() const { return m_zeroEtlAccessHasBeenSet; }
  inline void SetZeroEtlAccess(Access value) {
    m_zeroEtlAccessHasBeenSet = true;
    m_zeroEtlAccess = value;
  }
  inline UpdateOdbNetworkRequest& WithZeroEtlAccess(Access value) {
    SetZeroEtlAccess(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Security Token Service (STS) access configuration for
   * the ODB network.</p>
   */
  inline Access GetStsAccess() const { return m_stsAccess; }
  inline bool StsAccessHasBeenSet() const { return m_stsAccessHasBeenSet; }
  inline void SetStsAccess(Access value) {
    m_stsAccessHasBeenSet = true;
    m_stsAccess = value;
  }
  inline UpdateOdbNetworkRequest& WithStsAccess(Access value) {
    SetStsAccess(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Key Management Service (KMS) access configuration for
   * the ODB network.</p>
   */
  inline Access GetKmsAccess() const { return m_kmsAccess; }
  inline bool KmsAccessHasBeenSet() const { return m_kmsAccessHasBeenSet; }
  inline void SetKmsAccess(Access value) {
    m_kmsAccessHasBeenSet = true;
    m_kmsAccess = value;
  }
  inline UpdateOdbNetworkRequest& WithKmsAccess(Access value) {
    SetKmsAccess(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the updated endpoint policy for Amazon S3 access from the ODB
   * network.</p>
   */
  inline const Aws::String& GetS3PolicyDocument() const { return m_s3PolicyDocument; }
  inline bool S3PolicyDocumentHasBeenSet() const { return m_s3PolicyDocumentHasBeenSet; }
  template <typename S3PolicyDocumentT = Aws::String>
  void SetS3PolicyDocument(S3PolicyDocumentT&& value) {
    m_s3PolicyDocumentHasBeenSet = true;
    m_s3PolicyDocument = std::forward<S3PolicyDocumentT>(value);
  }
  template <typename S3PolicyDocumentT = Aws::String>
  UpdateOdbNetworkRequest& WithS3PolicyDocument(S3PolicyDocumentT&& value) {
    SetS3PolicyDocument(std::forward<S3PolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The STS policy document that defines permissions for token service usage
   * within the ODB network.</p>
   */
  inline const Aws::String& GetStsPolicyDocument() const { return m_stsPolicyDocument; }
  inline bool StsPolicyDocumentHasBeenSet() const { return m_stsPolicyDocumentHasBeenSet; }
  template <typename StsPolicyDocumentT = Aws::String>
  void SetStsPolicyDocument(StsPolicyDocumentT&& value) {
    m_stsPolicyDocumentHasBeenSet = true;
    m_stsPolicyDocument = std::forward<StsPolicyDocumentT>(value);
  }
  template <typename StsPolicyDocumentT = Aws::String>
  UpdateOdbNetworkRequest& WithStsPolicyDocument(StsPolicyDocumentT&& value) {
    SetStsPolicyDocument(std::forward<StsPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS policy document that defines permissions for key usage within the ODB
   * network.</p>
   */
  inline const Aws::String& GetKmsPolicyDocument() const { return m_kmsPolicyDocument; }
  inline bool KmsPolicyDocumentHasBeenSet() const { return m_kmsPolicyDocumentHasBeenSet; }
  template <typename KmsPolicyDocumentT = Aws::String>
  void SetKmsPolicyDocument(KmsPolicyDocumentT&& value) {
    m_kmsPolicyDocumentHasBeenSet = true;
    m_kmsPolicyDocument = std::forward<KmsPolicyDocumentT>(value);
  }
  template <typename KmsPolicyDocumentT = Aws::String>
  UpdateOdbNetworkRequest& WithKmsPolicyDocument(KmsPolicyDocumentT&& value) {
    SetKmsPolicyDocument(std::forward<KmsPolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cross-Region Amazon S3 restore sources to enable for the ODB network.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCrossRegionS3RestoreSourcesToEnable() const { return m_crossRegionS3RestoreSourcesToEnable; }
  inline bool CrossRegionS3RestoreSourcesToEnableHasBeenSet() const { return m_crossRegionS3RestoreSourcesToEnableHasBeenSet; }
  template <typename CrossRegionS3RestoreSourcesToEnableT = Aws::Vector<Aws::String>>
  void SetCrossRegionS3RestoreSourcesToEnable(CrossRegionS3RestoreSourcesToEnableT&& value) {
    m_crossRegionS3RestoreSourcesToEnableHasBeenSet = true;
    m_crossRegionS3RestoreSourcesToEnable = std::forward<CrossRegionS3RestoreSourcesToEnableT>(value);
  }
  template <typename CrossRegionS3RestoreSourcesToEnableT = Aws::Vector<Aws::String>>
  UpdateOdbNetworkRequest& WithCrossRegionS3RestoreSourcesToEnable(CrossRegionS3RestoreSourcesToEnableT&& value) {
    SetCrossRegionS3RestoreSourcesToEnable(std::forward<CrossRegionS3RestoreSourcesToEnableT>(value));
    return *this;
  }
  template <typename CrossRegionS3RestoreSourcesToEnableT = Aws::String>
  UpdateOdbNetworkRequest& AddCrossRegionS3RestoreSourcesToEnable(CrossRegionS3RestoreSourcesToEnableT&& value) {
    m_crossRegionS3RestoreSourcesToEnableHasBeenSet = true;
    m_crossRegionS3RestoreSourcesToEnable.emplace_back(std::forward<CrossRegionS3RestoreSourcesToEnableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cross-Region Amazon S3 restore sources to disable for the ODB
   * network.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCrossRegionS3RestoreSourcesToDisable() const { return m_crossRegionS3RestoreSourcesToDisable; }
  inline bool CrossRegionS3RestoreSourcesToDisableHasBeenSet() const { return m_crossRegionS3RestoreSourcesToDisableHasBeenSet; }
  template <typename CrossRegionS3RestoreSourcesToDisableT = Aws::Vector<Aws::String>>
  void SetCrossRegionS3RestoreSourcesToDisable(CrossRegionS3RestoreSourcesToDisableT&& value) {
    m_crossRegionS3RestoreSourcesToDisableHasBeenSet = true;
    m_crossRegionS3RestoreSourcesToDisable = std::forward<CrossRegionS3RestoreSourcesToDisableT>(value);
  }
  template <typename CrossRegionS3RestoreSourcesToDisableT = Aws::Vector<Aws::String>>
  UpdateOdbNetworkRequest& WithCrossRegionS3RestoreSourcesToDisable(CrossRegionS3RestoreSourcesToDisableT&& value) {
    SetCrossRegionS3RestoreSourcesToDisable(std::forward<CrossRegionS3RestoreSourcesToDisableT>(value));
    return *this;
  }
  template <typename CrossRegionS3RestoreSourcesToDisableT = Aws::String>
  UpdateOdbNetworkRequest& AddCrossRegionS3RestoreSourcesToDisable(CrossRegionS3RestoreSourcesToDisableT&& value) {
    m_crossRegionS3RestoreSourcesToDisableHasBeenSet = true;
    m_crossRegionS3RestoreSourcesToDisable.emplace_back(std::forward<CrossRegionS3RestoreSourcesToDisableT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_odbNetworkId;
  bool m_odbNetworkIdHasBeenSet = false;

  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  Aws::Vector<Aws::String> m_peeredCidrsToBeAdded;
  bool m_peeredCidrsToBeAddedHasBeenSet = false;

  Aws::Vector<Aws::String> m_peeredCidrsToBeRemoved;
  bool m_peeredCidrsToBeRemovedHasBeenSet = false;

  Access m_s3Access{Access::NOT_SET};
  bool m_s3AccessHasBeenSet = false;

  Access m_zeroEtlAccess{Access::NOT_SET};
  bool m_zeroEtlAccessHasBeenSet = false;

  Access m_stsAccess{Access::NOT_SET};
  bool m_stsAccessHasBeenSet = false;

  Access m_kmsAccess{Access::NOT_SET};
  bool m_kmsAccessHasBeenSet = false;

  Aws::String m_s3PolicyDocument;
  bool m_s3PolicyDocumentHasBeenSet = false;

  Aws::String m_stsPolicyDocument;
  bool m_stsPolicyDocumentHasBeenSet = false;

  Aws::String m_kmsPolicyDocument;
  bool m_kmsPolicyDocumentHasBeenSet = false;

  Aws::Vector<Aws::String> m_crossRegionS3RestoreSourcesToEnable;
  bool m_crossRegionS3RestoreSourcesToEnableHasBeenSet = false;

  Aws::Vector<Aws::String> m_crossRegionS3RestoreSourcesToDisable;
  bool m_crossRegionS3RestoreSourcesToDisableHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
