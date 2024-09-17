/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qbusiness/model/ActionReviewPayloadField.h>
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
   * <p>An output event that Amazon Q Business returns to an user who wants to
   * perform a plugin action during a non-streaming chat conversation. It contains
   * information about the selected action with a list of possible user input fields,
   * some pre-populated by Amazon Q Business.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionReview">AWS
   * API Reference</a></p>
   */
  class ActionReview
  {
  public:
    AWS_QBUSINESS_API ActionReview();
    AWS_QBUSINESS_API ActionReview(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionReview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the plugin associated with the action review.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }
    inline ActionReview& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}
    inline ActionReview& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}
    inline ActionReview& WithPluginId(const char* value) { SetPluginId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of plugin.</p>
     */
    inline const PluginType& GetPluginType() const{ return m_pluginType; }
    inline bool PluginTypeHasBeenSet() const { return m_pluginTypeHasBeenSet; }
    inline void SetPluginType(const PluginType& value) { m_pluginTypeHasBeenSet = true; m_pluginType = value; }
    inline void SetPluginType(PluginType&& value) { m_pluginTypeHasBeenSet = true; m_pluginType = std::move(value); }
    inline ActionReview& WithPluginType(const PluginType& value) { SetPluginType(value); return *this;}
    inline ActionReview& WithPluginType(PluginType&& value) { SetPluginType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline const Aws::Map<Aws::String, ActionReviewPayloadField>& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const Aws::Map<Aws::String, ActionReviewPayloadField>& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(Aws::Map<Aws::String, ActionReviewPayloadField>&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline ActionReview& WithPayload(const Aws::Map<Aws::String, ActionReviewPayloadField>& value) { SetPayload(value); return *this;}
    inline ActionReview& WithPayload(Aws::Map<Aws::String, ActionReviewPayloadField>&& value) { SetPayload(std::move(value)); return *this;}
    inline ActionReview& AddPayload(const Aws::String& key, const ActionReviewPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, value); return *this; }
    inline ActionReview& AddPayload(Aws::String&& key, const ActionReviewPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(std::move(key), value); return *this; }
    inline ActionReview& AddPayload(const Aws::String& key, ActionReviewPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, std::move(value)); return *this; }
    inline ActionReview& AddPayload(Aws::String&& key, ActionReviewPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(std::move(key), std::move(value)); return *this; }
    inline ActionReview& AddPayload(const char* key, ActionReviewPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, std::move(value)); return *this; }
    inline ActionReview& AddPayload(const char* key, const ActionReviewPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review payload.</p>
     */
    inline const Aws::String& GetPayloadFieldNameSeparator() const{ return m_payloadFieldNameSeparator; }
    inline bool PayloadFieldNameSeparatorHasBeenSet() const { return m_payloadFieldNameSeparatorHasBeenSet; }
    inline void SetPayloadFieldNameSeparator(const Aws::String& value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator = value; }
    inline void SetPayloadFieldNameSeparator(Aws::String&& value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator = std::move(value); }
    inline void SetPayloadFieldNameSeparator(const char* value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator.assign(value); }
    inline ActionReview& WithPayloadFieldNameSeparator(const Aws::String& value) { SetPayloadFieldNameSeparator(value); return *this;}
    inline ActionReview& WithPayloadFieldNameSeparator(Aws::String&& value) { SetPayloadFieldNameSeparator(std::move(value)); return *this;}
    inline ActionReview& WithPayloadFieldNameSeparator(const char* value) { SetPayloadFieldNameSeparator(value); return *this;}
    ///@}
  private:

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    PluginType m_pluginType;
    bool m_pluginTypeHasBeenSet = false;

    Aws::Map<Aws::String, ActionReviewPayloadField> m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_payloadFieldNameSeparator;
    bool m_payloadFieldNameSeparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
