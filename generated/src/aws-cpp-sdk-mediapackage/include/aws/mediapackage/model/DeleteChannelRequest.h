/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   */
  class DeleteChannelRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API DeleteChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteChannel"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;


    /**
     * The ID of the Channel to delete.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the Channel to delete.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the Channel to delete.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the Channel to delete.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the Channel to delete.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the Channel to delete.
     */
    inline DeleteChannelRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the Channel to delete.
     */
    inline DeleteChannelRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the Channel to delete.
     */
    inline DeleteChannelRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
