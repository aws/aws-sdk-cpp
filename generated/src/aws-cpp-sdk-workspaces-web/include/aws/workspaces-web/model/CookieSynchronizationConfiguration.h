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
    AWS_WORKSPACESWEB_API CookieSynchronizationConfiguration();
    AWS_WORKSPACESWEB_API CookieSynchronizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API CookieSynchronizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline const Aws::Vector<CookieSpecification>& GetAllowlist() const{ return m_allowlist; }

    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline bool AllowlistHasBeenSet() const { return m_allowlistHasBeenSet; }

    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline void SetAllowlist(const Aws::Vector<CookieSpecification>& value) { m_allowlistHasBeenSet = true; m_allowlist = value; }

    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline void SetAllowlist(Aws::Vector<CookieSpecification>&& value) { m_allowlistHasBeenSet = true; m_allowlist = std::move(value); }

    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline CookieSynchronizationConfiguration& WithAllowlist(const Aws::Vector<CookieSpecification>& value) { SetAllowlist(value); return *this;}

    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline CookieSynchronizationConfiguration& WithAllowlist(Aws::Vector<CookieSpecification>&& value) { SetAllowlist(std::move(value)); return *this;}

    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline CookieSynchronizationConfiguration& AddAllowlist(const CookieSpecification& value) { m_allowlistHasBeenSet = true; m_allowlist.push_back(value); return *this; }

    /**
     * <p>The list of cookie specifications that are allowed to be synchronized to the
     * remote browser.</p>
     */
    inline CookieSynchronizationConfiguration& AddAllowlist(CookieSpecification&& value) { m_allowlistHasBeenSet = true; m_allowlist.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline const Aws::Vector<CookieSpecification>& GetBlocklist() const{ return m_blocklist; }

    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline bool BlocklistHasBeenSet() const { return m_blocklistHasBeenSet; }

    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline void SetBlocklist(const Aws::Vector<CookieSpecification>& value) { m_blocklistHasBeenSet = true; m_blocklist = value; }

    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline void SetBlocklist(Aws::Vector<CookieSpecification>&& value) { m_blocklistHasBeenSet = true; m_blocklist = std::move(value); }

    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline CookieSynchronizationConfiguration& WithBlocklist(const Aws::Vector<CookieSpecification>& value) { SetBlocklist(value); return *this;}

    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline CookieSynchronizationConfiguration& WithBlocklist(Aws::Vector<CookieSpecification>&& value) { SetBlocklist(std::move(value)); return *this;}

    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline CookieSynchronizationConfiguration& AddBlocklist(const CookieSpecification& value) { m_blocklistHasBeenSet = true; m_blocklist.push_back(value); return *this; }

    /**
     * <p>The list of cookie specifications that are blocked from being synchronized to
     * the remote browser.</p>
     */
    inline CookieSynchronizationConfiguration& AddBlocklist(CookieSpecification&& value) { m_blocklistHasBeenSet = true; m_blocklist.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CookieSpecification> m_allowlist;
    bool m_allowlistHasBeenSet = false;

    Aws::Vector<CookieSpecification> m_blocklist;
    bool m_blocklistHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
