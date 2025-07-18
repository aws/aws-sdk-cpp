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
  class GetOutpostRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API GetOutpostRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOutpost"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    GetOutpostRequest& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
