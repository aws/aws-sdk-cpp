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
  class DeleteProtectionRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API DeleteProtectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProtection"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to be
     * deleted.</p>
     */
    inline const Aws::String& GetProtectionId() const { return m_protectionId; }
    inline bool ProtectionIdHasBeenSet() const { return m_protectionIdHasBeenSet; }
    template<typename ProtectionIdT = Aws::String>
    void SetProtectionId(ProtectionIdT&& value) { m_protectionIdHasBeenSet = true; m_protectionId = std::forward<ProtectionIdT>(value); }
    template<typename ProtectionIdT = Aws::String>
    DeleteProtectionRequest& WithProtectionId(ProtectionIdT&& value) { SetProtectionId(std::forward<ProtectionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protectionId;
    bool m_protectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
