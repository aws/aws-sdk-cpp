/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qbusiness/model/ActionExecutionPayloadField.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A request from an end user signalling an intent to perform an Amazon Q
   * Business plugin action during a streaming chat.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionExecutionEvent">AWS
   * API Reference</a></p>
   */
  class ActionExecutionEvent
  {
  public:
    AWS_QBUSINESS_API ActionExecutionEvent();
    AWS_QBUSINESS_API ActionExecutionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionExecutionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the plugin for which the action is being requested.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }

    /**
     * <p>The identifier of the plugin for which the action is being requested.</p>
     */
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }

    /**
     * <p>The identifier of the plugin for which the action is being requested.</p>
     */
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }

    /**
     * <p>The identifier of the plugin for which the action is being requested.</p>
     */
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }

    /**
     * <p>The identifier of the plugin for which the action is being requested.</p>
     */
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }

    /**
     * <p>The identifier of the plugin for which the action is being requested.</p>
     */
    inline ActionExecutionEvent& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}

    /**
     * <p>The identifier of the plugin for which the action is being requested.</p>
     */
    inline ActionExecutionEvent& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the plugin for which the action is being requested.</p>
     */
    inline ActionExecutionEvent& WithPluginId(const char* value) { SetPluginId(value); return *this;}


    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline const Aws::Map<Aws::String, ActionExecutionPayloadField>& GetPayload() const{ return m_payload; }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline void SetPayload(const Aws::Map<Aws::String, ActionExecutionPayloadField>& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline void SetPayload(Aws::Map<Aws::String, ActionExecutionPayloadField>&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline ActionExecutionEvent& WithPayload(const Aws::Map<Aws::String, ActionExecutionPayloadField>& value) { SetPayload(value); return *this;}

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline ActionExecutionEvent& WithPayload(Aws::Map<Aws::String, ActionExecutionPayloadField>&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline ActionExecutionEvent& AddPayload(const Aws::String& key, const ActionExecutionPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, value); return *this; }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline ActionExecutionEvent& AddPayload(Aws::String&& key, const ActionExecutionPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline ActionExecutionEvent& AddPayload(const Aws::String& key, ActionExecutionPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline ActionExecutionEvent& AddPayload(Aws::String&& key, ActionExecutionPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline ActionExecutionEvent& AddPayload(const char* key, ActionExecutionPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline ActionExecutionEvent& AddPayload(const char* key, const ActionExecutionPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, value); return *this; }


    /**
     * <p>A string used to retain information about the hierarchical contexts within a
     * action execution event payload.</p>
     */
    inline const Aws::String& GetPayloadFieldNameSeparator() const{ return m_payloadFieldNameSeparator; }

    /**
     * <p>A string used to retain information about the hierarchical contexts within a
     * action execution event payload.</p>
     */
    inline bool PayloadFieldNameSeparatorHasBeenSet() const { return m_payloadFieldNameSeparatorHasBeenSet; }

    /**
     * <p>A string used to retain information about the hierarchical contexts within a
     * action execution event payload.</p>
     */
    inline void SetPayloadFieldNameSeparator(const Aws::String& value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator = value; }

    /**
     * <p>A string used to retain information about the hierarchical contexts within a
     * action execution event payload.</p>
     */
    inline void SetPayloadFieldNameSeparator(Aws::String&& value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator = std::move(value); }

    /**
     * <p>A string used to retain information about the hierarchical contexts within a
     * action execution event payload.</p>
     */
    inline void SetPayloadFieldNameSeparator(const char* value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator.assign(value); }

    /**
     * <p>A string used to retain information about the hierarchical contexts within a
     * action execution event payload.</p>
     */
    inline ActionExecutionEvent& WithPayloadFieldNameSeparator(const Aws::String& value) { SetPayloadFieldNameSeparator(value); return *this;}

    /**
     * <p>A string used to retain information about the hierarchical contexts within a
     * action execution event payload.</p>
     */
    inline ActionExecutionEvent& WithPayloadFieldNameSeparator(Aws::String&& value) { SetPayloadFieldNameSeparator(std::move(value)); return *this;}

    /**
     * <p>A string used to retain information about the hierarchical contexts within a
     * action execution event payload.</p>
     */
    inline ActionExecutionEvent& WithPayloadFieldNameSeparator(const char* value) { SetPayloadFieldNameSeparator(value); return *this;}

  private:

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::Map<Aws::String, ActionExecutionPayloadField> m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_payloadFieldNameSeparator;
    bool m_payloadFieldNameSeparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
