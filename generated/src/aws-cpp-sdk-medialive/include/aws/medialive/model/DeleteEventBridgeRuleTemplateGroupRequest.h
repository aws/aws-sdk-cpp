/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for
   * DeleteEventBridgeRuleTemplateGroupRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteEventBridgeRuleTemplateGroupRequest">AWS
   * API Reference</a></p>
   */
  class DeleteEventBridgeRuleTemplateGroupRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DeleteEventBridgeRuleTemplateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEventBridgeRuleTemplateGroup"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline DeleteEventBridgeRuleTemplateGroupRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline DeleteEventBridgeRuleTemplateGroupRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline DeleteEventBridgeRuleTemplateGroupRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
