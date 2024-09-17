/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/LibraryItemStatus.h>
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
  class UpdateLibraryItemRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API UpdateLibraryItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLibraryItem"; }

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
    inline UpdateLibraryItemRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateLibraryItemRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateLibraryItemRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the library item to update.</p>
     */
    inline const Aws::String& GetLibraryItemId() const{ return m_libraryItemId; }
    inline bool LibraryItemIdHasBeenSet() const { return m_libraryItemIdHasBeenSet; }
    inline void SetLibraryItemId(const Aws::String& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = value; }
    inline void SetLibraryItemId(Aws::String&& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = std::move(value); }
    inline void SetLibraryItemId(const char* value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId.assign(value); }
    inline UpdateLibraryItemRequest& WithLibraryItemId(const Aws::String& value) { SetLibraryItemId(value); return *this;}
    inline UpdateLibraryItemRequest& WithLibraryItemId(Aws::String&& value) { SetLibraryItemId(std::move(value)); return *this;}
    inline UpdateLibraryItemRequest& WithLibraryItemId(const char* value) { SetLibraryItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new status to set for the library item, such as "Published" or
     * "Hidden".</p>
     */
    inline const LibraryItemStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LibraryItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LibraryItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateLibraryItemRequest& WithStatus(const LibraryItemStatus& value) { SetStatus(value); return *this;}
    inline UpdateLibraryItemRequest& WithStatus(LibraryItemStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new categories to associate with the library item.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const{ return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    inline void SetCategories(const Aws::Vector<Aws::String>& value) { m_categoriesHasBeenSet = true; m_categories = value; }
    inline void SetCategories(Aws::Vector<Aws::String>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }
    inline UpdateLibraryItemRequest& WithCategories(const Aws::Vector<Aws::String>& value) { SetCategories(value); return *this;}
    inline UpdateLibraryItemRequest& WithCategories(Aws::Vector<Aws::String>&& value) { SetCategories(std::move(value)); return *this;}
    inline UpdateLibraryItemRequest& AddCategories(const Aws::String& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    inline UpdateLibraryItemRequest& AddCategories(Aws::String&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }
    inline UpdateLibraryItemRequest& AddCategories(const char* value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_libraryItemId;
    bool m_libraryItemIdHasBeenSet = false;

    LibraryItemStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
