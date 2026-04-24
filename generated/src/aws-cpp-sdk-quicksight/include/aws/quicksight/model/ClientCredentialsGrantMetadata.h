/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ClientCredentialsDetails.h>
#include <aws/quicksight/model/ClientCredentialsSource.h>

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
 * <p>Configuration for OAuth 2.0 client credentials grant authentication,
 * including client ID, client secret, token endpoint, and optional
 * scopes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ClientCredentialsGrantMetadata">AWS
 * API Reference</a></p>
 */
class ClientCredentialsGrantMetadata {
 public:
  AWS_QUICKSIGHT_API ClientCredentialsGrantMetadata() = default;
  AWS_QUICKSIGHT_API ClientCredentialsGrantMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ClientCredentialsGrantMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The base endpoint URL for the external service.</p>
   */
  inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
  inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
  template <typename BaseEndpointT = Aws::String>
  void SetBaseEndpoint(BaseEndpointT&& value) {
    m_baseEndpointHasBeenSet = true;
    m_baseEndpoint = std::forward<BaseEndpointT>(value);
  }
  template <typename BaseEndpointT = Aws::String>
  ClientCredentialsGrantMetadata& WithBaseEndpoint(BaseEndpointT&& value) {
    SetBaseEndpoint(std::forward<BaseEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the client credentials configuration.</p>
   */
  inline ClientCredentialsSource GetClientCredentialsSource() const { return m_clientCredentialsSource; }
  inline bool ClientCredentialsSourceHasBeenSet() const { return m_clientCredentialsSourceHasBeenSet; }
  inline void SetClientCredentialsSource(ClientCredentialsSource value) {
    m_clientCredentialsSourceHasBeenSet = true;
    m_clientCredentialsSource = value;
  }
  inline ClientCredentialsGrantMetadata& WithClientCredentialsSource(ClientCredentialsSource value) {
    SetClientCredentialsSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed client credentials configuration including client ID, client
   * secret, and token endpoint.</p>
   */
  inline const ClientCredentialsDetails& GetClientCredentialsDetails() const { return m_clientCredentialsDetails; }
  inline bool ClientCredentialsDetailsHasBeenSet() const { return m_clientCredentialsDetailsHasBeenSet; }
  template <typename ClientCredentialsDetailsT = ClientCredentialsDetails>
  void SetClientCredentialsDetails(ClientCredentialsDetailsT&& value) {
    m_clientCredentialsDetailsHasBeenSet = true;
    m_clientCredentialsDetails = std::forward<ClientCredentialsDetailsT>(value);
  }
  template <typename ClientCredentialsDetailsT = ClientCredentialsDetails>
  ClientCredentialsGrantMetadata& WithClientCredentialsDetails(ClientCredentialsDetailsT&& value) {
    SetClientCredentialsDetails(std::forward<ClientCredentialsDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baseEndpoint;

  ClientCredentialsSource m_clientCredentialsSource{ClientCredentialsSource::NOT_SET};

  ClientCredentialsDetails m_clientCredentialsDetails;
  bool m_baseEndpointHasBeenSet = false;
  bool m_clientCredentialsSourceHasBeenSet = false;
  bool m_clientCredentialsDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
