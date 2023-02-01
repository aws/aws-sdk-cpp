/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CredentialPair.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Data source credentials. This is a variant type structure. For this structure
   * to be valid, only one of the attributes can be non-null.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSourceCredentials">AWS
   * API Reference</a></p>
   */
  class DataSourceCredentials
  {
  public:
    AWS_QUICKSIGHT_API DataSourceCredentials();
    AWS_QUICKSIGHT_API DataSourceCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSourceCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Credential pair. For more information, see <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CredentialPair.html">CredentialPair</a>
     * </code>.</p>
     */
    inline const CredentialPair& GetCredentialPair() const{ return m_credentialPair; }

    /**
     * <p>Credential pair. For more information, see <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CredentialPair.html">CredentialPair</a>
     * </code>.</p>
     */
    inline bool CredentialPairHasBeenSet() const { return m_credentialPairHasBeenSet; }

    /**
     * <p>Credential pair. For more information, see <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CredentialPair.html">CredentialPair</a>
     * </code>.</p>
     */
    inline void SetCredentialPair(const CredentialPair& value) { m_credentialPairHasBeenSet = true; m_credentialPair = value; }

    /**
     * <p>Credential pair. For more information, see <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CredentialPair.html">CredentialPair</a>
     * </code>.</p>
     */
    inline void SetCredentialPair(CredentialPair&& value) { m_credentialPairHasBeenSet = true; m_credentialPair = std::move(value); }

    /**
     * <p>Credential pair. For more information, see <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CredentialPair.html">CredentialPair</a>
     * </code>.</p>
     */
    inline DataSourceCredentials& WithCredentialPair(const CredentialPair& value) { SetCredentialPair(value); return *this;}

    /**
     * <p>Credential pair. For more information, see <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CredentialPair.html">CredentialPair</a>
     * </code>.</p>
     */
    inline DataSourceCredentials& WithCredentialPair(CredentialPair&& value) { SetCredentialPair(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline const Aws::String& GetCopySourceArn() const{ return m_copySourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline bool CopySourceArnHasBeenSet() const { return m_copySourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline void SetCopySourceArn(const Aws::String& value) { m_copySourceArnHasBeenSet = true; m_copySourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline void SetCopySourceArn(Aws::String&& value) { m_copySourceArnHasBeenSet = true; m_copySourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline void SetCopySourceArn(const char* value) { m_copySourceArnHasBeenSet = true; m_copySourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline DataSourceCredentials& WithCopySourceArn(const Aws::String& value) { SetCopySourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline DataSourceCredentials& WithCopySourceArn(Aws::String&& value) { SetCopySourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline DataSourceCredentials& WithCopySourceArn(const char* value) { SetCopySourceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline DataSourceCredentials& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline DataSourceCredentials& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline DataSourceCredentials& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    CredentialPair m_credentialPair;
    bool m_credentialPairHasBeenSet = false;

    Aws::String m_copySourceArn;
    bool m_copySourceArnHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
