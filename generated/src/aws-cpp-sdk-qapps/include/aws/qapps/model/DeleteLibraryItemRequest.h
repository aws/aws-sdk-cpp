/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class DeleteLibraryItemRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API DeleteLibraryItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLibraryItem"; }

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
    inline DeleteLibraryItemRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteLibraryItemRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteLibraryItemRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the library item to delete.</p>
     */
    inline const Aws::String& GetLibraryItemId() const{ return m_libraryItemId; }
    inline bool LibraryItemIdHasBeenSet() const { return m_libraryItemIdHasBeenSet; }
    inline void SetLibraryItemId(const Aws::String& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = value; }
    inline void SetLibraryItemId(Aws::String&& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = std::move(value); }
    inline void SetLibraryItemId(const char* value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId.assign(value); }
    inline DeleteLibraryItemRequest& WithLibraryItemId(const Aws::String& value) { SetLibraryItemId(value); return *this;}
    inline DeleteLibraryItemRequest& WithLibraryItemId(Aws::String&& value) { SetLibraryItemId(std::move(value)); return *this;}
    inline DeleteLibraryItemRequest& WithLibraryItemId(const char* value) { SetLibraryItemId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_libraryItemId;
    bool m_libraryItemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
