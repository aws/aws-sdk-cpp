/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkManager {
namespace Model {

/**
 */
class ListAttachmentNatConfigurationsRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API ListAttachmentNatConfigurationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAttachmentNatConfigurations"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of a core network. Returns the NAT configurations of attachments in
   * the core network that support NAT.</p>
   */
  inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
  inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
  template <typename CoreNetworkIdT = Aws::String>
  void SetCoreNetworkId(CoreNetworkIdT&& value) {
    m_coreNetworkIdHasBeenSet = true;
    m_coreNetworkId = std::forward<CoreNetworkIdT>(value);
  }
  template <typename CoreNetworkIdT = Aws::String>
  ListAttachmentNatConfigurationsRequest& WithCoreNetworkId(CoreNetworkIdT&& value) {
    SetCoreNetworkId(std::forward<CoreNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of an attachment. Returns the NAT configuration of the specified
   * attachment. If you specify both an attachment ID and a core network ID, the
   * attachment ID is used.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  ListAttachmentNatConfigurationsRequest& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters to apply to the results. Values for the same filter are joined
   * with OR, and different filters are joined with AND. You can specify up to 10
   * filter values in total. The following filters are supported:</p> <ul> <li> <p>
   * <code>nat-gateway-support</code>: The state of NAT gateway support on the
   * attachment, for example <code>ENABLED</code>.</p> </li> <li> <p>
   * <code>nat-system-route-support</code>: Whether system routes are installed for
   * the attachment, <code>true</code> or <code>false</code>.</p> </li> <li> <p>
   * <code>rule-number</code>: The rule number of a NAT rule.</p> </li> <li> <p>
   * <code>match-source-cidr</code>: The source CIDR block of a NAT rule. The value
   * must exactly match the CIDR block of the rule.</p> </li> <li> <p>
   * <code>nat-cidr</code>: The NAT CIDR block of a NAT rule. The value must exactly
   * match the CIDR block of the rule.</p> </li> <li> <p>
   * <code>nat-rule-state</code>: The state of a NAT rule, for example
   * <code>ACTIVATED</code>.</p> </li> </ul>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  ListAttachmentNatConfigurationsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersKeyT = Aws::String, typename FiltersValueT = Aws::Vector<Aws::String>>
  ListAttachmentNatConfigurationsRequest& AddFilters(FiltersKeyT&& key, FiltersValueT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace(std::forward<FiltersKeyT>(key), std::forward<FiltersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAttachmentNatConfigurationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAttachmentNatConfigurationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_coreNetworkId;

  Aws::String m_attachmentId;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_filters;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_coreNetworkIdHasBeenSet = false;
  bool m_attachmentIdHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
