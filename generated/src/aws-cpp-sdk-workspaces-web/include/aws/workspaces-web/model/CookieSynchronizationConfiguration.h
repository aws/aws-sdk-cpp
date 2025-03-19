/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/CookieSpecification.h>
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
   * <p>The configuration that specifies which cookies should be synchronized from
   * the end user's local browser to the remote browser.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CookieSynchronizationConfiguration">AWS
   * API Reference</a></p>
   */
  class CookieSynchronizationConfiguration
  {
  public:
    AWS_WORKSPACESWEB_API CookieSynchronizationConfiguration() = default;
    AWS_WORKSPACESWEB_API CookieSynchronizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API CookieSynchronizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline const Aws::Vector<CookieSpecification>& GetAllowlist() const { return m_allowlist; }
    inline bool AllowlistHasBeenSet() const { return m_allowlistHasBeenSet; }
    template<typename AllowlistT = Aws::Vector<CookieSpecification>>
    void SetAllowlist(AllowlistT&& value) { m_allowlistHasBeenSet = true; m_allowlist = std::forward<AllowlistT>(value); }
    template<typename AllowlistT = Aws::Vector<CookieSpecification>>
    CookieSynchronizationConfiguration& WithAllowlist(AllowlistT&& value) { SetAllowlist(std::forward<AllowlistT>(value)); return *this;}
    template<typename AllowlistT = CookieSpecification>
    CookieSynchronizationConfiguration& AddAllowlist(AllowlistT&& value) { m_allowlistHasBeenSet = true; m_allowlist.emplace_back(std::forward<AllowlistT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline const Aws::Vector<CookieSpecification>& GetBlocklist() const { return m_blocklist; }
    inline bool BlocklistHasBeenSet() const { return m_blocklistHasBeenSet; }
    template<typename BlocklistT = Aws::Vector<CookieSpecification>>
    void SetBlocklist(BlocklistT&& value) { m_blocklistHasBeenSet = true; m_blocklist = std::forward<BlocklistT>(value); }
    template<typename BlocklistT = Aws::Vector<CookieSpecification>>
    CookieSynchronizationConfiguration& WithBlocklist(BlocklistT&& value) { SetBlocklist(std::forward<BlocklistT>(value)); return *this;}
    template<typename BlocklistT = CookieSpecification>
    CookieSynchronizationConfiguration& AddBlocklist(BlocklistT&& value) { m_blocklistHasBeenSet = true; m_blocklist.emplace_back(std::forward<BlocklistT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CookieSpecification> m_allowlist;
    bool m_allowlistHasBeenSet = false;

    Aws::Vector<CookieSpecification> m_blocklist;
    bool m_blocklistHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
