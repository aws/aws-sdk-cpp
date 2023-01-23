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
    AWS_MEDIATAILOR_API SecretsManagerAccessTokenConfiguration();
    AWS_MEDIATAILOR_API SecretsManagerAccessTokenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SecretsManagerAccessTokenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }

    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }

    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = std::move(value); }

    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }

    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}

    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithHeaderName(Aws::String&& value) { SetHeaderName(std::move(value)); return *this;}

    /**
     * <p>The name of the HTTP header used to supply the access token in requests to
     * the source location.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the access token.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline const Aws::String& GetSecretStringKey() const{ return m_secretStringKey; }

    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline bool SecretStringKeyHasBeenSet() const { return m_secretStringKeyHasBeenSet; }

    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline void SetSecretStringKey(const Aws::String& value) { m_secretStringKeyHasBeenSet = true; m_secretStringKey = value; }

    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline void SetSecretStringKey(Aws::String&& value) { m_secretStringKeyHasBeenSet = true; m_secretStringKey = std::move(value); }

    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline void SetSecretStringKey(const char* value) { m_secretStringKeyHasBeenSet = true; m_secretStringKey.assign(value); }

    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithSecretStringKey(const Aws::String& value) { SetSecretStringKey(value); return *this;}

    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithSecretStringKey(Aws::String&& value) { SetSecretStringKey(std::move(value)); return *this;}

    /**
     * <p>The AWS Secrets Manager <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html#SecretsManager-CreateSecret-request-SecretString.html">SecretString</a>
     * key associated with the access token. MediaTailor uses the key to look up
     * SecretString key and value pair containing the access token.</p>
     */
    inline SecretsManagerAccessTokenConfiguration& WithSecretStringKey(const char* value) { SetSecretStringKey(value); return *this;}

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
