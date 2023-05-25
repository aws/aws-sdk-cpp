/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>The version of the requested service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ServiceVersion">AWS
   * API Reference</a></p>
   */
  class ServiceVersion
  {
  public:
    AWS_SNOWBALL_API ServiceVersion();
    AWS_SNOWBALL_API ServiceVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API ServiceVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version number of the requested service.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the requested service.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the requested service.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the requested service.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version number of the requested service.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version number of the requested service.</p>
     */
    inline ServiceVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number of the requested service.</p>
     */
    inline ServiceVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the requested service.</p>
     */
    inline ServiceVersion& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
