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
namespace Outposts
{
namespace Model
{

  /**
   */
  class GetCapacityTaskRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API GetCapacityTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCapacityTask"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p>ID of the capacity task.</p>
     */
    inline const Aws::String& GetCapacityTaskId() const{ return m_capacityTaskId; }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline bool CapacityTaskIdHasBeenSet() const { return m_capacityTaskIdHasBeenSet; }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline void SetCapacityTaskId(const Aws::String& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = value; }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline void SetCapacityTaskId(Aws::String&& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = std::move(value); }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline void SetCapacityTaskId(const char* value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId.assign(value); }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline GetCapacityTaskRequest& WithCapacityTaskId(const Aws::String& value) { SetCapacityTaskId(value); return *this;}

    /**
     * <p>ID of the capacity task.</p>
     */
    inline GetCapacityTaskRequest& WithCapacityTaskId(Aws::String&& value) { SetCapacityTaskId(std::move(value)); return *this;}

    /**
     * <p>ID of the capacity task.</p>
     */
    inline GetCapacityTaskRequest& WithCapacityTaskId(const char* value) { SetCapacityTaskId(value); return *this;}


    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline const Aws::String& GetOutpostIdentifier() const{ return m_outpostIdentifier; }

    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }

    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostIdentifier(const Aws::String& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = value; }

    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostIdentifier(Aws::String&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::move(value); }

    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostIdentifier(const char* value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier.assign(value); }

    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline GetCapacityTaskRequest& WithOutpostIdentifier(const Aws::String& value) { SetOutpostIdentifier(value); return *this;}

    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline GetCapacityTaskRequest& WithOutpostIdentifier(Aws::String&& value) { SetOutpostIdentifier(std::move(value)); return *this;}

    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline GetCapacityTaskRequest& WithOutpostIdentifier(const char* value) { SetOutpostIdentifier(value); return *this;}

  private:

    Aws::String m_capacityTaskId;
    bool m_capacityTaskIdHasBeenSet = false;

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
