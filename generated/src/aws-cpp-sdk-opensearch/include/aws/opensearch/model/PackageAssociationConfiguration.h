/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/KeyStoreAccessOption.h>
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
   * <p>The configuration for associating a package with a domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PackageAssociationConfiguration">AWS
   * API Reference</a></p>
   */
  class PackageAssociationConfiguration
  {
  public:
    AWS_OPENSEARCHSERVICE_API PackageAssociationConfiguration() = default;
    AWS_OPENSEARCHSERVICE_API PackageAssociationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageAssociationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration parameters to enable accessing the key store required by
     * the package.</p>
     */
    inline const KeyStoreAccessOption& GetKeyStoreAccessOption() const { return m_keyStoreAccessOption; }
    inline bool KeyStoreAccessOptionHasBeenSet() const { return m_keyStoreAccessOptionHasBeenSet; }
    template<typename KeyStoreAccessOptionT = KeyStoreAccessOption>
    void SetKeyStoreAccessOption(KeyStoreAccessOptionT&& value) { m_keyStoreAccessOptionHasBeenSet = true; m_keyStoreAccessOption = std::forward<KeyStoreAccessOptionT>(value); }
    template<typename KeyStoreAccessOptionT = KeyStoreAccessOption>
    PackageAssociationConfiguration& WithKeyStoreAccessOption(KeyStoreAccessOptionT&& value) { SetKeyStoreAccessOption(std::forward<KeyStoreAccessOptionT>(value)); return *this;}
    ///@}
  private:

    KeyStoreAccessOption m_keyStoreAccessOption;
    bool m_keyStoreAccessOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
