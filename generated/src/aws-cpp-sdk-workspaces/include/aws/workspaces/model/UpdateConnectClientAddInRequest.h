/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class UpdateConnectClientAddInRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API UpdateConnectClientAddInRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectClientAddIn"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the client add-in to update.</p>
     */
    inline const Aws::String& GetAddInId() const { return m_addInId; }
    inline bool AddInIdHasBeenSet() const { return m_addInIdHasBeenSet; }
    template<typename AddInIdT = Aws::String>
    void SetAddInId(AddInIdT&& value) { m_addInIdHasBeenSet = true; m_addInId = std::forward<AddInIdT>(value); }
    template<typename AddInIdT = Aws::String>
    UpdateConnectClientAddInRequest& WithAddInId(AddInIdT&& value) { SetAddInId(std::forward<AddInIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    UpdateConnectClientAddInRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the client add-in.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConnectClientAddInRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline const Aws::String& GetURL() const { return m_uRL; }
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }
    template<typename URLT = Aws::String>
    void SetURL(URLT&& value) { m_uRLHasBeenSet = true; m_uRL = std::forward<URLT>(value); }
    template<typename URLT = Aws::String>
    UpdateConnectClientAddInRequest& WithURL(URLT&& value) { SetURL(std::forward<URLT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addInId;
    bool m_addInIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_uRL;
    bool m_uRLHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
