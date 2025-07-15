/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class RegisterAdminRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API RegisterAdminRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAdmin"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    RegisterAdminRequest& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the administrator.</p>
     */
    inline const Aws::String& GetAdminId() const { return m_adminId; }
    inline bool AdminIdHasBeenSet() const { return m_adminIdHasBeenSet; }
    template<typename AdminIdT = Aws::String>
    void SetAdminId(AdminIdT&& value) { m_adminIdHasBeenSet = true; m_adminId = std::forward<AdminIdT>(value); }
    template<typename AdminIdT = Aws::String>
    RegisterAdminRequest& WithAdminId(AdminIdT&& value) { SetAdminId(std::forward<AdminIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_adminId;
    bool m_adminIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
