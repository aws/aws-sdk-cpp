/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p> Provides details for allowing no client authentication. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails">AWS
   * API Reference</a></p>
   */
  class AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails
  {
  public:
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails();
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether unauthenticated is allowed or not.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p> Indicates whether unauthenticated is allowed or not.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p> Indicates whether unauthenticated is allowed or not.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p> Indicates whether unauthenticated is allowed or not.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
