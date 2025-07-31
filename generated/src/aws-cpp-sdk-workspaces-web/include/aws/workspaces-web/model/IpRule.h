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
    AWS_WORKSPACESWEB_API IpRule() = default;
    AWS_WORKSPACESWEB_API IpRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API IpRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP range of the IP rule.</p>
     */
    inline const Aws::String& GetIpRange() const { return m_ipRange; }
    inline bool IpRangeHasBeenSet() const { return m_ipRangeHasBeenSet; }
    template<typename IpRangeT = Aws::String>
    void SetIpRange(IpRangeT&& value) { m_ipRangeHasBeenSet = true; m_ipRange = std::forward<IpRangeT>(value); }
    template<typename IpRangeT = Aws::String>
    IpRule& WithIpRange(IpRangeT&& value) { SetIpRange(std::forward<IpRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the IP rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IpRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipRange;
    bool m_ipRangeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
