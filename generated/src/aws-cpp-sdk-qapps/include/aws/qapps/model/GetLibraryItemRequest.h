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
namespace Http
{
    class URI;
} //namespace Http
namespace QApps
{
namespace Model
{

  /**
   */
  class GetLibraryItemRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API GetLibraryItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLibraryItem"; }

    AWS_QAPPS_API Aws::String SerializePayload() const override;

    AWS_QAPPS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
    inline GetLibraryItemRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GetLibraryItemRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GetLibraryItemRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the library item to retrieve.</p>
     */
    inline const Aws::String& GetLibraryItemId() const{ return m_libraryItemId; }
    inline bool LibraryItemIdHasBeenSet() const { return m_libraryItemIdHasBeenSet; }
    inline void SetLibraryItemId(const Aws::String& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = value; }
    inline void SetLibraryItemId(Aws::String&& value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId = std::move(value); }
    inline void SetLibraryItemId(const char* value) { m_libraryItemIdHasBeenSet = true; m_libraryItemId.assign(value); }
    inline GetLibraryItemRequest& WithLibraryItemId(const Aws::String& value) { SetLibraryItemId(value); return *this;}
    inline GetLibraryItemRequest& WithLibraryItemId(Aws::String&& value) { SetLibraryItemId(std::move(value)); return *this;}
    inline GetLibraryItemRequest& WithLibraryItemId(const char* value) { SetLibraryItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q App associated with the library
     * item.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline GetLibraryItemRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline GetLibraryItemRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline GetLibraryItemRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_libraryItemId;
    bool m_libraryItemIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
