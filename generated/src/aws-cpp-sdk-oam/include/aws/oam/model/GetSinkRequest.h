/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class GetSinkRequest : public OAMRequest
  {
  public:
    AWS_OAM_API GetSinkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSink"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the sink to retrieve information for.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetSinkRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include the tags associated with the sink in the
     * response. When <code>IncludeTags</code> is set to <code>true</code> and the
     * caller has the required permission, <code>oam:ListTagsForResource</code>, the
     * API will return the tags for the specified resource. If the caller doesn't have
     * the required permission, <code>oam:ListTagsForResource</code>, the API will
     * raise an exception.</p> <p>The default value is <code>false</code>.</p>
     */
    inline bool GetIncludeTags() const { return m_includeTags; }
    inline bool IncludeTagsHasBeenSet() const { return m_includeTagsHasBeenSet; }
    inline void SetIncludeTags(bool value) { m_includeTagsHasBeenSet = true; m_includeTags = value; }
    inline GetSinkRequest& WithIncludeTags(bool value) { SetIncludeTags(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    bool m_includeTags{false};
    bool m_includeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
