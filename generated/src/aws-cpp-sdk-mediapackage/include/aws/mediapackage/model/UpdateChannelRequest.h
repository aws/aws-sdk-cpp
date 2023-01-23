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
   * Configuration parameters used to update the Channel.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/UpdateChannelRequest">AWS
   * API Reference</a></p>
   */
  class UpdateChannelRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;


    /**
     * A short text description of the Channel.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A short text description of the Channel.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A short text description of the Channel.
     */
    inline UpdateChannelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A short text description of the Channel.
     */
    inline UpdateChannelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A short text description of the Channel.
     */
    inline UpdateChannelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The ID of the Channel to update.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the Channel to update.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the Channel to update.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the Channel to update.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the Channel to update.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the Channel to update.
     */
    inline UpdateChannelRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the Channel to update.
     */
    inline UpdateChannelRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the Channel to update.
     */
    inline UpdateChannelRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
