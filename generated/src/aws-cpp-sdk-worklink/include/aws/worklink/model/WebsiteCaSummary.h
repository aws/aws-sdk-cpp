/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkLink
{
namespace Model
{

  /**
   * <p>The summary of the certificate authority (CA).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/WebsiteCaSummary">AWS
   * API Reference</a></p>
   */
  class WebsiteCaSummary
  {
  public:
    AWS_WORKLINK_API WebsiteCaSummary() = default;
    AWS_WORKLINK_API WebsiteCaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API WebsiteCaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline const Aws::String& GetWebsiteCaId() const { return m_websiteCaId; }
    inline bool WebsiteCaIdHasBeenSet() const { return m_websiteCaIdHasBeenSet; }
    template<typename WebsiteCaIdT = Aws::String>
    void SetWebsiteCaId(WebsiteCaIdT&& value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId = std::forward<WebsiteCaIdT>(value); }
    template<typename WebsiteCaIdT = Aws::String>
    WebsiteCaSummary& WithWebsiteCaId(WebsiteCaIdT&& value) { SetWebsiteCaId(std::forward<WebsiteCaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the CA was added.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    WebsiteCaSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    WebsiteCaSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_websiteCaId;
    bool m_websiteCaIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
