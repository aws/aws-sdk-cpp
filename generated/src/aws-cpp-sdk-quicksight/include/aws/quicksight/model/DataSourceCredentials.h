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
    AWS_QUICKSIGHT_API DataSourceCredentials() = default;
    AWS_QUICKSIGHT_API DataSourceCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSourceCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Credential pair. For more information, see <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CredentialPair.html">CredentialPair</a>
     * </code>.</p>
     */
    inline const CredentialPair& GetCredentialPair() const { return m_credentialPair; }
    inline bool CredentialPairHasBeenSet() const { return m_credentialPairHasBeenSet; }
    template<typename CredentialPairT = CredentialPair>
    void SetCredentialPair(CredentialPairT&& value) { m_credentialPairHasBeenSet = true; m_credentialPair = std::forward<CredentialPairT>(value); }
    template<typename CredentialPairT = CredentialPair>
    DataSourceCredentials& WithCredentialPair(CredentialPairT&& value) { SetCredentialPair(std::forward<CredentialPairT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a data source that has the credential pair
     * that you want to use. When <code>CopySourceArn</code> is not null, the
     * credential pair from the data source in the ARN is used as the credentials for
     * the <code>DataSourceCredentials</code> structure.</p>
     */
    inline const Aws::String& GetCopySourceArn() const { return m_copySourceArn; }
    inline bool CopySourceArnHasBeenSet() const { return m_copySourceArnHasBeenSet; }
    template<typename CopySourceArnT = Aws::String>
    void SetCopySourceArn(CopySourceArnT&& value) { m_copySourceArnHasBeenSet = true; m_copySourceArn = std::forward<CopySourceArnT>(value); }
    template<typename CopySourceArnT = Aws::String>
    DataSourceCredentials& WithCopySourceArn(CopySourceArnT&& value) { SetCopySourceArn(std::forward<CopySourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret associated with the data source
     * in Amazon Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    DataSourceCredentials& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}
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
