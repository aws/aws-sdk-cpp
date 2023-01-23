/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the Amazon Web Services accounts that have been granted permission
   * to use a shared image. For more information about sharing images, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/share-custom-image.html">
   * Share or Unshare a Custom WorkSpaces Image</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImagePermission">AWS
   * API Reference</a></p>
   */
  class ImagePermission
  {
  public:
    AWS_WORKSPACES_API ImagePermission();
    AWS_WORKSPACES_API ImagePermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ImagePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the Amazon Web Services account that an image has been
     * shared with.</p>
     */
    inline const Aws::String& GetSharedAccountId() const{ return m_sharedAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account that an image has been
     * shared with.</p>
     */
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account that an image has been
     * shared with.</p>
     */
    inline void SetSharedAccountId(const Aws::String& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account that an image has been
     * shared with.</p>
     */
    inline void SetSharedAccountId(Aws::String&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that an image has been
     * shared with.</p>
     */
    inline void SetSharedAccountId(const char* value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that an image has been
     * shared with.</p>
     */
    inline ImagePermission& WithSharedAccountId(const Aws::String& value) { SetSharedAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that an image has been
     * shared with.</p>
     */
    inline ImagePermission& WithSharedAccountId(Aws::String&& value) { SetSharedAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that an image has been
     * shared with.</p>
     */
    inline ImagePermission& WithSharedAccountId(const char* value) { SetSharedAccountId(value); return *this;}

  private:

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
