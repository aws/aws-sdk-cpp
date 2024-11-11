/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class ListBlockingInstancesForCapacityTaskRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListBlockingInstancesForCapacityTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBlockingInstancesForCapacityTask"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline const Aws::String& GetOutpostIdentifier() const{ return m_outpostIdentifier; }
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
    inline void SetOutpostIdentifier(const Aws::String& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = value; }
    inline void SetOutpostIdentifier(Aws::String&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::move(value); }
    inline void SetOutpostIdentifier(const char* value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier.assign(value); }
    inline ListBlockingInstancesForCapacityTaskRequest& WithOutpostIdentifier(const Aws::String& value) { SetOutpostIdentifier(value); return *this;}
    inline ListBlockingInstancesForCapacityTaskRequest& WithOutpostIdentifier(Aws::String&& value) { SetOutpostIdentifier(std::move(value)); return *this;}
    inline ListBlockingInstancesForCapacityTaskRequest& WithOutpostIdentifier(const char* value) { SetOutpostIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the capacity task.</p>
     */
    inline const Aws::String& GetCapacityTaskId() const{ return m_capacityTaskId; }
    inline bool CapacityTaskIdHasBeenSet() const { return m_capacityTaskIdHasBeenSet; }
    inline void SetCapacityTaskId(const Aws::String& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = value; }
    inline void SetCapacityTaskId(Aws::String&& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = std::move(value); }
    inline void SetCapacityTaskId(const char* value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId.assign(value); }
    inline ListBlockingInstancesForCapacityTaskRequest& WithCapacityTaskId(const Aws::String& value) { SetCapacityTaskId(value); return *this;}
    inline ListBlockingInstancesForCapacityTaskRequest& WithCapacityTaskId(Aws::String&& value) { SetCapacityTaskId(std::move(value)); return *this;}
    inline ListBlockingInstancesForCapacityTaskRequest& WithCapacityTaskId(const char* value) { SetCapacityTaskId(value); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBlockingInstancesForCapacityTaskRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBlockingInstancesForCapacityTaskRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBlockingInstancesForCapacityTaskRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBlockingInstancesForCapacityTaskRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::String m_capacityTaskId;
    bool m_capacityTaskIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
