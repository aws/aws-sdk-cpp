/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes the Chef configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ChefConfiguration">AWS
   * API Reference</a></p>
   */
  class ChefConfiguration
  {
  public:
    AWS_OPSWORKS_API ChefConfiguration();
    AWS_OPSWORKS_API ChefConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API ChefConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline bool GetManageBerkshelf() const{ return m_manageBerkshelf; }

    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline bool ManageBerkshelfHasBeenSet() const { return m_manageBerkshelfHasBeenSet; }

    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline void SetManageBerkshelf(bool value) { m_manageBerkshelfHasBeenSet = true; m_manageBerkshelf = value; }

    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline ChefConfiguration& WithManageBerkshelf(bool value) { SetManageBerkshelf(value); return *this;}


    /**
     * <p>The Berkshelf version.</p>
     */
    inline const Aws::String& GetBerkshelfVersion() const{ return m_berkshelfVersion; }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline bool BerkshelfVersionHasBeenSet() const { return m_berkshelfVersionHasBeenSet; }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline void SetBerkshelfVersion(const Aws::String& value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion = value; }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline void SetBerkshelfVersion(Aws::String&& value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion = std::move(value); }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline void SetBerkshelfVersion(const char* value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion.assign(value); }

    /**
     * <p>The Berkshelf version.</p>
     */
    inline ChefConfiguration& WithBerkshelfVersion(const Aws::String& value) { SetBerkshelfVersion(value); return *this;}

    /**
     * <p>The Berkshelf version.</p>
     */
    inline ChefConfiguration& WithBerkshelfVersion(Aws::String&& value) { SetBerkshelfVersion(std::move(value)); return *this;}

    /**
     * <p>The Berkshelf version.</p>
     */
    inline ChefConfiguration& WithBerkshelfVersion(const char* value) { SetBerkshelfVersion(value); return *this;}

  private:

    bool m_manageBerkshelf;
    bool m_manageBerkshelfHasBeenSet = false;

    Aws::String m_berkshelfVersion;
    bool m_berkshelfVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
