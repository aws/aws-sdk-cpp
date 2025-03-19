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
   * The decryption settings for the SRT caller source. Present only if the source
   * has decryption enabled.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtCallerDecryption">AWS
   * API Reference</a></p>
   */
  class SrtCallerDecryption
  {
  public:
    AWS_MEDIALIVE_API SrtCallerDecryption() = default;
    AWS_MEDIALIVE_API SrtCallerDecryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtCallerDecryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The algorithm used to encrypt content.
     */
    inline Algorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(Algorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline SrtCallerDecryption& WithAlgorithm(Algorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN for the secret in Secrets Manager. Someone in your organization must
     * create a secret and provide you with its ARN. The secret holds the passphrase
     * that MediaLive uses to decrypt the source content.
     */
    inline const Aws::String& GetPassphraseSecretArn() const { return m_passphraseSecretArn; }
    inline bool PassphraseSecretArnHasBeenSet() const { return m_passphraseSecretArnHasBeenSet; }
    template<typename PassphraseSecretArnT = Aws::String>
    void SetPassphraseSecretArn(PassphraseSecretArnT&& value) { m_passphraseSecretArnHasBeenSet = true; m_passphraseSecretArn = std::forward<PassphraseSecretArnT>(value); }
    template<typename PassphraseSecretArnT = Aws::String>
    SrtCallerDecryption& WithPassphraseSecretArn(PassphraseSecretArnT&& value) { SetPassphraseSecretArn(std::forward<PassphraseSecretArnT>(value)); return *this;}
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
