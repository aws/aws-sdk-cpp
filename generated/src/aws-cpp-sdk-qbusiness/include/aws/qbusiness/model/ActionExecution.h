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
   * <p>Performs an Amazon Q Business plugin action during a non-streaming chat
   * conversation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionExecution">AWS
   * API Reference</a></p>
   */
  class ActionExecution
  {
  public:
    AWS_QBUSINESS_API ActionExecution() = default;
    AWS_QBUSINESS_API ActionExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the plugin the action is attached to.</p>
     */
    inline const Aws::String& GetPluginId() const { return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    template<typename PluginIdT = Aws::String>
    void SetPluginId(PluginIdT&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::forward<PluginIdT>(value); }
    template<typename PluginIdT = Aws::String>
    ActionExecution& WithPluginId(PluginIdT&& value) { SetPluginId(std::forward<PluginIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping of field names to the field values in input that an end user
     * provides to Amazon Q Business requests to perform their plugin action. </p>
     */
    inline const Aws::Map<Aws::String, ActionExecutionPayloadField>& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::Map<Aws::String, ActionExecutionPayloadField>>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::Map<Aws::String, ActionExecutionPayloadField>>
    ActionExecution& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    template<typename PayloadKeyT = Aws::String, typename PayloadValueT = ActionExecutionPayloadField>
    ActionExecution& AddPayload(PayloadKeyT&& key, PayloadValueT&& value) {
      m_payloadHasBeenSet = true; m_payload.emplace(std::forward<PayloadKeyT>(key), std::forward<PayloadValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action execution event payload.</p>
     */
    inline const Aws::String& GetPayloadFieldNameSeparator() const { return m_payloadFieldNameSeparator; }
    inline bool PayloadFieldNameSeparatorHasBeenSet() const { return m_payloadFieldNameSeparatorHasBeenSet; }
    template<typename PayloadFieldNameSeparatorT = Aws::String>
    void SetPayloadFieldNameSeparator(PayloadFieldNameSeparatorT&& value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator = std::forward<PayloadFieldNameSeparatorT>(value); }
    template<typename PayloadFieldNameSeparatorT = Aws::String>
    ActionExecution& WithPayloadFieldNameSeparator(PayloadFieldNameSeparatorT&& value) { SetPayloadFieldNameSeparator(std::forward<PayloadFieldNameSeparatorT>(value)); return *this;}
    ///@}
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
