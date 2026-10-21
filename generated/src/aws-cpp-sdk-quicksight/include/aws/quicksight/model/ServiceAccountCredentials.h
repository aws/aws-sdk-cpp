/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The service account credentials used for Google Workspace domain-wide
 * delegation. Use this structure when you authenticate a data source connection
 * using domain-wide delegation across your Google Workspace domain.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ServiceAccountCredentials">AWS
 * API Reference</a></p>
 */
class ServiceAccountCredentials {
 public:
  AWS_QUICKSIGHT_API ServiceAccountCredentials() = default;
  AWS_QUICKSIGHT_API ServiceAccountCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ServiceAccountCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The email address of the Google Workspace administrator account that the
   * service account impersonates through domain-wide delegation. This field is
   * required.</p>
   */
  inline const Aws::String& GetAdminAccountEmail() const { return m_adminAccountEmail; }
  inline bool AdminAccountEmailHasBeenSet() const { return m_adminAccountEmailHasBeenSet; }
  template <typename AdminAccountEmailT = Aws::String>
  void SetAdminAccountEmail(AdminAccountEmailT&& value) {
    m_adminAccountEmailHasBeenSet = true;
    m_adminAccountEmail = std::forward<AdminAccountEmailT>(value);
  }
  template <typename AdminAccountEmailT = Aws::String>
  ServiceAccountCredentials& WithAdminAccountEmail(AdminAccountEmailT&& value) {
    SetAdminAccountEmail(std::forward<AdminAccountEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private key of the Google service account used for domain-wide
   * delegation. This field is required.</p>
   */
  inline const Aws::String& GetServiceAccountPrivateKey() const { return m_serviceAccountPrivateKey; }
  inline bool ServiceAccountPrivateKeyHasBeenSet() const { return m_serviceAccountPrivateKeyHasBeenSet; }
  template <typename ServiceAccountPrivateKeyT = Aws::String>
  void SetServiceAccountPrivateKey(ServiceAccountPrivateKeyT&& value) {
    m_serviceAccountPrivateKeyHasBeenSet = true;
    m_serviceAccountPrivateKey = std::forward<ServiceAccountPrivateKeyT>(value);
  }
  template <typename ServiceAccountPrivateKeyT = Aws::String>
  ServiceAccountCredentials& WithServiceAccountPrivateKey(ServiceAccountPrivateKeyT&& value) {
    SetServiceAccountPrivateKey(std::forward<ServiceAccountPrivateKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client email address of the Google service account used for domain-wide
   * delegation. This field is required.</p>
   */
  inline const Aws::String& GetClientEmail() const { return m_clientEmail; }
  inline bool ClientEmailHasBeenSet() const { return m_clientEmailHasBeenSet; }
  template <typename ClientEmailT = Aws::String>
  void SetClientEmail(ClientEmailT&& value) {
    m_clientEmailHasBeenSet = true;
    m_clientEmail = std::forward<ClientEmailT>(value);
  }
  template <typename ClientEmailT = Aws::String>
  ServiceAccountCredentials& WithClientEmail(ClientEmailT&& value) {
    SetClientEmail(std::forward<ClientEmailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_adminAccountEmail;

  Aws::String m_serviceAccountPrivateKey;

  Aws::String m_clientEmail;
  bool m_adminAccountEmailHasBeenSet = false;
  bool m_serviceAccountPrivateKeyHasBeenSet = false;
  bool m_clientEmailHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
