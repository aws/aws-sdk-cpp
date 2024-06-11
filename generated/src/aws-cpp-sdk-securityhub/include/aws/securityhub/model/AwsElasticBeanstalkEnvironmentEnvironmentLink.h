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
   * <p>Contains information about a link to another environment that is in the same
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticBeanstalkEnvironmentEnvironmentLink">AWS
   * API Reference</a></p>
   */
  class AwsElasticBeanstalkEnvironmentEnvironmentLink
  {
  public:
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentEnvironmentLink();
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentEnvironmentLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentEnvironmentLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the linked environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline AwsElasticBeanstalkEnvironmentEnvironmentLink& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentEnvironmentLink& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentEnvironmentLink& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment link.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }
    inline AwsElasticBeanstalkEnvironmentEnvironmentLink& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentEnvironmentLink& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentEnvironmentLink& WithLinkName(const char* value) { SetLinkName(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
