/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Represents the request structure for starting a prospecting task. Includes up
 * to 100 engagement identifiers and a task name. Uses <code>ClientToken</code> to
 * ensure idempotency.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/StartProspectingFromEngagementTaskRequest">AWS
 * API Reference</a></p>
 */
class StartProspectingFromEngagementTaskRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API StartProspectingFromEngagementTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartProspectingFromEngagementTask"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog in which the task is initiated. Specify
   * <code>AWS</code> for production environments and <code>Sandbox</code> for
   * testing and development purposes.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  StartProspectingFromEngagementTaskRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of engagement identifiers to include in this prospecting task. Each
   * identifier must correspond to an existing engagement in the specified catalog.
   * Maximum of 100 identifiers per task.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIdentifiers() const { return m_identifiers; }
  inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
  template <typename IdentifiersT = Aws::Vector<Aws::String>>
  void SetIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers = std::forward<IdentifiersT>(value);
  }
  template <typename IdentifiersT = Aws::Vector<Aws::String>>
  StartProspectingFromEngagementTaskRequest& WithIdentifiers(IdentifiersT&& value) {
    SetIdentifiers(std::forward<IdentifiersT>(value));
    return *this;
  }
  template <typename IdentifiersT = Aws::String>
  StartProspectingFromEngagementTaskRequest& AddIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers.emplace_back(std::forward<IdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the task. This name helps identify the task in list
   * and get operations. The name must contain 1 to 128 characters.</p>
   */
  inline const Aws::String& GetTaskName() const { return m_taskName; }
  inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
  template <typename TaskNameT = Aws::String>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::String>
  StartProspectingFromEngagementTaskRequest& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier provided by the client to ensure
   * idempotency. Making the same request with the same <code>ClientToken</code>
   * returns the same response without creating a duplicate task.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartProspectingFromEngagementTaskRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::Vector<Aws::String> m_identifiers;

  Aws::String m_taskName;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_catalogHasBeenSet = false;
  bool m_identifiersHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
