/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Panorama
{
namespace Model
{

  /**
   */
  class DescribeNodeRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API DescribeNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNode"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;

    AWS_PANORAMA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The node's ID.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The node's ID.</p>
     */
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }

    /**
     * <p>The node's ID.</p>
     */
    inline DescribeNodeRequest& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The node's ID.</p>
     */
    inline DescribeNodeRequest& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The node's ID.</p>
     */
    inline DescribeNodeRequest& WithNodeId(const char* value) { SetNodeId(value); return *this;}


    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline DescribeNodeRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline DescribeNodeRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline DescribeNodeRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

  private:

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
