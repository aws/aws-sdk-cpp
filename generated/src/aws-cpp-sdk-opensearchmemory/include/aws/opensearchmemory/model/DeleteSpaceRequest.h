/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class DeleteSpaceRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API DeleteSpaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteSpace"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the space to delete.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  DeleteSpaceRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;
  bool m_spaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
