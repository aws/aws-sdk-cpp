/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannelRequest.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ChannelHandshakePayload.h>
#include <aws/partnercentral-channel/model/HandshakeType.h>
#include <aws/partnercentral-channel/model/Tag.h>

#include <utility>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

/**
 */
class CreateChannelHandshakeRequest : public PartnerCentralChannelRequest {
 public:
  AWS_PARTNERCENTRALCHANNEL_API CreateChannelHandshakeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateChannelHandshake"; }

  AWS_PARTNERCENTRALCHANNEL_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALCHANNEL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The type of handshake to create (e.g., start service period, revoke service
   * period).</p>
   */
  inline HandshakeType GetHandshakeType() const { return m_handshakeType; }
  inline bool HandshakeTypeHasBeenSet() const { return m_handshakeTypeHasBeenSet; }
  inline void SetHandshakeType(HandshakeType value) {
    m_handshakeTypeHasBeenSet = true;
    m_handshakeType = value;
  }
  inline CreateChannelHandshakeRequest& WithHandshakeType(HandshakeType value) {
    SetHandshakeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier for the handshake request.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  CreateChannelHandshakeRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the resource associated with this handshake.</p>
   */
  inline const Aws::String& GetAssociatedResourceIdentifier() const { return m_associatedResourceIdentifier; }
  inline bool AssociatedResourceIdentifierHasBeenSet() const { return m_associatedResourceIdentifierHasBeenSet; }
  template <typename AssociatedResourceIdentifierT = Aws::String>
  void SetAssociatedResourceIdentifier(AssociatedResourceIdentifierT&& value) {
    m_associatedResourceIdentifierHasBeenSet = true;
    m_associatedResourceIdentifier = std::forward<AssociatedResourceIdentifierT>(value);
  }
  template <typename AssociatedResourceIdentifierT = Aws::String>
  CreateChannelHandshakeRequest& WithAssociatedResourceIdentifier(AssociatedResourceIdentifierT&& value) {
    SetAssociatedResourceIdentifier(std::forward<AssociatedResourceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payload containing specific details for the handshake type.</p>
   */
  inline const ChannelHandshakePayload& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = ChannelHandshakePayload>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = ChannelHandshakePayload>
  CreateChannelHandshakeRequest& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateChannelHandshakeRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs to associate with the channel handshake.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateChannelHandshakeRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateChannelHandshakeRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  HandshakeType m_handshakeType{HandshakeType::NOT_SET};
  bool m_handshakeTypeHasBeenSet = false;

  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_associatedResourceIdentifier;
  bool m_associatedResourceIdentifierHasBeenSet = false;

  ChannelHandshakePayload m_payload;
  bool m_payloadHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
