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
   * <p>The SAML identity povider information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SAMLIdp">AWS
   * API Reference</a></p>
   */
  class SAMLIdp
  {
  public:
    AWS_OPENSEARCHSERVICE_API SAMLIdp() = default;
    AWS_OPENSEARCHSERVICE_API SAMLIdp(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SAMLIdp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metadata of the SAML application, in XML format.</p>
     */
    inline const Aws::String& GetMetadataContent() const { return m_metadataContent; }
    inline bool MetadataContentHasBeenSet() const { return m_metadataContentHasBeenSet; }
    template<typename MetadataContentT = Aws::String>
    void SetMetadataContent(MetadataContentT&& value) { m_metadataContentHasBeenSet = true; m_metadataContent = std::forward<MetadataContentT>(value); }
    template<typename MetadataContentT = Aws::String>
    SAMLIdp& WithMetadataContent(MetadataContentT&& value) { SetMetadataContent(std::forward<MetadataContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique entity ID of the application in the SAML identity provider.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    SAMLIdp& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metadataContent;
    bool m_metadataContentHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
