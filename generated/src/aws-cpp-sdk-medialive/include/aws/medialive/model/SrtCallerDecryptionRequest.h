/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Algorithm.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Complete these parameters only if the content is encrypted.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtCallerDecryptionRequest">AWS
   * API Reference</a></p>
   */
  class SrtCallerDecryptionRequest
  {
  public:
    AWS_MEDIALIVE_API SrtCallerDecryptionRequest() = default;
    AWS_MEDIALIVE_API SrtCallerDecryptionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtCallerDecryptionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The algorithm used to encrypt content.
     */
    inline Algorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(Algorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline SrtCallerDecryptionRequest& WithAlgorithm(Algorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN for the secret in Secrets Manager. Someone in your organization must
     * create a secret and provide you with its ARN. This secret holds the passphrase
     * that MediaLive will use to decrypt the source content.
     */
    inline const Aws::String& GetPassphraseSecretArn() const { return m_passphraseSecretArn; }
    inline bool PassphraseSecretArnHasBeenSet() const { return m_passphraseSecretArnHasBeenSet; }
    template<typename PassphraseSecretArnT = Aws::String>
    void SetPassphraseSecretArn(PassphraseSecretArnT&& value) { m_passphraseSecretArnHasBeenSet = true; m_passphraseSecretArn = std::forward<PassphraseSecretArnT>(value); }
    template<typename PassphraseSecretArnT = Aws::String>
    SrtCallerDecryptionRequest& WithPassphraseSecretArn(PassphraseSecretArnT&& value) { SetPassphraseSecretArn(std::forward<PassphraseSecretArnT>(value)); return *this;}
    ///@}
  private:

    Algorithm m_algorithm{Algorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    Aws::String m_passphraseSecretArn;
    bool m_passphraseSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
