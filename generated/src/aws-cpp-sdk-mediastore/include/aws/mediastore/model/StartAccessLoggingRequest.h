/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class StartAccessLoggingRequest : public MediaStoreRequest
  {
  public:
    AWS_MEDIASTORE_API StartAccessLoggingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAccessLogging"; }

    AWS_MEDIASTORE_API Aws::String SerializePayload() const override;

    AWS_MEDIASTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the container that you want to start access logging on.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline StartAccessLoggingRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline StartAccessLoggingRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline StartAccessLoggingRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
