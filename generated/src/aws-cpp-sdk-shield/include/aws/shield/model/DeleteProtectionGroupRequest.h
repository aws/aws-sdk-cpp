/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class DeleteProtectionGroupRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API DeleteProtectionGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProtectionGroup"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline const Aws::String& GetProtectionGroupId() const { return m_protectionGroupId; }
    inline bool ProtectionGroupIdHasBeenSet() const { return m_protectionGroupIdHasBeenSet; }
    template<typename ProtectionGroupIdT = Aws::String>
    void SetProtectionGroupId(ProtectionGroupIdT&& value) { m_protectionGroupIdHasBeenSet = true; m_protectionGroupId = std::forward<ProtectionGroupIdT>(value); }
    template<typename ProtectionGroupIdT = Aws::String>
    DeleteProtectionGroupRequest& WithProtectionGroupId(ProtectionGroupIdT&& value) { SetProtectionGroupId(std::forward<ProtectionGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protectionGroupId;
    bool m_protectionGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
