/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class UpdateGraphRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API UpdateGraphRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGraph"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const{ return m_graphIdentifier; }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphIdentifier(const Aws::String& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = value; }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphIdentifier(Aws::String&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphIdentifier(const char* value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline UpdateGraphRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline UpdateGraphRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline UpdateGraphRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}


    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline bool GetPublicConnectivity() const{ return m_publicConnectivity; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline bool PublicConnectivityHasBeenSet() const { return m_publicConnectivityHasBeenSet; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline void SetPublicConnectivity(bool value) { m_publicConnectivityHasBeenSet = true; m_publicConnectivity = value; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline UpdateGraphRequest& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}


    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline int GetProvisionedMemory() const{ return m_provisionedMemory; }

    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline bool ProvisionedMemoryHasBeenSet() const { return m_provisionedMemoryHasBeenSet; }

    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline void SetProvisionedMemory(int value) { m_provisionedMemoryHasBeenSet = true; m_provisionedMemory = value; }

    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline UpdateGraphRequest& WithProvisionedMemory(int value) { SetProvisionedMemory(value); return *this;}


    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline UpdateGraphRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}

  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    bool m_publicConnectivity;
    bool m_publicConnectivityHasBeenSet = false;

    int m_provisionedMemory;
    bool m_provisionedMemoryHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
