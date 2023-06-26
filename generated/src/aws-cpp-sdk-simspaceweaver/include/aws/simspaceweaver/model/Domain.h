﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/model/LifecycleManagementStrategy.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>A collection of app instances that run the same executable app code and have
   * the same launch options and commands.</p> <p>For more information about domains,
   * see <a
   * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/what-is_key-concepts.html#what-is_key-concepts_domains">Key
   * concepts: Domains</a> in the <i>SimSpace Weaver User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/Domain">AWS
   * API Reference</a></p>
   */
  class Domain
  {
  public:
    AWS_SIMSPACEWEAVER_API Domain();
    AWS_SIMSPACEWEAVER_API Domain(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Domain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of lifecycle management for apps in the domain. Indicates whether
     * apps in this domain are <i>managed</i> (SimSpace Weaver starts and stops the
     * apps) or <i>unmanaged</i> (you must start and stop the apps).</p> <p
     * class="title"> <b>Lifecycle types</b> </p> <ul> <li> <p> <code>PerWorker</code>
     * – Managed: SimSpace Weaver starts one app on each worker.</p> </li> <li> <p>
     * <code>BySpatialSubdivision</code> – Managed: SimSpace Weaver starts one app for
     * each spatial partition.</p> </li> <li> <p> <code>ByRequest</code> – Unmanaged:
     * You use the <code>StartApp</code> API to start the apps and use the
     * <code>StopApp</code> API to stop the apps.</p> </li> </ul>
     */
    inline const LifecycleManagementStrategy& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The type of lifecycle management for apps in the domain. Indicates whether
     * apps in this domain are <i>managed</i> (SimSpace Weaver starts and stops the
     * apps) or <i>unmanaged</i> (you must start and stop the apps).</p> <p
     * class="title"> <b>Lifecycle types</b> </p> <ul> <li> <p> <code>PerWorker</code>
     * – Managed: SimSpace Weaver starts one app on each worker.</p> </li> <li> <p>
     * <code>BySpatialSubdivision</code> – Managed: SimSpace Weaver starts one app for
     * each spatial partition.</p> </li> <li> <p> <code>ByRequest</code> – Unmanaged:
     * You use the <code>StartApp</code> API to start the apps and use the
     * <code>StopApp</code> API to stop the apps.</p> </li> </ul>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The type of lifecycle management for apps in the domain. Indicates whether
     * apps in this domain are <i>managed</i> (SimSpace Weaver starts and stops the
     * apps) or <i>unmanaged</i> (you must start and stop the apps).</p> <p
     * class="title"> <b>Lifecycle types</b> </p> <ul> <li> <p> <code>PerWorker</code>
     * – Managed: SimSpace Weaver starts one app on each worker.</p> </li> <li> <p>
     * <code>BySpatialSubdivision</code> – Managed: SimSpace Weaver starts one app for
     * each spatial partition.</p> </li> <li> <p> <code>ByRequest</code> – Unmanaged:
     * You use the <code>StartApp</code> API to start the apps and use the
     * <code>StopApp</code> API to stop the apps.</p> </li> </ul>
     */
    inline void SetLifecycle(const LifecycleManagementStrategy& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The type of lifecycle management for apps in the domain. Indicates whether
     * apps in this domain are <i>managed</i> (SimSpace Weaver starts and stops the
     * apps) or <i>unmanaged</i> (you must start and stop the apps).</p> <p
     * class="title"> <b>Lifecycle types</b> </p> <ul> <li> <p> <code>PerWorker</code>
     * – Managed: SimSpace Weaver starts one app on each worker.</p> </li> <li> <p>
     * <code>BySpatialSubdivision</code> – Managed: SimSpace Weaver starts one app for
     * each spatial partition.</p> </li> <li> <p> <code>ByRequest</code> – Unmanaged:
     * You use the <code>StartApp</code> API to start the apps and use the
     * <code>StopApp</code> API to stop the apps.</p> </li> </ul>
     */
    inline void SetLifecycle(LifecycleManagementStrategy&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The type of lifecycle management for apps in the domain. Indicates whether
     * apps in this domain are <i>managed</i> (SimSpace Weaver starts and stops the
     * apps) or <i>unmanaged</i> (you must start and stop the apps).</p> <p
     * class="title"> <b>Lifecycle types</b> </p> <ul> <li> <p> <code>PerWorker</code>
     * – Managed: SimSpace Weaver starts one app on each worker.</p> </li> <li> <p>
     * <code>BySpatialSubdivision</code> – Managed: SimSpace Weaver starts one app for
     * each spatial partition.</p> </li> <li> <p> <code>ByRequest</code> – Unmanaged:
     * You use the <code>StartApp</code> API to start the apps and use the
     * <code>StopApp</code> API to stop the apps.</p> </li> </ul>
     */
    inline Domain& WithLifecycle(const LifecycleManagementStrategy& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The type of lifecycle management for apps in the domain. Indicates whether
     * apps in this domain are <i>managed</i> (SimSpace Weaver starts and stops the
     * apps) or <i>unmanaged</i> (you must start and stop the apps).</p> <p
     * class="title"> <b>Lifecycle types</b> </p> <ul> <li> <p> <code>PerWorker</code>
     * – Managed: SimSpace Weaver starts one app on each worker.</p> </li> <li> <p>
     * <code>BySpatialSubdivision</code> – Managed: SimSpace Weaver starts one app for
     * each spatial partition.</p> </li> <li> <p> <code>ByRequest</code> – Unmanaged:
     * You use the <code>StartApp</code> API to start the apps and use the
     * <code>StopApp</code> API to stop the apps.</p> </li> </ul>
     */
    inline Domain& WithLifecycle(LifecycleManagementStrategy&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline Domain& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline Domain& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline Domain& WithName(const char* value) { SetName(value); return *this;}

  private:

    LifecycleManagementStrategy m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
