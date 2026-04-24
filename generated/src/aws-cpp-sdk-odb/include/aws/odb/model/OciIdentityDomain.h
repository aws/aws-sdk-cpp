/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ResourceStatus.h>

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
 * <p>Information about an Oracle Cloud Infrastructure (OCI) identity domain
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/OciIdentityDomain">AWS
 * API Reference</a></p>
 */
class OciIdentityDomain {
 public:
  AWS_ODB_API OciIdentityDomain() = default;
  AWS_ODB_API OciIdentityDomain(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API OciIdentityDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the OCI identity domain.</p>
   */
  inline const Aws::String& GetOciIdentityDomainId() const { return m_ociIdentityDomainId; }
  inline bool OciIdentityDomainIdHasBeenSet() const { return m_ociIdentityDomainIdHasBeenSet; }
  template <typename OciIdentityDomainIdT = Aws::String>
  void SetOciIdentityDomainId(OciIdentityDomainIdT&& value) {
    m_ociIdentityDomainIdHasBeenSet = true;
    m_ociIdentityDomainId = std::forward<OciIdentityDomainIdT>(value);
  }
  template <typename OciIdentityDomainIdT = Aws::String>
  OciIdentityDomain& WithOciIdentityDomainId(OciIdentityDomainIdT&& value) {
    SetOciIdentityDomainId(std::forward<OciIdentityDomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource URL for accessing the OCI identity domain.</p>
   */
  inline const Aws::String& GetOciIdentityDomainResourceUrl() const { return m_ociIdentityDomainResourceUrl; }
  inline bool OciIdentityDomainResourceUrlHasBeenSet() const { return m_ociIdentityDomainResourceUrlHasBeenSet; }
  template <typename OciIdentityDomainResourceUrlT = Aws::String>
  void SetOciIdentityDomainResourceUrl(OciIdentityDomainResourceUrlT&& value) {
    m_ociIdentityDomainResourceUrlHasBeenSet = true;
    m_ociIdentityDomainResourceUrl = std::forward<OciIdentityDomainResourceUrlT>(value);
  }
  template <typename OciIdentityDomainResourceUrlT = Aws::String>
  OciIdentityDomain& WithOciIdentityDomainResourceUrl(OciIdentityDomainResourceUrlT&& value) {
    SetOciIdentityDomainResourceUrl(std::forward<OciIdentityDomainResourceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the OCI identity domain.</p>
   */
  inline const Aws::String& GetOciIdentityDomainUrl() const { return m_ociIdentityDomainUrl; }
  inline bool OciIdentityDomainUrlHasBeenSet() const { return m_ociIdentityDomainUrlHasBeenSet; }
  template <typename OciIdentityDomainUrlT = Aws::String>
  void SetOciIdentityDomainUrl(OciIdentityDomainUrlT&& value) {
    m_ociIdentityDomainUrlHasBeenSet = true;
    m_ociIdentityDomainUrl = std::forward<OciIdentityDomainUrlT>(value);
  }
  template <typename OciIdentityDomainUrlT = Aws::String>
  OciIdentityDomain& WithOciIdentityDomainUrl(OciIdentityDomainUrlT&& value) {
    SetOciIdentityDomainUrl(std::forward<OciIdentityDomainUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the OCI identity domain.</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline OciIdentityDomain& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current status of the OCI identity domain,
   * if applicable.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  OciIdentityDomain& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services CloudFormation URL for setting up the account
   * integration with the OCI identity domain.</p>
   */
  inline const Aws::String& GetAccountSetupCloudFormationUrl() const { return m_accountSetupCloudFormationUrl; }
  inline bool AccountSetupCloudFormationUrlHasBeenSet() const { return m_accountSetupCloudFormationUrlHasBeenSet; }
  template <typename AccountSetupCloudFormationUrlT = Aws::String>
  void SetAccountSetupCloudFormationUrl(AccountSetupCloudFormationUrlT&& value) {
    m_accountSetupCloudFormationUrlHasBeenSet = true;
    m_accountSetupCloudFormationUrl = std::forward<AccountSetupCloudFormationUrlT>(value);
  }
  template <typename AccountSetupCloudFormationUrlT = Aws::String>
  OciIdentityDomain& WithAccountSetupCloudFormationUrl(AccountSetupCloudFormationUrlT&& value) {
    SetAccountSetupCloudFormationUrl(std::forward<AccountSetupCloudFormationUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ociIdentityDomainId;

  Aws::String m_ociIdentityDomainResourceUrl;

  Aws::String m_ociIdentityDomainUrl;

  ResourceStatus m_status{ResourceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::String m_accountSetupCloudFormationUrl;
  bool m_ociIdentityDomainIdHasBeenSet = false;
  bool m_ociIdentityDomainResourceUrlHasBeenSet = false;
  bool m_ociIdentityDomainUrlHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_accountSetupCloudFormationUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
