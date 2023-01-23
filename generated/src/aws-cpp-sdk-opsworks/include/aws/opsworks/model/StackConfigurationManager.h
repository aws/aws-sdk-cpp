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
   * <p>Describes the configuration manager.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StackConfigurationManager">AWS
   * API Reference</a></p>
   */
  class StackConfigurationManager
  {
  public:
    AWS_OPSWORKS_API StackConfigurationManager();
    AWS_OPSWORKS_API StackConfigurationManager(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API StackConfigurationManager& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name. This parameter must be set to "Chef".</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name. This parameter must be set to "Chef".</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name. This parameter must be set to "Chef".</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name. This parameter must be set to "Chef".</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name. This parameter must be set to "Chef".</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name. This parameter must be set to "Chef".</p>
     */
    inline StackConfigurationManager& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name. This parameter must be set to "Chef".</p>
     */
    inline StackConfigurationManager& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name. This parameter must be set to "Chef".</p>
     */
    inline StackConfigurationManager& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Chef version. This parameter must be set to 12, 11.10, or 11.4 for Linux
     * stacks, and to 12.2 for Windows stacks. The default value for Linux stacks is
     * 11.4.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The Chef version. This parameter must be set to 12, 11.10, or 11.4 for Linux
     * stacks, and to 12.2 for Windows stacks. The default value for Linux stacks is
     * 11.4.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The Chef version. This parameter must be set to 12, 11.10, or 11.4 for Linux
     * stacks, and to 12.2 for Windows stacks. The default value for Linux stacks is
     * 11.4.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The Chef version. This parameter must be set to 12, 11.10, or 11.4 for Linux
     * stacks, and to 12.2 for Windows stacks. The default value for Linux stacks is
     * 11.4.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The Chef version. This parameter must be set to 12, 11.10, or 11.4 for Linux
     * stacks, and to 12.2 for Windows stacks. The default value for Linux stacks is
     * 11.4.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The Chef version. This parameter must be set to 12, 11.10, or 11.4 for Linux
     * stacks, and to 12.2 for Windows stacks. The default value for Linux stacks is
     * 11.4.</p>
     */
    inline StackConfigurationManager& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The Chef version. This parameter must be set to 12, 11.10, or 11.4 for Linux
     * stacks, and to 12.2 for Windows stacks. The default value for Linux stacks is
     * 11.4.</p>
     */
    inline StackConfigurationManager& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The Chef version. This parameter must be set to 12, 11.10, or 11.4 for Linux
     * stacks, and to 12.2 for Windows stacks. The default value for Linux stacks is
     * 11.4.</p>
     */
    inline StackConfigurationManager& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
