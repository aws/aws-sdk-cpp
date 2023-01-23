/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A ulimit to set in the container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hard limit for the ulimit type.</p>
     */
    inline int GetHardLimit() const{ return m_hardLimit; }

    /**
     * <p>The hard limit for the ulimit type.</p>
     */
    inline bool HardLimitHasBeenSet() const { return m_hardLimitHasBeenSet; }

    /**
     * <p>The hard limit for the ulimit type.</p>
     */
    inline void SetHardLimit(int value) { m_hardLimitHasBeenSet = true; m_hardLimit = value; }

    /**
     * <p>The hard limit for the ulimit type.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails& WithHardLimit(int value) { SetHardLimit(value); return *this;}


    /**
     * <p>The type of the ulimit. Valid values are as follows:</p> <ul> <li> <p>
     * <code>core</code> </p> </li> <li> <p> <code>cpu</code> </p> </li> <li> <p>
     * <code>data</code> </p> </li> <li> <p> <code>fsize</code> </p> </li> <li> <p>
     * <code>locks</code> </p> </li> <li> <p> <code>memlock</code> </p> </li> <li> <p>
     * <code>msgqueue</code> </p> </li> <li> <p> <code>nice</code> </p> </li> <li> <p>
     * <code>nofile</code> </p> </li> <li> <p> <code>nproc</code> </p> </li> <li> <p>
     * <code>rss</code> </p> </li> <li> <p> <code>rtprio</code> </p> </li> <li> <p>
     * <code>rttime</code> </p> </li> <li> <p> <code>sigpending</code> </p> </li> <li>
     * <p> <code>stack</code> </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The type of the ulimit. Valid values are as follows:</p> <ul> <li> <p>
     * <code>core</code> </p> </li> <li> <p> <code>cpu</code> </p> </li> <li> <p>
     * <code>data</code> </p> </li> <li> <p> <code>fsize</code> </p> </li> <li> <p>
     * <code>locks</code> </p> </li> <li> <p> <code>memlock</code> </p> </li> <li> <p>
     * <code>msgqueue</code> </p> </li> <li> <p> <code>nice</code> </p> </li> <li> <p>
     * <code>nofile</code> </p> </li> <li> <p> <code>nproc</code> </p> </li> <li> <p>
     * <code>rss</code> </p> </li> <li> <p> <code>rtprio</code> </p> </li> <li> <p>
     * <code>rttime</code> </p> </li> <li> <p> <code>sigpending</code> </p> </li> <li>
     * <p> <code>stack</code> </p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The type of the ulimit. Valid values are as follows:</p> <ul> <li> <p>
     * <code>core</code> </p> </li> <li> <p> <code>cpu</code> </p> </li> <li> <p>
     * <code>data</code> </p> </li> <li> <p> <code>fsize</code> </p> </li> <li> <p>
     * <code>locks</code> </p> </li> <li> <p> <code>memlock</code> </p> </li> <li> <p>
     * <code>msgqueue</code> </p> </li> <li> <p> <code>nice</code> </p> </li> <li> <p>
     * <code>nofile</code> </p> </li> <li> <p> <code>nproc</code> </p> </li> <li> <p>
     * <code>rss</code> </p> </li> <li> <p> <code>rtprio</code> </p> </li> <li> <p>
     * <code>rttime</code> </p> </li> <li> <p> <code>sigpending</code> </p> </li> <li>
     * <p> <code>stack</code> </p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The type of the ulimit. Valid values are as follows:</p> <ul> <li> <p>
     * <code>core</code> </p> </li> <li> <p> <code>cpu</code> </p> </li> <li> <p>
     * <code>data</code> </p> </li> <li> <p> <code>fsize</code> </p> </li> <li> <p>
     * <code>locks</code> </p> </li> <li> <p> <code>memlock</code> </p> </li> <li> <p>
     * <code>msgqueue</code> </p> </li> <li> <p> <code>nice</code> </p> </li> <li> <p>
     * <code>nofile</code> </p> </li> <li> <p> <code>nproc</code> </p> </li> <li> <p>
     * <code>rss</code> </p> </li> <li> <p> <code>rtprio</code> </p> </li> <li> <p>
     * <code>rttime</code> </p> </li> <li> <p> <code>sigpending</code> </p> </li> <li>
     * <p> <code>stack</code> </p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The type of the ulimit. Valid values are as follows:</p> <ul> <li> <p>
     * <code>core</code> </p> </li> <li> <p> <code>cpu</code> </p> </li> <li> <p>
     * <code>data</code> </p> </li> <li> <p> <code>fsize</code> </p> </li> <li> <p>
     * <code>locks</code> </p> </li> <li> <p> <code>memlock</code> </p> </li> <li> <p>
     * <code>msgqueue</code> </p> </li> <li> <p> <code>nice</code> </p> </li> <li> <p>
     * <code>nofile</code> </p> </li> <li> <p> <code>nproc</code> </p> </li> <li> <p>
     * <code>rss</code> </p> </li> <li> <p> <code>rtprio</code> </p> </li> <li> <p>
     * <code>rttime</code> </p> </li> <li> <p> <code>sigpending</code> </p> </li> <li>
     * <p> <code>stack</code> </p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The type of the ulimit. Valid values are as follows:</p> <ul> <li> <p>
     * <code>core</code> </p> </li> <li> <p> <code>cpu</code> </p> </li> <li> <p>
     * <code>data</code> </p> </li> <li> <p> <code>fsize</code> </p> </li> <li> <p>
     * <code>locks</code> </p> </li> <li> <p> <code>memlock</code> </p> </li> <li> <p>
     * <code>msgqueue</code> </p> </li> <li> <p> <code>nice</code> </p> </li> <li> <p>
     * <code>nofile</code> </p> </li> <li> <p> <code>nproc</code> </p> </li> <li> <p>
     * <code>rss</code> </p> </li> <li> <p> <code>rtprio</code> </p> </li> <li> <p>
     * <code>rttime</code> </p> </li> <li> <p> <code>sigpending</code> </p> </li> <li>
     * <p> <code>stack</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The type of the ulimit. Valid values are as follows:</p> <ul> <li> <p>
     * <code>core</code> </p> </li> <li> <p> <code>cpu</code> </p> </li> <li> <p>
     * <code>data</code> </p> </li> <li> <p> <code>fsize</code> </p> </li> <li> <p>
     * <code>locks</code> </p> </li> <li> <p> <code>memlock</code> </p> </li> <li> <p>
     * <code>msgqueue</code> </p> </li> <li> <p> <code>nice</code> </p> </li> <li> <p>
     * <code>nofile</code> </p> </li> <li> <p> <code>nproc</code> </p> </li> <li> <p>
     * <code>rss</code> </p> </li> <li> <p> <code>rtprio</code> </p> </li> <li> <p>
     * <code>rttime</code> </p> </li> <li> <p> <code>sigpending</code> </p> </li> <li>
     * <p> <code>stack</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The type of the ulimit. Valid values are as follows:</p> <ul> <li> <p>
     * <code>core</code> </p> </li> <li> <p> <code>cpu</code> </p> </li> <li> <p>
     * <code>data</code> </p> </li> <li> <p> <code>fsize</code> </p> </li> <li> <p>
     * <code>locks</code> </p> </li> <li> <p> <code>memlock</code> </p> </li> <li> <p>
     * <code>msgqueue</code> </p> </li> <li> <p> <code>nice</code> </p> </li> <li> <p>
     * <code>nofile</code> </p> </li> <li> <p> <code>nproc</code> </p> </li> <li> <p>
     * <code>rss</code> </p> </li> <li> <p> <code>rtprio</code> </p> </li> <li> <p>
     * <code>rttime</code> </p> </li> <li> <p> <code>sigpending</code> </p> </li> <li>
     * <p> <code>stack</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline int GetSoftLimit() const{ return m_softLimit; }

    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline bool SoftLimitHasBeenSet() const { return m_softLimitHasBeenSet; }

    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline void SetSoftLimit(int value) { m_softLimitHasBeenSet = true; m_softLimit = value; }

    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails& WithSoftLimit(int value) { SetSoftLimit(value); return *this;}

  private:

    int m_hardLimit;
    bool m_hardLimitHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_softLimit;
    bool m_softLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
