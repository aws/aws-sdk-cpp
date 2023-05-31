/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The IP rules of the IP access settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/IpRule">AWS
   * API Reference</a></p>
   */
  class IpRule
  {
  public:
    AWS_WORKSPACESWEB_API IpRule();
    AWS_WORKSPACESWEB_API IpRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API IpRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the IP rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the IP rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the IP rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the IP rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the IP rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the IP rule.</p>
     */
    inline IpRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the IP rule.</p>
     */
    inline IpRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the IP rule.</p>
     */
    inline IpRule& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline const Aws::String& GetIpRange() const{ return m_ipRange; }

    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline bool IpRangeHasBeenSet() const { return m_ipRangeHasBeenSet; }

    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline void SetIpRange(const Aws::String& value) { m_ipRangeHasBeenSet = true; m_ipRange = value; }

    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline void SetIpRange(Aws::String&& value) { m_ipRangeHasBeenSet = true; m_ipRange = std::move(value); }

    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline void SetIpRange(const char* value) { m_ipRangeHasBeenSet = true; m_ipRange.assign(value); }

    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline IpRule& WithIpRange(const Aws::String& value) { SetIpRange(value); return *this;}

    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline IpRule& WithIpRange(Aws::String&& value) { SetIpRange(std::move(value)); return *this;}

    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline IpRule& WithIpRange(const char* value) { SetIpRange(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ipRange;
    bool m_ipRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
