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


    ///@{
    /**
     * <p>Whether to enable Berkshelf.</p>
     */
    inline bool GetManageBerkshelf() const{ return m_manageBerkshelf; }
    inline bool ManageBerkshelfHasBeenSet() const { return m_manageBerkshelfHasBeenSet; }
    inline void SetManageBerkshelf(bool value) { m_manageBerkshelfHasBeenSet = true; m_manageBerkshelf = value; }
    inline ChefConfiguration& WithManageBerkshelf(bool value) { SetManageBerkshelf(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Berkshelf version.</p>
     */
    inline const Aws::String& GetBerkshelfVersion() const{ return m_berkshelfVersion; }
    inline bool BerkshelfVersionHasBeenSet() const { return m_berkshelfVersionHasBeenSet; }
    inline void SetBerkshelfVersion(const Aws::String& value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion = value; }
    inline void SetBerkshelfVersion(Aws::String&& value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion = std::move(value); }
    inline void SetBerkshelfVersion(const char* value) { m_berkshelfVersionHasBeenSet = true; m_berkshelfVersion.assign(value); }
    inline ChefConfiguration& WithBerkshelfVersion(const Aws::String& value) { SetBerkshelfVersion(value); return *this;}
    inline ChefConfiguration& WithBerkshelfVersion(Aws::String&& value) { SetBerkshelfVersion(std::move(value)); return *this;}
    inline ChefConfiguration& WithBerkshelfVersion(const char* value) { SetBerkshelfVersion(value); return *this;}
    ///@}
  private:

    bool m_manageBerkshelf;
    bool m_manageBerkshelfHasBeenSet = false;

    Aws::String m_berkshelfVersion;
    bool m_berkshelfVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
