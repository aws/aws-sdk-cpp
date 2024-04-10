/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/TagFilter.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class UpdateSessionRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSession"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }

    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline UpdateSessionRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline UpdateSessionRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline UpdateSessionRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline UpdateSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline UpdateSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline UpdateSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline UpdateSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline UpdateSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }

    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }

    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }

    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::move(value); }

    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline UpdateSessionRequest& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}

    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline UpdateSessionRequest& WithTagFilter(TagFilter&& value) { SetTagFilter(std::move(value)); return *this;}

  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
