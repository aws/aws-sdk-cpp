/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Specifies whether the domain should encrypt data at rest, and if so, the Key
   * Management Service (KMS) key to use. Can only be used when creating a new domain
   * or enabling encryption at rest for the first time on an existing domain. You
   * can't modify this parameter after it's already been specified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/EncryptionAtRestOptions">AWS
   * API Reference</a></p>
   */
  class EncryptionAtRestOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API EncryptionAtRestOptions() = default;
    AWS_OPENSEARCHSERVICE_API EncryptionAtRestOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API EncryptionAtRestOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True to enable encryption at rest.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EncryptionAtRestOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ID. Takes the form
     * <code>1a2a3a4-1a2a-3a4a-5a6a-1a2a3a4a5a6a</code>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EncryptionAtRestOptions& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
