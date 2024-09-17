/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class CreateLibraryItemRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API CreateLibraryItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLibraryItem"; }

    AWS_QAPPS_API Aws::String SerializePayload() const override;

    AWS_QAPPS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application environment
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreateLibraryItemRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateLibraryItemRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateLibraryItemRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q App to publish to the library.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline CreateLibraryItemRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline CreateLibraryItemRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline CreateLibraryItemRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Q App to publish to the library.</p>
     */
    inline int GetAppVersion() const{ return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    inline void SetAppVersion(int value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline CreateLibraryItemRequest& WithAppVersion(int value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The categories to associate with the library item for easier discovery.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<Aws::String>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<Aws::String>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline CreateLibraryItemRequest& WithCategories(const Aws::Vector<Aws::String>& value) { SetCategories(value); return *this;}
    inline CreateLibraryItemRequest& WithCategories(Aws::Vector<Aws::String>&& value) { SetCategories(std::move(value)); return *this;}
    inline CreateLibraryItemRequest& AddCategories(const Aws::String& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline CreateLibraryItemRequest& AddCategories(Aws::String&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    inline CreateLibraryItemRequest& AddCategories(const char* value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    int m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
