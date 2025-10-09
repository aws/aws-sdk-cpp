/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConnectionAuthType.h>
#include <aws/quicksight/model/ReadAuthenticationMetadata.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Read-only authentication configuration containing non-sensitive
   * authentication details for action connectors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadAuthConfig">AWS
   * API Reference</a></p>
   */
  class ReadAuthConfig
  {
  public:
    AWS_QUICKSIGHT_API ReadAuthConfig() = default;
    AWS_QUICKSIGHT_API ReadAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReadAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of authentication being used (BASIC, API_KEY,
     * OAUTH2_CLIENT_CREDENTIALS, or OAUTH2_AUTHORIZATION_CODE).</p>
     */
    inline ConnectionAuthType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(ConnectionAuthType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline ReadAuthConfig& WithAuthenticationType(ConnectionAuthType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication metadata containing configuration details specific to the
     * authentication type.</p>
     */
    inline const ReadAuthenticationMetadata& GetAuthenticationMetadata() const { return m_authenticationMetadata; }
    inline bool AuthenticationMetadataHasBeenSet() const { return m_authenticationMetadataHasBeenSet; }
    template<typename AuthenticationMetadataT = ReadAuthenticationMetadata>
    void SetAuthenticationMetadata(AuthenticationMetadataT&& value) { m_authenticationMetadataHasBeenSet = true; m_authenticationMetadata = std::forward<AuthenticationMetadataT>(value); }
    template<typename AuthenticationMetadataT = ReadAuthenticationMetadata>
    ReadAuthConfig& WithAuthenticationMetadata(AuthenticationMetadataT&& value) { SetAuthenticationMetadata(std::forward<AuthenticationMetadataT>(value)); return *this;}
    ///@}
  private:

    ConnectionAuthType m_authenticationType{ConnectionAuthType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    ReadAuthenticationMetadata m_authenticationMetadata;
    bool m_authenticationMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
