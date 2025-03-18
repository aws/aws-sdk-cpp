/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>AWS Secrets Manager access token configuration parameters. For information
   * about Secrets Manager access token authentication, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-access-configuration-access-token.html">Working
   * with AWS Secrets Manager access token authentication</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SecretsManagerAccessTokenConfiguration">AWS
   * API Reference</a></p>
   */
  class SecretsManagerAccessTokenConfiguration
  {
  public:
    AWS_MEDIATAILOR_API SecretsManagerAccessTokenConfiguration() = default;
    AWS_MEDIATAILOR_API SecretsManagerAccessTokenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SecretsManagerAccessTokenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline const Aws::String& GetHeaderName() const { return m_headerName; }
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }
    template<typename HeaderNameT = Aws::String>
    void SetHeaderName(HeaderNameT&& value) { m_headerNameHasBeenSet = true; m_headerName = std::forward<HeaderNameT>(value); }
    template<typename HeaderNameT = Aws::String>
    SecretsManagerAccessTokenConfiguration& WithHeaderName(HeaderNameT&& value) { SetHeaderName(std::forward<HeaderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    SecretsManagerAccessTokenConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline const Aws::String& GetSecretStringKey() const { return m_secretStringKey; }
    inline bool SecretStringKeyHasBeenSet() const { return m_secretStringKeyHasBeenSet; }
    template<typename SecretStringKeyT = Aws::String>
    void SetSecretStringKey(SecretStringKeyT&& value) { m_secretStringKeyHasBeenSet = true; m_secretStringKey = std::forward<SecretStringKeyT>(value); }
    template<typename SecretStringKeyT = Aws::String>
    SecretsManagerAccessTokenConfiguration& WithSecretStringKey(SecretStringKeyT&& value) { SetSecretStringKey(std::forward<SecretStringKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_secretStringKey;
    bool m_secretStringKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
