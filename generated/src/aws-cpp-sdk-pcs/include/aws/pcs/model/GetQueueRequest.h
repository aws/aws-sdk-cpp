/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PCS
{
namespace Model
{

  /**
   */
  class GetQueueRequest : public PCSRequest
  {
  public:
    AWS_PCS_API GetQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueue"; }

    AWS_PCS_API Aws::String SerializePayload() const override;

    AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or ID of the cluster of the queue.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline GetQueueRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline GetQueueRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline GetQueueRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ID of the queue.</p>
     */
    inline const Aws::String& GetQueueIdentifier() const{ return m_queueIdentifier; }
    inline bool QueueIdentifierHasBeenSet() const { return m_queueIdentifierHasBeenSet; }
    inline void SetQueueIdentifier(const Aws::String& value) { m_queueIdentifierHasBeenSet = true; m_queueIdentifier = value; }
    inline void SetQueueIdentifier(Aws::String&& value) { m_queueIdentifierHasBeenSet = true; m_queueIdentifier = std::move(value); }
    inline void SetQueueIdentifier(const char* value) { m_queueIdentifierHasBeenSet = true; m_queueIdentifier.assign(value); }
    inline GetQueueRequest& WithQueueIdentifier(const Aws::String& value) { SetQueueIdentifier(value); return *this;}
    inline GetQueueRequest& WithQueueIdentifier(Aws::String&& value) { SetQueueIdentifier(std::move(value)); return *this;}
    inline GetQueueRequest& WithQueueIdentifier(const char* value) { SetQueueIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_queueIdentifier;
    bool m_queueIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
