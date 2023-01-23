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
   * <p>Configuration options for zone awareness.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails();
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of Availability Zones that the domain uses. Valid values are
     * <code>2</code> or <code>3</code>. The default is <code>2</code>.</p>
     */
    inline int GetAvailabilityZoneCount() const{ return m_availabilityZoneCount; }

    /**
     * <p>The number of Availability Zones that the domain uses. Valid values are
     * <code>2</code> or <code>3</code>. The default is <code>2</code>.</p>
     */
    inline bool AvailabilityZoneCountHasBeenSet() const { return m_availabilityZoneCountHasBeenSet; }

    /**
     * <p>The number of Availability Zones that the domain uses. Valid values are
     * <code>2</code> or <code>3</code>. The default is <code>2</code>.</p>
     */
    inline void SetAvailabilityZoneCount(int value) { m_availabilityZoneCountHasBeenSet = true; m_availabilityZoneCount = value; }

    /**
     * <p>The number of Availability Zones that the domain uses. Valid values are
     * <code>2</code> or <code>3</code>. The default is <code>2</code>.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& WithAvailabilityZoneCount(int value) { SetAvailabilityZoneCount(value); return *this;}

  private:

    int m_availabilityZoneCount;
    bool m_availabilityZoneCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
