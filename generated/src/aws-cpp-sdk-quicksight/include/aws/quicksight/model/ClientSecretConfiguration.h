/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ClientSecretConfigurationDetail.h>
#include <aws/quicksight/model/ClientSecretSourceType.h>

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
 * <p>The configuration of a new client secret that your IdP
 * provides.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ClientSecretConfiguration">AWS
 * API Reference</a></p>
 */
class ClientSecretConfiguration {
 public:
  AWS_QUICKSIGHT_API ClientSecretConfiguration() = default;
  AWS_QUICKSIGHT_API ClientSecretConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ClientSecretConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source of the client secret. The only valid value is
   * <code>IDP_PROVIDED</code>: your IdP issued the secret value.</p>
   */
  inline ClientSecretSourceType GetClientSecretSourceType() const { return m_clientSecretSourceType; }
  inline bool ClientSecretSourceTypeHasBeenSet() const { return m_clientSecretSourceTypeHasBeenSet; }
  inline void SetClientSecretSourceType(ClientSecretSourceType value) {
    m_clientSecretSourceTypeHasBeenSet = true;
    m_clientSecretSourceType = value;
  }
  inline ClientSecretConfiguration& WithClientSecretSourceType(ClientSecretSourceType value) {
    SetClientSecretSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the client secret. This is required when the
   * <code>ClientSecretSourceType</code> is <code>IDP_PROVIDED</code>.</p>
   */
  inline const ClientSecretConfigurationDetail& GetClientSecretConfigurationDetail() const { return m_clientSecretConfigurationDetail; }
  inline bool ClientSecretConfigurationDetailHasBeenSet() const { return m_clientSecretConfigurationDetailHasBeenSet; }
  template <typename ClientSecretConfigurationDetailT = ClientSecretConfigurationDetail>
  void SetClientSecretConfigurationDetail(ClientSecretConfigurationDetailT&& value) {
    m_clientSecretConfigurationDetailHasBeenSet = true;
    m_clientSecretConfigurationDetail = std::forward<ClientSecretConfigurationDetailT>(value);
  }
  template <typename ClientSecretConfigurationDetailT = ClientSecretConfigurationDetail>
  ClientSecretConfiguration& WithClientSecretConfigurationDetail(ClientSecretConfigurationDetailT&& value) {
    SetClientSecretConfigurationDetail(std::forward<ClientSecretConfigurationDetailT>(value));
    return *this;
  }
  ///@}
 private:
  ClientSecretSourceType m_clientSecretSourceType{ClientSecretSourceType::NOT_SET};

  ClientSecretConfigurationDetail m_clientSecretConfigurationDetail;
  bool m_clientSecretSourceTypeHasBeenSet = false;
  bool m_clientSecretConfigurationDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
