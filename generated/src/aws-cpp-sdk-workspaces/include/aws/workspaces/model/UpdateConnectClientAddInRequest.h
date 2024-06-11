﻿/**
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
    AWS_WORKSPACES_API UpdateConnectClientAddInRequest();

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
    inline const Aws::String& GetAddInId() const{ return m_addInId; }
    inline bool AddInIdHasBeenSet() const { return m_addInIdHasBeenSet; }
    inline void SetAddInId(const Aws::String& value) { m_addInIdHasBeenSet = true; m_addInId = value; }
    inline void SetAddInId(Aws::String&& value) { m_addInIdHasBeenSet = true; m_addInId = std::move(value); }
    inline void SetAddInId(const char* value) { m_addInIdHasBeenSet = true; m_addInId.assign(value); }
    inline UpdateConnectClientAddInRequest& WithAddInId(const Aws::String& value) { SetAddInId(value); return *this;}
    inline UpdateConnectClientAddInRequest& WithAddInId(Aws::String&& value) { SetAddInId(std::move(value)); return *this;}
    inline UpdateConnectClientAddInRequest& WithAddInId(const char* value) { SetAddInId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline UpdateConnectClientAddInRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline UpdateConnectClientAddInRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline UpdateConnectClientAddInRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the client add-in.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateConnectClientAddInRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateConnectClientAddInRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateConnectClientAddInRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline const Aws::String& GetURL() const{ return m_uRL; }
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }
    inline void SetURL(const Aws::String& value) { m_uRLHasBeenSet = true; m_uRL = value; }
    inline void SetURL(Aws::String&& value) { m_uRLHasBeenSet = true; m_uRL = std::move(value); }
    inline void SetURL(const char* value) { m_uRLHasBeenSet = true; m_uRL.assign(value); }
    inline UpdateConnectClientAddInRequest& WithURL(const Aws::String& value) { SetURL(value); return *this;}
    inline UpdateConnectClientAddInRequest& WithURL(Aws::String&& value) { SetURL(std::move(value)); return *this;}
    inline UpdateConnectClientAddInRequest& WithURL(const char* value) { SetURL(value); return *this;}
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
