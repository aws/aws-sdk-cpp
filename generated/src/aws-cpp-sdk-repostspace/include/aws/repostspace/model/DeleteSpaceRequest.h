/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class DeleteSpaceRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API DeleteSpaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSpace"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(const Aws::String& value) { m_spaceIdHasBeenSet = true; m_spaceId = value; }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(Aws::String&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::move(value); }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline void SetSpaceId(const char* value) { m_spaceIdHasBeenSet = true; m_spaceId.assign(value); }

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline DeleteSpaceRequest& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline DeleteSpaceRequest& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline DeleteSpaceRequest& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}

  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
