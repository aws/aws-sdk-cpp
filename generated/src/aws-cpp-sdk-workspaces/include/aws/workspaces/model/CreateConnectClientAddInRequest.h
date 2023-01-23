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
  class CreateConnectClientAddInRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateConnectClientAddInRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectClientAddIn"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The directory identifier for which to configure the client add-in.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The directory identifier for which to configure the client add-in.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The directory identifier for which to configure the client add-in.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The directory identifier for which to configure the client add-in.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The directory identifier for which to configure the client add-in.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The directory identifier for which to configure the client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The directory identifier for which to configure the client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The directory identifier for which to configure the client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The name of the client add-in.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the client add-in.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the client add-in.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the client add-in.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the client add-in.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline const Aws::String& GetURL() const{ return m_uRL; }

    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }

    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline void SetURL(const Aws::String& value) { m_uRLHasBeenSet = true; m_uRL = value; }

    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline void SetURL(Aws::String&& value) { m_uRLHasBeenSet = true; m_uRL = std::move(value); }

    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline void SetURL(const char* value) { m_uRLHasBeenSet = true; m_uRL.assign(value); }

    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithURL(const Aws::String& value) { SetURL(value); return *this;}

    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithURL(Aws::String&& value) { SetURL(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of the Amazon Connect client add-in.</p>
     */
    inline CreateConnectClientAddInRequest& WithURL(const char* value) { SetURL(value); return *this;}

  private:

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
