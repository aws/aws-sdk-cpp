/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/Layout.h>
#include <aws/pinpoint/model/InAppMessageContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides all fields required for building an in-app message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessage">AWS
   * API Reference</a></p>
   */
  class InAppMessage
  {
  public:
    AWS_PINPOINT_API InAppMessage() = default;
    AWS_PINPOINT_API InAppMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>In-app message content.</p>
     */
    inline const Aws::Vector<InAppMessageContent>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<InAppMessageContent>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<InAppMessageContent>>
    InAppMessage& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = InAppMessageContent>
    InAppMessage& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomConfig() const { return m_customConfig; }
    inline bool CustomConfigHasBeenSet() const { return m_customConfigHasBeenSet; }
    template<typename CustomConfigT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomConfig(CustomConfigT&& value) { m_customConfigHasBeenSet = true; m_customConfig = std::forward<CustomConfigT>(value); }
    template<typename CustomConfigT = Aws::Map<Aws::String, Aws::String>>
    InAppMessage& WithCustomConfig(CustomConfigT&& value) { SetCustomConfig(std::forward<CustomConfigT>(value)); return *this;}
    template<typename CustomConfigKeyT = Aws::String, typename CustomConfigValueT = Aws::String>
    InAppMessage& AddCustomConfig(CustomConfigKeyT&& key, CustomConfigValueT&& value) {
      m_customConfigHasBeenSet = true; m_customConfig.emplace(std::forward<CustomConfigKeyT>(key), std::forward<CustomConfigValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The layout of the message.</p>
     */
    inline Layout GetLayout() const { return m_layout; }
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
    inline void SetLayout(Layout value) { m_layoutHasBeenSet = true; m_layout = value; }
    inline InAppMessage& WithLayout(Layout value) { SetLayout(value); return *this;}
    ///@}
  private:

    Aws::Vector<InAppMessageContent> m_content;
    bool m_contentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customConfig;
    bool m_customConfigHasBeenSet = false;

    Layout m_layout{Layout::NOT_SET};
    bool m_layoutHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
