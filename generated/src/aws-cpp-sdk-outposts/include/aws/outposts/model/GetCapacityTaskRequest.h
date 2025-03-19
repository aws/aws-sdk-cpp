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
    AWS_OUTPOSTS_API GetCapacityTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCapacityTask"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of the capacity task.</p>
     */
    inline const Aws::String& GetCapacityTaskId() const { return m_capacityTaskId; }
    inline bool CapacityTaskIdHasBeenSet() const { return m_capacityTaskIdHasBeenSet; }
    template<typename CapacityTaskIdT = Aws::String>
    void SetCapacityTaskId(CapacityTaskIdT&& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = std::forward<CapacityTaskIdT>(value); }
    template<typename CapacityTaskIdT = Aws::String>
    GetCapacityTaskRequest& WithCapacityTaskId(CapacityTaskIdT&& value) { SetCapacityTaskId(std::forward<CapacityTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID or ARN of the Outpost associated with the specified capacity task.</p>
     */
    inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
    template<typename OutpostIdentifierT = Aws::String>
    void SetOutpostIdentifier(OutpostIdentifierT&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::forward<OutpostIdentifierT>(value); }
    template<typename OutpostIdentifierT = Aws::String>
    GetCapacityTaskRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) { SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityTaskId;
    bool m_capacityTaskIdHasBeenSet = false;

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
