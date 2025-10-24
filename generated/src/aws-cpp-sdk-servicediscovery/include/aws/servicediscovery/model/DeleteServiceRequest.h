﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ServiceDiscovery {
namespace Model {

/**
 */
class DeleteServiceRequest : public ServiceDiscoveryRequest {
 public:
  AWS_SERVICEDISCOVERY_API DeleteServiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteService"; }

  AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

  AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of the service that you want to delete.
   * If the namespace associated with the service is shared with your Amazon Web
   * Services account, specify the service ARN. For more information about shared
   * namespaces, see <a
   * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
   * Cloud Map namespace sharing</a>.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DeleteServiceRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
