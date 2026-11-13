/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/MWAA_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAA {
namespace Model {

/**
 * <p>Describes the Amazon Web Services IAM Identity Center configuration used to
 * authenticate users to the Apache Airflow web UI for your Amazon MWAA
 * environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/IdentityCenterConfiguration">AWS
 * API Reference</a></p>
 */
class IdentityCenterConfiguration {
 public:
  AWS_MWAA_API IdentityCenterConfiguration() = default;
  AWS_MWAA_API IdentityCenterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAA_API IdentityCenterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services access portal URL of the IAM Identity Center instance
   * associated with your environment. For example,
   * <code>https://my-portal.awsapps.com/start</code>.</p>
   */
  inline const Aws::String& GetStartUrl() const { return m_startUrl; }
  inline bool StartUrlHasBeenSet() const { return m_startUrlHasBeenSet; }
  template <typename StartUrlT = Aws::String>
  void SetStartUrl(StartUrlT&& value) {
    m_startUrlHasBeenSet = true;
    m_startUrl = std::forward<StartUrlT>(value);
  }
  template <typename StartUrlT = Aws::String>
  IdentityCenterConfiguration& WithStartUrl(StartUrlT&& value) {
    SetStartUrl(std::forward<StartUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the identity store associated with the IAM Identity Center
   * instance for your environment. For example, <code>d-1234567890</code>.</p>
   */
  inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
  inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
  template <typename IdentityStoreIdT = Aws::String>
  void SetIdentityStoreId(IdentityStoreIdT&& value) {
    m_identityStoreIdHasBeenSet = true;
    m_identityStoreId = std::forward<IdentityStoreIdT>(value);
  }
  template <typename IdentityStoreIdT = Aws::String>
  IdentityCenterConfiguration& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_startUrl;

  Aws::String m_identityStoreId;
  bool m_startUrlHasBeenSet = false;
  bool m_identityStoreIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAA
}  // namespace Aws
