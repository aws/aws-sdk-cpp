/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Represents the request structure for retrieving the status and results of a
 * prospecting task.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetProspectingFromEngagementTaskRequest">AWS
 * API Reference</a></p>
 */
class GetProspectingFromEngagementTaskRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API GetProspectingFromEngagementTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProspectingFromEngagementTask"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog associated with the task. Specify <code>AWS</code> for
   * production environments and <code>Sandbox</code> for testing and development
   * purposes. The value must match the catalog used when the task was created.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetProspectingFromEngagementTaskRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the prospecting task to retrieve. This value is
   * returned in the <code>TaskId</code> field of the
   * <code>StartProspectingFromEngagementTask</code> response.</p>
   */
  inline const Aws::String& GetTaskIdentifier() const { return m_taskIdentifier; }
  inline bool TaskIdentifierHasBeenSet() const { return m_taskIdentifierHasBeenSet; }
  template <typename TaskIdentifierT = Aws::String>
  void SetTaskIdentifier(TaskIdentifierT&& value) {
    m_taskIdentifierHasBeenSet = true;
    m_taskIdentifier = std::forward<TaskIdentifierT>(value);
  }
  template <typename TaskIdentifierT = Aws::String>
  GetProspectingFromEngagementTaskRequest& WithTaskIdentifier(TaskIdentifierT&& value) {
    SetTaskIdentifier(std::forward<TaskIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_taskIdentifier;
  bool m_catalogHasBeenSet = false;
  bool m_taskIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
