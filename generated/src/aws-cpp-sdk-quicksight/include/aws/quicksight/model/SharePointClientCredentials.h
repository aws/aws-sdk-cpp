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
 * <p>The client credentials for connecting to a Microsoft SharePoint data source
 * using two-legged OAuth (2LO) certificate-based authentication. SharePoint
 * connections access documents stored in SharePoint sites and libraries. The
 * tenant ID and client ID are supplied through
 * <code>SharePointParameters</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SharePointClientCredentials">AWS
 * API Reference</a></p>
 */
class SharePointClientCredentials {
 public:
  AWS_QUICKSIGHT_API SharePointClientCredentials() = default;
  AWS_QUICKSIGHT_API SharePointClientCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SharePointClientCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
   * key used to encrypt the SharePoint certificate credentials. This field is
   * required.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  SharePointClientCredentials& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The thumbprint of the certificate used for two-legged OAuth (2LO)
   * authentication to SharePoint. This field is required.</p>
   */
  inline const Aws::String& GetCertThumbprint() const { return m_certThumbprint; }
  inline bool CertThumbprintHasBeenSet() const { return m_certThumbprintHasBeenSet; }
  template <typename CertThumbprintT = Aws::String>
  void SetCertThumbprint(CertThumbprintT&& value) {
    m_certThumbprintHasBeenSet = true;
    m_certThumbprint = std::forward<CertThumbprintT>(value);
  }
  template <typename CertThumbprintT = Aws::String>
  SharePointClientCredentials& WithCertThumbprint(CertThumbprintT&& value) {
    SetCertThumbprint(std::forward<CertThumbprintT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyArn;

  Aws::String m_certThumbprint;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_certThumbprintHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
