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
    AWS_WORKLINK_API WebsiteCaSummary();
    AWS_WORKLINK_API WebsiteCaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API WebsiteCaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline const Aws::String& GetWebsiteCaId() const{ return m_websiteCaId; }
    inline bool WebsiteCaIdHasBeenSet() const { return m_websiteCaIdHasBeenSet; }
    inline void SetWebsiteCaId(const Aws::String& value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId = value; }
    inline void SetWebsiteCaId(Aws::String&& value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId = std::move(value); }
    inline void SetWebsiteCaId(const char* value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId.assign(value); }
    inline WebsiteCaSummary& WithWebsiteCaId(const Aws::String& value) { SetWebsiteCaId(value); return *this;}
    inline WebsiteCaSummary& WithWebsiteCaId(Aws::String&& value) { SetWebsiteCaId(std::move(value)); return *this;}
    inline WebsiteCaSummary& WithWebsiteCaId(const char* value) { SetWebsiteCaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the CA was added.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline WebsiteCaSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline WebsiteCaSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline WebsiteCaSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline WebsiteCaSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline WebsiteCaSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}
  private:

    Aws::String m_websiteCaId;
    bool m_websiteCaIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
