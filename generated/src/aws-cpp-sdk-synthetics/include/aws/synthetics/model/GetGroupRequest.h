/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class GetGroupRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API GetGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGroup"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline const Aws::String& GetGroupIdentifier() const { return m_groupIdentifier; }
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }
    template<typename GroupIdentifierT = Aws::String>
    void SetGroupIdentifier(GroupIdentifierT&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::forward<GroupIdentifierT>(value); }
    template<typename GroupIdentifierT = Aws::String>
    GetGroupRequest& WithGroupIdentifier(GroupIdentifierT&& value) { SetGroupIdentifier(std::forward<GroupIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
